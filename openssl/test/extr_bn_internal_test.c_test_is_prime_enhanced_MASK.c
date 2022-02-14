
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int *,int,int ,int *,int,int*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(void)
{
    int VAR_2;
    int VAR_3 = 0;
    BIGNUM *VAR_4 = ((void*)0);

    VAR_2 = FUNC_4(VAR_4 = FUNC_1())

          && FUNC_5(FUNC_2(VAR_4, 11))

          && FUNC_5(FUNC_6(VAR_4, 10, VAR_1, ((void*)0), 1, &VAR_3))
          && FUNC_3(VAR_3, VAR_0);
    FUNC_0(VAR_4);
    return VAR_2;
}
