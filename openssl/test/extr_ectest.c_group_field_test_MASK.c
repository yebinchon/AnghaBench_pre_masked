
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EC_GROUP ;
typedef int BIGNUM ;


 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_6(void)
{
    int VAR_2 = 1;
    BIGNUM *VAR_3 = ((void*)0);
    BIGNUM *VAR_4 = ((void*)0);
    EC_GROUP *VAR_5 = ((void*)0);
    EC_GROUP *VAR_6 = ((void*)0);

    FUNC_2(&VAR_3,
                "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"
                "FFFF");


    FUNC_2(&VAR_4,
                "08000000000000000000000000000000"
                "00000000C9");

    VAR_5 = FUNC_5(VAR_0);
    if (FUNC_0(VAR_3, FUNC_4(VAR_5)))
      VAR_2 = 0;


    VAR_6 = FUNC_5(VAR_1);
    if (FUNC_0(VAR_4, FUNC_4(VAR_6)))
      VAR_2 = 0;


    FUNC_3(VAR_5);
    FUNC_3(VAR_6);
    FUNC_1(VAR_3);
    FUNC_1(VAR_4);
    return VAR_2;
}
