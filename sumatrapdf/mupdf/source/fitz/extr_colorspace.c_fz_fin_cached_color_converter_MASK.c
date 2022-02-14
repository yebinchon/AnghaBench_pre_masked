
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_5__ {TYPE_2__* opaque; } ;
typedef TYPE_1__ fz_color_converter ;
struct TYPE_6__ {int base; int hash; } ;
typedef TYPE_2__ fz_cached_color_converter ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__*) ;

void FUNC_3(fz_context *VAR_0, fz_color_converter *VAR_1)
{
 fz_cached_color_converter *VAR_2;
 if (VAR_1 == ((void*)0))
  return;
 VAR_2 = VAR_1->opaque;
 if (VAR_2 == ((void*)0))
  return;
 VAR_1->opaque = ((void*)0);
 FUNC_1(VAR_0, VAR_2->hash);
 FUNC_0(VAR_0, &VAR_2->base);
 FUNC_2(VAR_0, VAR_2);
}
