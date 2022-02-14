
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* method; } ;
struct TYPE_5__ {size_t (* ssl_pending ) (TYPE_2__ const*) ;} ;
typedef TYPE_2__ SSL ;


 size_t VAR_0 ;
 size_t FUNC_0 (TYPE_2__ const*) ;

int FUNC_1(const SSL *VAR_1)
{
    size_t VAR_2 = VAR_1->method->ssl_pending(VAR_1);
    return VAR_2 < VAR_0 ? (int)VAR_2 : VAR_0;
}
