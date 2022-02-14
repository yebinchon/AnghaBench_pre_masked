
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509_STORE_CTX ;
typedef int X509_POLICY_TREE ;


 int FUNC_0 (int ,char*,char*) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;
 int FUNC_5 (char*,int ) ;

void FUNC_6(X509_STORE_CTX *VAR_1)
{
    X509_POLICY_TREE *VAR_2;
    int VAR_3;
    VAR_2 = FUNC_1(VAR_1);
    VAR_3 = FUNC_2(VAR_1);

    FUNC_0(VAR_0, "Require explicit Policy: %s\n",
               VAR_3 ? "True" : "False");

    FUNC_5("Authority", FUNC_3(VAR_2));
    FUNC_5("User", FUNC_4(VAR_2));
}
