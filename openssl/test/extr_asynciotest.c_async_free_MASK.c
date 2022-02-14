
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct async_ctrs {int dummy; } ;
typedef int BIO ;


 struct async_ctrs* FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct async_ctrs*) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0)
{
    struct async_ctrs *VAR_1;

    if (VAR_0 == ((void*)0))
        return 0;
    VAR_1 = FUNC_0(VAR_0);
    FUNC_3(VAR_1);
    FUNC_1(VAR_0, ((void*)0));
    FUNC_2(VAR_0, 0);

    return 1;
}
