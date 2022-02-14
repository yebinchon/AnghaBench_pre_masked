
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_ctrs {scalar_t__ rctr; } ;
typedef int BIO ;


 int FUNC_0 (int *) ;
 struct async_ctrs* FUNC_1 (int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(BIO *VAR_0, char *VAR_1, int VAR_2)
{
    struct async_ctrs *VAR_3;
    int VAR_4 = 0;
    BIO *VAR_5 = FUNC_2(VAR_0);

    if (VAR_2 <= 0)
        return 0;
    if (VAR_5 == ((void*)0))
        return 0;

    VAR_3 = FUNC_1(VAR_0);

    FUNC_0(VAR_0);

    if (VAR_3->rctr > 0) {
        VAR_4 = FUNC_3(VAR_5, VAR_1, 1);
        if (VAR_4 <= 0 && FUNC_5(VAR_5))
            FUNC_4(VAR_0);
        VAR_3->rctr = 0;
    } else {
        VAR_3->rctr++;
        FUNC_4(VAR_0);
    }

    return VAR_4;
}
