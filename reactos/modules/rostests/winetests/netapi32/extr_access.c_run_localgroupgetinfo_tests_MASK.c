
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_4__ {int lgrmi3_domainandname; int lgrpi1_comment; int lgrpi1_name; } ;
typedef TYPE_1__* PLOCALGROUP_MEMBERS_INFO_3 ;
typedef TYPE_1__* PLOCALGROUP_INFO_1 ;
typedef scalar_t__ NET_API_STATUS ;
typedef int LPBYTE ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,char const*,int,int *) ;
 scalar_t__ FUNC_4 (int *,char const*,int,int *,int ,scalar_t__*,scalar_t__*,int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(void)
{
    NET_API_STATUS VAR_3;
    static const WCHAR VAR_4[] = {'A','d','m','i','n','i','s','t','r','a','t','o','r','s',0};
    PLOCALGROUP_INFO_1 VAR_5 = ((void*)0);
    PLOCALGROUP_MEMBERS_INFO_3 VAR_6 = ((void*)0);
    DWORD VAR_7 = 0, VAR_8 =0;
    int VAR_9;

    VAR_3 = FUNC_3(((void*)0), VAR_4, 1, (LPBYTE *)&VAR_5);
    FUNC_1(VAR_3 == VAR_2 || FUNC_0(VAR_3 == VAR_1),
       "NetLocalGroupGetInfo unexpectedly returned %d\n", VAR_3);
    if (VAR_3 != VAR_2) return;

    FUNC_5("Local groupname:%s\n", FUNC_6( VAR_5->lgrpi1_name));
    FUNC_5("Comment: %s\n", FUNC_6( VAR_5->lgrpi1_comment));

    FUNC_2(VAR_5);

    VAR_3 = FUNC_4(((void*)0), VAR_4, 3, (LPBYTE *)&VAR_6, VAR_0, &VAR_7, &VAR_8, ((void*)0));
    FUNC_1(VAR_3 == VAR_2, "NetLocalGroupGetMembers unexpectedly returned %d\n", VAR_3);
    FUNC_1(VAR_7 > 0 && VAR_8 > 0, "Amount of entries is unexpectedly 0\n");

    for(VAR_9=0;VAR_9<VAR_7;VAR_9++)
        FUNC_5("domain and name: %s\n", FUNC_6(VAR_6[VAR_9].lgrmi3_domainandname));

    FUNC_2(VAR_6);
}
