
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int src ;
typedef int buffer ;
typedef char WCHAR ;
typedef int * LPBYTE ;
typedef int * HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (char const*,char const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int ,char const*,int ,int ,int **) ;
 int FUNC_7 (int *,char const*,int *,int *,int *,int*) ;
 int FUNC_8 (char const*) ;
 int VAR_7 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char const*) ;
 char* FUNC_11 (int) ;
 int FUNC_12 (char*,...) ;

__attribute__((used)) static BOOL FUNC_13()
{
    static const WCHAR VAR_8[] = {'P','e','n','d','i','n','g',
                                      'F','i','l','e','R','e','n','a','m','e',
                                      'O','p','e','r','a','t','i','o','n','s',0};
    static const WCHAR VAR_9[] = { 'S','y','s','t','e','m','\\',
                                     'C','u','r','r','e','n','t','C','o','n','t','r','o','l','S','e','t','\\',
                                     'C','o','n','t','r','o','l','\\',
                                     'S','e','s','s','i','o','n',' ','M','a','n','a','g','e','r',0};
    WCHAR *VAR_10=((void*)0);
    const WCHAR *VAR_11=((void*)0), *VAR_12=((void*)0);
    DWORD VAR_13=0;
    HKEY VAR_14=((void*)0);
    DWORD VAR_15;

    FUNC_12("Entered\n");

    if ((VAR_15=FUNC_6(VAR_4, VAR_9, 0, VAR_5, &VAR_14))
            !=VAR_1)
    {
        if (VAR_15==VAR_0)
        {
            FUNC_12("The key was not found - skipping\n");
            VAR_15=VAR_7;
        }
        else
        {
            FUNC_12("Couldn't open key, error %lu\n", VAR_15);
            VAR_15=VAR_2;
        }

        goto end;
    }

    VAR_15=FUNC_7(VAR_14, VAR_8, ((void*)0), ((void*)0) ,

            ((void*)0), &VAR_13);
    if (VAR_15==VAR_0)
    {

        FUNC_12("Value not present - nothing to rename\n");
        VAR_15=VAR_7;
        goto end;
    }

    if (VAR_15!=VAR_1)
    {
        FUNC_12("Couldn't query value's length (%lu)\n", VAR_15);
        VAR_15=VAR_2;
        goto end;
    }

    VAR_10=FUNC_11(VAR_13);
    if (VAR_10==((void*)0))
    {
        FUNC_12("Couldn't allocate %lu bytes for the value\n", VAR_13);
        VAR_15=VAR_2;
        goto end;
    }

    VAR_15=FUNC_7(VAR_14, VAR_8, ((void*)0), ((void*)0), (LPBYTE)VAR_10, &VAR_13);
    if (VAR_15!=VAR_1)
    {
        FUNC_12("Couldn't query value after successfully querying before (%lu),\n"
                "please report to wine-devel@winehq.org\n", VAR_15);
        VAR_15=VAR_2;
        goto end;
    }




    if (VAR_13<2*sizeof(VAR_10[0]) ||
            VAR_10[VAR_13/sizeof(VAR_10[0])-1]!='\0' ||
            VAR_10[VAR_13/sizeof(VAR_10[0])-2]!='\0')
    {
        FUNC_12("Improper value format - doesn't end with NULL\n");
        VAR_15=VAR_2;
        goto end;
    }

    for(VAR_11=VAR_10; (VAR_11-VAR_10)*sizeof(VAR_11[0])<VAR_13 && *VAR_11!='\0';
            VAR_11=VAR_12+FUNC_10(VAR_12)+1)
    {
        DWORD VAR_16=0;

        FUNC_12("processing next command\n");

        VAR_12=VAR_11+FUNC_10(VAR_11)+1;


        if (VAR_11[0]=='\\' && VAR_11[1]=='?' && VAR_11[2]=='?' && VAR_11[3]=='\\')
            VAR_11+=4;

        if (VAR_12[0]=='!')
        {
            VAR_16|=VAR_6;
            VAR_12++;
        }

        if (VAR_12[0]=='\\' && VAR_12[1]=='?' && VAR_12[2]=='?' && VAR_12[3]=='\\')
            VAR_12+=4;

        if (*VAR_12!='\0')
        {

            FUNC_3(VAR_11, VAR_12, VAR_16);
        } else
        {

   VAR_15 = FUNC_1 (VAR_11);
            if (VAR_15 != (DWORD)-1)
            {
                if ((VAR_15&VAR_3)==0)
                {

                    FUNC_0(VAR_11);
                } else
                {

                    FUNC_8(VAR_11);
                }
            } else
            {
                FUNC_12("couldn't get file attributes (%ld)\n", FUNC_2());
            }
        }
    }

    if ((VAR_15=FUNC_5(VAR_14, VAR_8))!=VAR_1)
    {
        FUNC_12("Error deleting the value (%lu)\n", FUNC_2());
        VAR_15=VAR_2;
    } else
        VAR_15=VAR_7;

end:
    if (VAR_10!=((void*)0))
        FUNC_9(VAR_10);

    if (VAR_14!=((void*)0))
        FUNC_4(VAR_14);

    return VAR_15;
}
