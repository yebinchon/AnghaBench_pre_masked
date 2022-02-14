
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {char* str; int len; } ;
typedef TYPE_1__ strbuf ;
struct TYPE_8__ {int key; int name; } ;
typedef scalar_t__* LPCOLESTR ;
typedef int HRESULT ;
typedef int BOOL ;


 unsigned int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (scalar_t__**,int ,TYPE_1__*,int ) ;
 int FUNC_7 (scalar_t__**,TYPE_1__*) ;
 int FUNC_8 (char*,int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_9 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_10(LPCOLESTR VAR_2, BOOL VAR_3)
{
    LPCOLESTR VAR_4 = VAR_2;
    strbuf VAR_5;
    HRESULT VAR_6;
    unsigned int VAR_7;

    FUNC_9(&VAR_5);
    VAR_6 = FUNC_7(&VAR_4, &VAR_5);
    if(FUNC_1(VAR_6))
        return VAR_6;

    while(*VAR_4) {
        if(!VAR_5.len) {
            FUNC_4("ward.len == 0, failed\n");
            VAR_6 = VAR_0;
            break;
        }
        for(VAR_7=0; VAR_7<FUNC_0(VAR_1); VAR_7++) {
            if(!FUNC_8(VAR_5.str, VAR_1[VAR_7].name))
                break;
        }
        if(VAR_7 == FUNC_0(VAR_1)) {
            FUNC_4("Wrong root key name: %s\n", FUNC_5(VAR_5.str));
            VAR_6 = VAR_0;
            break;
        }
        VAR_6 = FUNC_7(&VAR_4, &VAR_5);
        if(FUNC_1(VAR_6))
            break;
        if(VAR_5.str[1] || VAR_5.str[0] != '{') {
            FUNC_4("Failed, expected '{', got %s\n", FUNC_5(VAR_5.str));
            VAR_6 = VAR_0;
            break;
        }
        VAR_6 = FUNC_6(&VAR_4, VAR_1[VAR_7].key, &VAR_5, VAR_3);
        if(FUNC_1(VAR_6)) {
            FUNC_4("Processing key failed: %08x\n", VAR_6);
            break;
        }
        VAR_6 = FUNC_7(&VAR_4, &VAR_5);
        if(FUNC_1(VAR_6))
            break;
    }
    FUNC_3(FUNC_2(), 0, VAR_5.str);
    return VAR_6;
}
