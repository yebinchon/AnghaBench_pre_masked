
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    int VAR_3 = 0;
    BIO *VAR_4 = FUNC_1(VAR_0);

    if (VAR_2 <= 0)
        return 0;
    if (VAR_4 == ((void*)0))
        return 0;

    FUNC_0(VAR_0);

    VAR_3 = FUNC_2(VAR_4, VAR_1, VAR_2);
    if (VAR_3 <= 0 && FUNC_4(VAR_4))
        FUNC_3(VAR_0);

    return VAR_3;
}
