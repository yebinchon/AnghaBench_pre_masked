
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int time_t ;
typedef int genstr ;
typedef int BIO ;
typedef int ASN1_GENERALIZEDTIME ;


 int FUNC_0 (int *,int ,int,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int,char*,int ,unsigned int) ;

__attribute__((used)) static void FUNC_7(uint64_t VAR_0, BIO *VAR_1)
{
    ASN1_GENERALIZEDTIME *VAR_2 = FUNC_2();
    char VAR_3[20];

    if (VAR_2 == ((void*)0))
        return;
    FUNC_0(VAR_2, (time_t)0,
                             (int)(VAR_0 / 86400000),
                             (VAR_0 % 86400000) / 1000);




    FUNC_6(VAR_3, sizeof(VAR_3), "%.14s.%03dZ",
                 FUNC_5(VAR_2), (unsigned int)(VAR_0 % 1000));
    if (FUNC_4(VAR_2, VAR_3))
        FUNC_3(VAR_1, VAR_2);
    FUNC_1(VAR_2);
}
