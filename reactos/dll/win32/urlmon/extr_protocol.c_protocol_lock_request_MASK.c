
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int request; } ;
typedef TYPE_1__ Protocol ;
typedef int HRESULT ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;

HRESULT FUNC_3(Protocol *VAR_1)
{
    if (!FUNC_1(VAR_1->request, &VAR_1->lock))
        FUNC_2("InternetLockRequest failed: %d\n", FUNC_0());

    return VAR_0;
}
