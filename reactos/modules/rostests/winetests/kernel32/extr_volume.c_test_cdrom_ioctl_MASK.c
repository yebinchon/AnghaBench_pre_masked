
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef int DWORD ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,int *,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (char*) ;
 char FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (char*,char) ;

__attribute__((used)) static void FUNC_7(void)
{
    char VAR_6, VAR_7[] = "A:\\", VAR_8[] = "\\\\.\\A:";
    DWORD VAR_9;
    HANDLE VAR_10;

    VAR_9 = FUNC_4();
    if(!VAR_9)
    {
        FUNC_6("GetLogicalDrives failed : %u\n", FUNC_3());
        return;
    }

    for(VAR_6='A'; VAR_6<='Z'; VAR_6++)
    {
        if(!(VAR_9 & (1 << (VAR_6-'A') )))
            continue;

        VAR_7[0] = VAR_6;
        if(FUNC_2(VAR_7) != VAR_0)
        {
            FUNC_6("Skipping %c:, not a CDROM drive.\n", VAR_6);
            continue;
        }

        FUNC_6("Testing with %c:\n", VAR_6);

        VAR_8[4] = VAR_6;
        VAR_10 = FUNC_1(VAR_8, VAR_3, VAR_1|VAR_2, ((void*)0), VAR_5, 0, 0);
        if(VAR_10 == VAR_4)
        {
            FUNC_6("Failed to open the device : %u\n", FUNC_3());
            continue;
        }


        FUNC_5(VAR_10);

        FUNC_0(VAR_10);
    }

}
