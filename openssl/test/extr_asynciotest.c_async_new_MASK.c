
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_ctrs {int dummy; } ;
typedef int BIO ;


 int FUNC_0 (int *,struct async_ctrs*) ;
 int FUNC_1 (int *,int) ;
 struct async_ctrs* FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_0)
{
    struct async_ctrs *VAR_1;

    VAR_1 = FUNC_2(sizeof(struct async_ctrs));
    if (VAR_1 == ((void*)0))
        return 0;

    FUNC_0(VAR_0, VAR_1);
    FUNC_1(VAR_0, 1);
    return 1;
}
