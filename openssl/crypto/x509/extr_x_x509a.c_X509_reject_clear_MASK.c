
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* aux; } ;
typedef TYPE_2__ X509 ;
struct TYPE_4__ {int * reject; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(X509 *VAR_1)
{
    if (VAR_1->aux) {
        FUNC_0(VAR_1->aux->reject, VAR_0);
        VAR_1->aux->reject = ((void*)0);
    }
}
