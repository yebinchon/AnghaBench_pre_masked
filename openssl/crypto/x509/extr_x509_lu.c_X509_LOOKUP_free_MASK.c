
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* method; } ;
typedef TYPE_2__ X509_LOOKUP ;
struct TYPE_6__ {int (* free ) (TYPE_2__*) ;} ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(X509_LOOKUP *VAR_0)
{
    if (VAR_0 == ((void*)0))
        return;
    if ((VAR_0->method != ((void*)0)) && (VAR_0->method->free != ((void*)0)))
        (*VAR_0->method->free) (VAR_0);
    FUNC_0(VAR_0);
}
