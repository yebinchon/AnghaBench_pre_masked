
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_rasterizer ;
typedef int fz_output ;
struct TYPE_6__ {TYPE_1__* cursor; scalar_t__ app; } ;
typedef TYPE_2__ fz_edgebuffer ;
typedef int fz_context ;
struct TYPE_5__ {int unset; int can_save; void* d; scalar_t__ saved; } ;


 void* VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,TYPE_2__*) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,char*) ;

__attribute__((used)) static void FUNC_4(fz_context *VAR_2, fz_rasterizer *VAR_3)
{
 fz_edgebuffer *VAR_4 = (fz_edgebuffer *)VAR_3;

 if (VAR_4->app)
 {
  FUNC_0(VAR_4);
  VAR_4->cursor[0].saved = 0;
  VAR_4->cursor[0].unset = 1;
  VAR_4->cursor[0].can_save = 1;
  VAR_4->cursor[0].d = VAR_0;
  VAR_4->cursor[1].saved = 0;
  VAR_4->cursor[1].unset = 1;
  VAR_4->cursor[1].can_save = 1;
  VAR_4->cursor[1].d = VAR_0;
  VAR_4->cursor[2].saved = 0;
  VAR_4->cursor[2].unset = 1;
  VAR_4->cursor[2].can_save = 1;
  VAR_4->cursor[2].d = VAR_0;
 }
}
