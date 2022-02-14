
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int szPropertyName ;
typedef char WCHAR ;
struct TYPE_11__ {char* szAppName; char const* szClassName; struct TYPE_11__* next; struct TYPE_11__* overrides; } ;
struct TYPE_10__ {TYPE_2__* classes; } ;
typedef int PUXINI_FILE ;
typedef int PTHEME_PARTSTATE ;
typedef TYPE_1__* PTHEME_FILE ;
typedef TYPE_2__* PTHEME_CLASS ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int ,scalar_t__,char const*,int) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_2 (TYPE_1__*,char*,char*) ;
 int FUNC_3 (TYPE_1__*,int,int,int ,scalar_t__) ;
 int FUNC_4 (TYPE_2__*,int,int) ;
 int FUNC_5 (int ,int,int,int ,scalar_t__,int ) ;
 void* FUNC_6 (TYPE_1__*,int *,char const*) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (char*,int*,int*) ;
 scalar_t__ FUNC_9 (int ,scalar_t__,char*,char*,int*,int*) ;
 int VAR_6 ;
 int FUNC_10 (char*,int ,...) ;
 int VAR_7 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,scalar_t__*) ;
 int FUNC_13 (int ,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_14 (char*) ;
 int FUNC_15 (char*,char const*) ;
 int FUNC_16 (char*,int ,int ) ;
 int FUNC_17 (scalar_t__,int) ;

void FUNC_18(PTHEME_FILE VAR_8)
{
    static const WCHAR VAR_9[] = {'S','y','s','M','e','t','r','i','c','s','\0'};
    static const WCHAR VAR_10[] = {'g','l','o','b','a','l','s','\0'};
    PTHEME_CLASS VAR_11;
    PTHEME_CLASS VAR_12;
    PTHEME_PARTSTATE VAR_13;
    PUXINI_FILE VAR_14;
    WCHAR VAR_15[VAR_3];
    WCHAR VAR_16[VAR_4];
    WCHAR VAR_17[VAR_5];
    int VAR_18;
    int VAR_19;
    int VAR_20;
    int VAR_21;
    DWORD VAR_22;
    LPCWSTR VAR_23;
    DWORD VAR_24;
    LPCWSTR VAR_25;

    if(VAR_8->classes)
        return;

    VAR_14 = FUNC_7(VAR_8);

    while((VAR_23=FUNC_12(VAR_14, &VAR_22)))
    {
        if(FUNC_0(VAR_2, VAR_6, VAR_23, VAR_22, VAR_9, -1) == VAR_0)
        {
            while((VAR_23=FUNC_13(VAR_14, &VAR_22, &VAR_25, &VAR_24)))
            {
                FUNC_16(VAR_17, VAR_23, FUNC_17(VAR_22+1, sizeof(VAR_17)/sizeof(VAR_17[0])));
                if(FUNC_8(VAR_17, &VAR_20, &VAR_21))
                {

                   FUNC_3(VAR_8, VAR_20, VAR_21, VAR_25, VAR_24);
                }
                else
                {
                    FUNC_10("Unknown system metric %s\n", FUNC_14(VAR_17));
                }
            }
            continue;
        }

        if(FUNC_9(VAR_23, VAR_22, VAR_15, VAR_16, &VAR_18, &VAR_19))
        {
            BOOL VAR_26 = VAR_1;
            if(!FUNC_15(VAR_16, VAR_10))
            {
                VAR_26 = VAR_7;
            }
            VAR_11 = FUNC_2(VAR_8, VAR_15, VAR_16);
            VAR_13 = FUNC_4(VAR_11, VAR_18, VAR_19);

            while((VAR_23=FUNC_13(VAR_14, &VAR_22, &VAR_25, &VAR_24)))
            {
                FUNC_16(VAR_17, VAR_23, FUNC_17(VAR_22+1, sizeof(VAR_17)/sizeof(VAR_17[0])));
                if(FUNC_8(VAR_17, &VAR_20, &VAR_21))
                {
                    FUNC_5(VAR_13, VAR_20, VAR_21, VAR_25, VAR_24, VAR_26);
                }
                else
                {
                    FUNC_10("Unknown property %s\n", FUNC_14(VAR_17));
                }
            }
        }
    }


    VAR_12 = FUNC_6(VAR_8, ((void*)0), VAR_10);
    VAR_11 = VAR_8->classes;
    while(VAR_11)
    {
        if(*VAR_11->szAppName)
        {
            VAR_11->overrides = FUNC_6(VAR_8, ((void*)0), VAR_11->szClassName);
            if(!VAR_11->overrides)
            {
                FUNC_10("No overrides found for app %s class %s\n", FUNC_14(VAR_11->szAppName), FUNC_14(VAR_11->szClassName));
            }
            else
            {
                VAR_11->overrides = VAR_12;
            }
        }
        else
        {

            if(VAR_11 != VAR_12)
                VAR_11->overrides = VAR_12;
        }
        VAR_11 = VAR_11->next;
    }
    FUNC_11(VAR_14);

    if(!VAR_8->classes) {
        FUNC_1("Failed to parse theme ini\n");
    }
}
