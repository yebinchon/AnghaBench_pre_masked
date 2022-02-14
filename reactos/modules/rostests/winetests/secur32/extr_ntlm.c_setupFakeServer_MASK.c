
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SspiData ;
typedef int SecPkgInfoA ;
typedef int SEC_CHAR ;
typedef scalar_t__ SECURITY_STATUS ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,char*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *,int **) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static SECURITY_STATUS FUNC_6(SspiData *VAR_1, SEC_CHAR *VAR_2)
{
    SECURITY_STATUS VAR_3;
    SecPkgInfoA *VAR_4;

    FUNC_5("Running setupFakeServer\n");

    VAR_3 = FUNC_3(VAR_2, &VAR_4);

    FUNC_1(VAR_3 == VAR_0, "QuerySecurityPackageInfo returned %s\n", FUNC_0(VAR_3));

    VAR_3 = FUNC_4(VAR_1, VAR_4);
    FUNC_2(VAR_4);

    return VAR_3;
}
