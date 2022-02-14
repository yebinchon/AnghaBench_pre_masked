
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int TimeStamp ;
struct TYPE_4__ {int cred; } ;
typedef TYPE_1__ SspiData ;
typedef int SecPkgInfoA ;
typedef int SEC_CHAR ;
typedef scalar_t__ SECURITY_STATUS ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*,int ) ;
 scalar_t__ FUNC_2 (int *,int *,int ,int *,int *,int *,int *,int *,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int **) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static SECURITY_STATUS FUNC_7(SspiData *VAR_2, SEC_CHAR *VAR_3)
{
    SECURITY_STATUS VAR_4;
    TimeStamp VAR_5;
    SecPkgInfoA *VAR_6;

    FUNC_6("Running setupServer\n");

    VAR_4 = FUNC_4(VAR_3, &VAR_6);

    FUNC_1(VAR_4 == VAR_1, "QuerySecurityPackageInfo returned %s\n", FUNC_0(VAR_4));

    FUNC_5(VAR_2, VAR_6);
    FUNC_3(VAR_6);

    if((VAR_4 = FUNC_2(((void*)0), VAR_3, VAR_0,
            ((void*)0), ((void*)0), ((void*)0), ((void*)0), &VAR_2->cred, &VAR_5)) != VAR_1)
    {
        FUNC_6("AcquireCredentialsHandle() returned %s\n", FUNC_0(VAR_4));
    }

    FUNC_1(VAR_4 == VAR_1, "AcquireCredentialsHandle() returned %s\n",
            FUNC_0(VAR_4));

    return VAR_4;
}
