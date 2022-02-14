
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ver ;
typedef int entry ;
typedef int WORD ;
typedef char WCHAR ;
struct TYPE_3__ {char* defToc; char* defTopic; char* defTitle; char* compiledFile; void* defWindow; int codePage; int pStorage; } ;
typedef int LCID ;
typedef int IStream ;
typedef scalar_t__ HRESULT ;
typedef char DWORD ;
typedef TYPE_1__ CHMInfo ;
typedef int BOOL ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,char*,int) ;
 scalar_t__ FUNC_2 (int ,char const*,int *,int ,int ,int **) ;
 scalar_t__ FUNC_3 (int *,...) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*,int,...) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 (char*,int) ;
 char* FUNC_9 (int) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (char*,char) ;
 void* FUNC_12 (char*,int) ;

__attribute__((used)) static BOOL FUNC_13(CHMInfo *VAR_6)
{
    IStream *VAR_7;
    DWORD VAR_8=0xdeadbeef, VAR_9, VAR_10;
    char *VAR_11;
    HRESULT VAR_12;

    struct {
        WORD code;
        WORD len;
    } VAR_13;

    static const WCHAR VAR_14[] = {'#','S','Y','S','T','E','M',0};

    VAR_12 = FUNC_2(VAR_6->pStorage, VAR_14, ((void*)0), VAR_4, 0, &VAR_7);
    if(FUNC_0(VAR_12)) {
        FUNC_7("Could not open #SYSTEM stream: %08x\n", VAR_12);
        return VAR_1;
    }

    FUNC_3(VAR_7, &VAR_8, sizeof(VAR_8), &VAR_9);
    FUNC_6("version is %x\n", VAR_8);

    VAR_11 = FUNC_9(8*sizeof(DWORD));
    VAR_10 = 8*sizeof(DWORD);

    while(1) {
        VAR_12 = FUNC_3(VAR_7, &VAR_13, sizeof(VAR_13), &VAR_9);
        if(VAR_12 != VAR_5)
            break;

        if(VAR_13.len > VAR_10)
            VAR_11 = FUNC_11(VAR_11, VAR_10=VAR_13.len);

        VAR_12 = FUNC_3(VAR_7, VAR_11, VAR_13.len, &VAR_9);
        if(VAR_12 != VAR_5)
            break;

        switch(VAR_13.code) {
        case 0x0:
            FUNC_6("TOC is %s\n", FUNC_8(VAR_11, VAR_13.len));
            FUNC_10(VAR_6->defToc);
            VAR_6->defToc = FUNC_12(VAR_11, VAR_13.len);
            break;
        case 0x2:
            FUNC_6("Default topic is %s\n", FUNC_8(VAR_11, VAR_13.len));
            FUNC_10(VAR_6->defTopic);
            VAR_6->defTopic = FUNC_12(VAR_11, VAR_13.len);
            break;
        case 0x3:
            FUNC_6("Title is %s\n", FUNC_8(VAR_11, VAR_13.len));
            FUNC_10(VAR_6->defTitle);
            VAR_6->defTitle = FUNC_12(VAR_11, VAR_13.len);
            break;
        case 0x4:

            FUNC_6("Locale is: %d\n", *(LCID*)&VAR_11[0]);
            if(!FUNC_1(*(LCID*)&VAR_11[0], VAR_2|VAR_3,
                               (WCHAR *)&VAR_6->codePage, sizeof(VAR_6->codePage)/sizeof(WCHAR)))
                VAR_6->codePage = VAR_0;
            break;
        case 0x5:
            FUNC_6("Window name is %s\n", FUNC_8(VAR_11, VAR_13.len));
            VAR_6->defWindow = FUNC_12(VAR_11, VAR_13.len);
            break;
        case 0x6:
            FUNC_6("Compiled file is %s\n", FUNC_8(VAR_11, VAR_13.len));
            FUNC_10(VAR_6->compiledFile);
            VAR_6->compiledFile = FUNC_12(VAR_11, VAR_13.len);
            break;
        case 0x9:
            FUNC_6("Version is %s\n", FUNC_8(VAR_11, VAR_13.len));
            break;
        case 0xa:
            FUNC_6("Time is %08x\n", *(DWORD*)VAR_11);
            break;
        case 0xc:
            FUNC_6("Number of info types: %d\n", *(DWORD*)VAR_11);
            break;
        case 0xf:
            FUNC_6("Check sum: %x\n", *(DWORD*)VAR_11);
            break;
        default:
            FUNC_6("unhandled code %x, size %x\n", VAR_13.code, VAR_13.len);
        }
    }

    FUNC_10(VAR_11);
    FUNC_4(VAR_7);

    return FUNC_5(VAR_12);
}
