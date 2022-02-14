
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* method; } ;
typedef TYPE_2__ X509_LOOKUP ;
struct TYPE_5__ {int (* shutdown ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;

int FUNC_1(X509_LOOKUP *VAR_0)
{
    if (VAR_0->method == ((void*)0))
        return 0;
    if (VAR_0->method->shutdown != ((void*)0))
        return VAR_0->method->shutdown(VAR_0);
    else
        return 1;
}
