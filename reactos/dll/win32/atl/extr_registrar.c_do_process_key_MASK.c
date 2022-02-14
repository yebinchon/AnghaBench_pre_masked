
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* str; int len; } ;
typedef TYPE_1__ strbuf ;
typedef int dw ;
typedef char WCHAR ;
typedef char* PBYTE ;
typedef char* LPCOLESTR ;
typedef scalar_t__ LONG ;
typedef int HRESULT ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;
typedef char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,char*,scalar_t__*) ;
 int FUNC_7 (scalar_t__,char*) ;
 int FUNC_8 (scalar_t__,char*) ;
 scalar_t__ FUNC_9 (scalar_t__,char*,scalar_t__*) ;
 scalar_t__ FUNC_10 (scalar_t__,char*,int ,int ,char*,int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int ,...) ;
 int FUNC_13 (char*,...) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char**,TYPE_1__*) ;
 scalar_t__ FUNC_16 (char) ;
 int FUNC_17 (char) ;
 int FUNC_18 (char*,char const*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (char*,TYPE_1__*,int) ;
 int FUNC_22 (char*,int *,int) ;
 int FUNC_23 (char*,int *,int) ;

__attribute__((used)) static HRESULT FUNC_24(LPCOLESTR *VAR_7, HKEY VAR_8, strbuf *VAR_9, BOOL VAR_10)
{
    LPCOLESTR VAR_11;
    HRESULT VAR_12;
    LONG VAR_13;
    HKEY VAR_14 = 0;
    strbuf VAR_15;

    enum {
        NORMAL,
        NO_REMOVE,
        IS_VAL,
        FORCE_REMOVE,
        DO_DELETE
    } VAR_16 = NORMAL;

    static const WCHAR VAR_17[] = {'N','o','R','e','m','o','v','e',0};
    static const WCHAR VAR_18[] = {'F','o','r','c','e','R','e','m','o','v','e',0};
    static const WCHAR VAR_19[] = {'D','e','l','e','t','e',0};
    static const WCHAR VAR_20[] = {'v','a','l',0};

    VAR_11 = *VAR_7;
    VAR_12 = FUNC_15(&VAR_11, VAR_9);
    if(FUNC_0(VAR_12))
        return VAR_12;
    FUNC_20(&VAR_15);

    while(VAR_9->str[1] || VAR_9->str[0] != '}') {
        VAR_16 = NORMAL;
        if(!FUNC_18(VAR_9->str, VAR_17))
            VAR_16 = NO_REMOVE;
        else if(!FUNC_18(VAR_9->str, VAR_18))
            VAR_16 = FORCE_REMOVE;
        else if(!FUNC_18(VAR_9->str, VAR_20))
            VAR_16 = IS_VAL;
        else if(!FUNC_18(VAR_9->str, VAR_19))
            VAR_16 = DO_DELETE;

        if(VAR_16 != NORMAL) {
            VAR_12 = FUNC_15(&VAR_11, VAR_9);
            if(FUNC_0(VAR_12))
                break;
        }
        FUNC_12("name = %s\n", FUNC_14(VAR_9->str));

        if(VAR_10) {
            if(VAR_16 == IS_VAL) {
                VAR_14 = VAR_8;
                FUNC_21(VAR_9->str, &VAR_15, -1);
            }else if(VAR_16 == DO_DELETE) {
                FUNC_12("Deleting %s\n", FUNC_14(VAR_9->str));
                FUNC_8(VAR_8, VAR_9->str);
            }else {
                if(VAR_16 == FORCE_REMOVE)
                    FUNC_8(VAR_8, VAR_9->str);
                VAR_13 = FUNC_6(VAR_8, VAR_9->str, &VAR_14);
                if(VAR_13 != VAR_1) {
                    FUNC_13("Could not create(open) key: %08x\n", VAR_13);
                    VAR_12 = FUNC_2(VAR_13);
                    break;
                }
            }
        }else if(VAR_16 != IS_VAL && VAR_16 != DO_DELETE) {
            FUNC_21(VAR_9->str, &VAR_15, -1);
            VAR_13 = FUNC_9(VAR_8, VAR_9->str, &VAR_14);
              if(VAR_13 != VAR_1)
                FUNC_13("Could not open key %s: %08x\n", FUNC_14(VAR_15.str), VAR_13);
        }

        if(VAR_16 != DO_DELETE && *VAR_11 == '=') {
            VAR_11++;
            VAR_12 = FUNC_15(&VAR_11, VAR_9);
            if(FUNC_0(VAR_12))
                break;
            if(VAR_9->len != 1) {
                FUNC_13("Wrong registry type: %s\n", FUNC_14(VAR_9->str));
                VAR_12 = VAR_0;
                break;
            }
            if(VAR_10) {
                switch(VAR_9->str[0]) {
                case 's':
                    VAR_12 = FUNC_15(&VAR_11, VAR_9);
                    if(FUNC_0(VAR_12))
                        break;
                    VAR_13 = FUNC_10(VAR_14, VAR_15.len ? VAR_15.str : ((void*)0), 0, VAR_6, (PBYTE)VAR_9->str,
                            (FUNC_19(VAR_9->str)+1)*sizeof(WCHAR));
                    if(VAR_13 != VAR_1) {
                        FUNC_13("Could set value of key: %08x\n", VAR_13);
                        VAR_12 = FUNC_2(VAR_13);
                        break;
                    }
                    break;
                case 'd': {
                    DWORD VAR_21;
                    VAR_12 = FUNC_15(&VAR_11, VAR_9);
                    if(FUNC_0(VAR_12))
                        break;
                    VAR_21 = FUNC_22(VAR_9->str, ((void*)0), 10);
                    VAR_13 = FUNC_10(VAR_14, VAR_15.len ? VAR_15.str : ((void*)0), 0, VAR_5,
                            (PBYTE)&VAR_21, sizeof(VAR_21));
                    if(VAR_13 != VAR_1) {
                        FUNC_13("Could set value of key: %08x\n", VAR_13);
                        VAR_12 = FUNC_2(VAR_13);
                        break;
                    }
                    break;
                }
                case 'b': {
                    BYTE *VAR_22;
                    DWORD VAR_23;
                    DWORD VAR_24;
                    VAR_12 = FUNC_15(&VAR_11, VAR_9);
                    if(FUNC_0(VAR_12))
                        break;
                    VAR_23 = (FUNC_19(VAR_9->str) + 1) / 2;
                    VAR_22 = FUNC_3(FUNC_1(), 0, VAR_23);
                    if(VAR_22 == ((void*)0)) {
                        VAR_12 = VAR_3;
                        break;
                    }
                    for(VAR_24 = 0; VAR_24 < VAR_23 && VAR_9->str[2*VAR_24]; VAR_24++) {
                        WCHAR VAR_25[3];
                        if(!FUNC_17(VAR_9->str[2*VAR_24]) || !FUNC_17(VAR_9->str[2*VAR_24 + 1])) {
                            VAR_12 = VAR_2;
                            break;
                        }
                        VAR_25[0] = VAR_9->str[2*VAR_24];
                        VAR_25[1] = VAR_9->str[2*VAR_24 + 1];
                        VAR_25[2] = 0;
                        VAR_22[VAR_24] = (BYTE) FUNC_23(VAR_25, ((void*)0), 16);
                    }
                    if(FUNC_11(VAR_12)) {
                        VAR_13 = FUNC_10(VAR_14, VAR_15.len ? VAR_15.str : ((void*)0), 0, VAR_4,
                            VAR_22, VAR_23);
                        if(VAR_13 != VAR_1) {
                            FUNC_13("Could not set value of key: 0x%08x\n", VAR_13);
                            VAR_12 = FUNC_2(VAR_13);
                        }
                    }
                    FUNC_4(FUNC_1(), 0, VAR_22);
                    break;
                }
                default:
                    FUNC_13("Wrong resource type: %s\n", FUNC_14(VAR_9->str));
                    VAR_12 = VAR_0;
                };
                if(FUNC_0(VAR_12))
                    break;
            }else {
                if(*VAR_11 == '-')
                    VAR_11++;
                VAR_12 = FUNC_15(&VAR_11, VAR_9);
                if(FUNC_0(VAR_12))
                    break;
            }
        }else if(VAR_16 == IS_VAL) {
            FUNC_13("value not set!\n");
            VAR_12 = VAR_0;
            break;
        }

        if(VAR_16 != IS_VAL && VAR_16 != DO_DELETE && *VAR_11 == '{' && FUNC_16(VAR_11[1])) {
            VAR_12 = FUNC_15(&VAR_11, VAR_9);
            if(FUNC_0(VAR_12))
                break;
            VAR_12 = FUNC_24(&VAR_11, VAR_14, VAR_9, VAR_10);
            if(FUNC_0(VAR_12))
                break;
        }

        FUNC_12("%x %x\n", VAR_10, VAR_16);
        if(!VAR_10 && (VAR_16 == NORMAL || VAR_16 == FORCE_REMOVE)) {
            FUNC_12("Deleting %s\n", FUNC_14(VAR_15.str));
            FUNC_7(VAR_8, VAR_15.str);
        }

        if(VAR_14 && VAR_16 != IS_VAL)
            FUNC_5(VAR_14);
        VAR_14 = 0;
        VAR_15.len = 0;

        VAR_12 = FUNC_15(&VAR_11, VAR_9);
        if(FUNC_0(VAR_12))
            break;
    }

    FUNC_4(FUNC_1(), 0, VAR_15.str);
    if(VAR_14 && VAR_16 != IS_VAL)
        FUNC_5(VAR_14);
    *VAR_7 = VAR_11;
    return VAR_12;
}
