
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_context ;
struct TYPE_5__ {int seps; int (* drop ) (int *,TYPE_1__*) ;} ;
typedef TYPE_1__ fz_band_writer ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*) ;

void FUNC_3(fz_context *VAR_0, fz_band_writer *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->drop != ((void*)0))
  VAR_1->drop(VAR_0, VAR_1);
 FUNC_0(VAR_0, VAR_1->seps);
 FUNC_1(VAR_0, VAR_1);
}
