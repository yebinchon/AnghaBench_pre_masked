
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* param; } ;
typedef TYPE_2__ X509_STORE_CTX ;
typedef int X509 ;
struct TYPE_5__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (TYPE_2__*,int *,int ,int) ;

__attribute__((used)) static int FUNC_2(X509_STORE_CTX *VAR_1, X509 *VAR_2)
{
    int VAR_3 = FUNC_0(((void*)0), VAR_2, ((void*)0), VAR_1->param->flags);

    if (VAR_3 == VAR_0)
        return 1;
    return FUNC_1(VAR_1, VAR_2, 0, VAR_3);
}
