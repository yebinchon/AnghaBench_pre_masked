
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int *,int) ;

__attribute__((used)) static int FUNC_7(void)
{
    int VAR_0 = 0;
    BIGNUM *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);

    VAR_0 = FUNC_4(VAR_1 = FUNC_1())
          && FUNC_4(VAR_2 = FUNC_1())
          && FUNC_4(VAR_3 = FUNC_1())

          && FUNC_5(FUNC_2(VAR_2, 1))
          && FUNC_5(FUNC_2(VAR_3, 1+2))
          && FUNC_3(FUNC_6(VAR_1, VAR_2, VAR_3, 202))

          && FUNC_5(FUNC_2(VAR_3, 1+3))
          && FUNC_5(FUNC_6(VAR_1, VAR_2, VAR_3, 202))
          && FUNC_5(FUNC_2(VAR_2, 1+3))
          && FUNC_5(FUNC_2(VAR_3, 1))
          && FUNC_5(FUNC_6(VAR_1, VAR_2, VAR_3, 202));
    FUNC_0(VAR_2);
    FUNC_0(VAR_3);
    FUNC_0(VAR_1);
    return VAR_0;
}
