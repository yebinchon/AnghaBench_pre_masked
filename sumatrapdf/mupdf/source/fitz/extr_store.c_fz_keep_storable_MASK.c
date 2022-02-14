
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int refs; } ;
typedef TYPE_1__ fz_storable ;
typedef int fz_context ;


 void* FUNC_0 (int *,TYPE_1__*,int *) ;

void *
FUNC_1(fz_context *VAR_0, const fz_storable *VAR_1)
{


 fz_storable *VAR_2 = (fz_storable *)VAR_1;

 return FUNC_0(VAR_0, VAR_2, &VAR_2->refs);
}
