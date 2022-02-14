
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIGNUM ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,int) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int *,int ) ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(void)
{
    int VAR_0 = 0;
    BIGNUM *VAR_1 = ((void*)0);

    VAR_0 = FUNC_7(VAR_1 = FUNC_2())

          && FUNC_8(FUNC_3(VAR_1, 65535))
          && FUNC_6(FUNC_9(VAR_1))

          && FUNC_8(FUNC_3(VAR_1, 65536))
          && FUNC_6(FUNC_9(VAR_1))

          && FUNC_8(FUNC_3(VAR_1, 65537))
          && FUNC_8(FUNC_9(VAR_1))

          && FUNC_8(FUNC_1(VAR_1, FUNC_5(), 256))
          && FUNC_6(FUNC_9(VAR_1))

          && FUNC_8(FUNC_4(VAR_1, VAR_1, FUNC_5()))
          && FUNC_8(FUNC_9(VAR_1));
    FUNC_0(VAR_1);
    return VAR_0;
}
