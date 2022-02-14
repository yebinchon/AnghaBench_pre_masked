
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * PSID ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*,int **) ;
 int* FUNC_5 (int *,int) ;
 int* FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

__attribute__((used)) static void FUNC_9(void)
{
    PSID VAR_0 = ((void*)0);

    if (!&FUNC_5 || !&FUNC_4 || !&FUNC_7 || !&FUNC_6)
    {
        FUNC_8("Some functions not available\n");
        return;
    }


    FUNC_3(FUNC_4("S-1-5-21-93476-23408-4576",&VAR_0),"ConvertStringSidToSidA failed\n");
    FUNC_3(FUNC_7(VAR_0),"Sid is not valid\n");
    FUNC_2(0xbebecaca);
    FUNC_3(*FUNC_6(VAR_0) == 4,"GetSidSubAuthorityCount gave %d expected 4\n",*FUNC_6(VAR_0));
    FUNC_3(FUNC_0() == 0,"GetLastError returned %d instead of 0\n",FUNC_0());
    FUNC_2(0xbebecaca);
    FUNC_3(*FUNC_5(VAR_0,0) == 21,"GetSidSubAuthority gave %d expected 21\n",*FUNC_5(VAR_0,0));
    FUNC_3(FUNC_0() == 0,"GetLastError returned %d instead of 0\n",FUNC_0());
    FUNC_2(0xbebecaca);
    FUNC_3(*FUNC_5(VAR_0,1) == 93476,"GetSidSubAuthority gave %d expected 93476\n",*FUNC_5(VAR_0,1));
    FUNC_3(FUNC_0() == 0,"GetLastError returned %d instead of 0\n",FUNC_0());
    FUNC_2(0xbebecaca);
    FUNC_3(FUNC_5(VAR_0,4) != ((void*)0),"Expected out of bounds GetSidSubAuthority to return a non-NULL pointer\n");
    FUNC_3(FUNC_0() == 0,"GetLastError returned %d instead of 0\n",FUNC_0());
    FUNC_1(VAR_0);
}
