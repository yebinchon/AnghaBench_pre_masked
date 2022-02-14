
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RSA ;


 int FUNC_0 (int *) ;
 int * FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int* VAR_0 ;
 int FUNC_4 (int *,int *,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int,int *,int *) ;

__attribute__((used)) static int FUNC_8(int VAR_1)
{
    RSA *VAR_2 = ((void*)0);
    int VAR_3;
    int VAR_4 = VAR_0[VAR_1];

    VAR_3 = FUNC_2(VAR_2 = FUNC_1())
          && FUNC_3(FUNC_7(VAR_2, VAR_4, ((void*)0), ((void*)0)))
          && FUNC_3(FUNC_6(VAR_2))
          && FUNC_3(FUNC_5(VAR_2))
          && FUNC_3(FUNC_4(VAR_2, ((void*)0), -1, VAR_4));

    FUNC_0(VAR_2);
    return VAR_3;
}
