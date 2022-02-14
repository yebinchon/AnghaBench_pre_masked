
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int WKSTA_USER_INFO_1101 ;
typedef int WKSTA_USER_INFO_1 ;
typedef int WKSTA_USER_INFO_0 ;
typedef int WCHAR ;
struct TYPE_6__ {int wkui1101_oth_domains; int wkui1_oth_domains; int wkui1_logon_server; int wkui1_logon_domain; int wkui1_username; int wkui0_username; } ;
typedef scalar_t__ NET_API_STATUS ;
typedef TYPE_1__* LPWKSTA_USER_INFO_1101 ;
typedef TYPE_1__* LPWKSTA_USER_INFO_1 ;
typedef TYPE_1__* LPWKSTA_USER_INFO_0 ;
typedef int LPBYTE ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int*) ;
 scalar_t__ FUNC_5 (int *,int,int *) ;
 int FUNC_6 (char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_7(void)
{
    LPWKSTA_USER_INFO_0 VAR_4 = ((void*)0);
    LPWKSTA_USER_INFO_1 VAR_5 = ((void*)0);
    LPWKSTA_USER_INFO_1101 VAR_6 = ((void*)0);
    DWORD VAR_7;
    NET_API_STATUS VAR_8;


    VAR_8 = FUNC_5(((void*)0), 0, (LPBYTE *)&VAR_4);
    if (VAR_8 == VAR_2)
    {
        FUNC_6("Workstation service not running\n");
        return;
    }
    FUNC_2(!VAR_8 && VAR_4, "got %d and %p (expected NERR_Success and != NULL\n", VAR_8, VAR_4);




    if (!VAR_4)
    {
        return;
    }

    FUNC_2(!FUNC_0(VAR_3, VAR_4->wkui0_username), "This is really user name\n");
    FUNC_4(VAR_4, &VAR_7);
    FUNC_2(VAR_7 >= (sizeof(WKSTA_USER_INFO_0) +
                 FUNC_1(VAR_4->wkui0_username) * sizeof(WCHAR)),
       "Is allocated with NetApiBufferAllocate\n");


    FUNC_2(FUNC_5(((void*)0), 1, (LPBYTE *)&VAR_5) == VAR_1,
       "NetWkstaUserGetInfo is successful\n");
    FUNC_2(FUNC_0(VAR_5->wkui1_username, VAR_4->wkui0_username) == 0,
       "the same name as returned for level 0\n");
    FUNC_4(VAR_5, &VAR_7);
    FUNC_2(VAR_7 >= (sizeof(WKSTA_USER_INFO_1) +
                  (FUNC_1(VAR_5->wkui1_username) +
                   FUNC_1(VAR_5->wkui1_logon_domain) +
                   FUNC_1(VAR_5->wkui1_oth_domains) +
                   FUNC_1(VAR_5->wkui1_logon_server)) * sizeof(WCHAR)),
       "Is allocated with NetApiBufferAllocate\n");


    FUNC_2(FUNC_5(((void*)0), 1101, (LPBYTE *)&VAR_6) == VAR_1,
       "NetWkstaUserGetInfo is successful\n");
    FUNC_2(FUNC_0(VAR_6->wkui1101_oth_domains, VAR_5->wkui1_oth_domains) == 0,
       "the same oth_domains as returned for level 1\n");
    FUNC_4(VAR_6, &VAR_7);
    FUNC_2(VAR_7 >= (sizeof(WKSTA_USER_INFO_1101) +
                 FUNC_1(VAR_6->wkui1101_oth_domains) * sizeof(WCHAR)),
       "Is allocated with NetApiBufferAllocate\n");

    FUNC_3(VAR_4);
    FUNC_3(VAR_5);
    FUNC_3(VAR_6);


    FUNC_2(FUNC_5(((void*)0), 10000, (LPBYTE *)&VAR_4) == VAR_0,
       "Invalid level\n");
}
