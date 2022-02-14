
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; int member_1; int dwMaximumCipherStrength; int dwMinimumCipherStrength; } ;
typedef TYPE_1__ SecPkgCred_CipherStrengths ;
typedef scalar_t__ SECURITY_STATUS ;
typedef int PCredHandle ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (char*,int ,int ) ;

__attribute__((used)) static void FUNC_4(PCredHandle VAR_2)
{
    SecPkgCred_CipherStrengths VAR_3 = {-1,-1};
    SECURITY_STATUS VAR_4;

    VAR_4 = FUNC_1(VAR_2, VAR_0, &VAR_3);
    FUNC_2(VAR_4 == VAR_1, "QueryCredentialsAttributesA failed: %u\n", FUNC_0());
    FUNC_2(VAR_3.dwMinimumCipherStrength, "dwMinimumCipherStrength not changed\n");
    FUNC_2(VAR_3.dwMaximumCipherStrength, "dwMaximumCipherStrength not changed\n");
    FUNC_3("strength %d - %d\n", VAR_3.dwMinimumCipherStrength, VAR_3.dwMaximumCipherStrength);
}
