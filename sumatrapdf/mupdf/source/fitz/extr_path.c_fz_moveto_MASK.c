
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {float x; float y; } ;
struct TYPE_8__ {scalar_t__ cmd_len; float* coords; int coord_len; TYPE_1__ current; TYPE_1__ begin; scalar_t__ packed; } ;
typedef TYPE_2__ fz_path ;
typedef int fz_context ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int *,TYPE_2__*,float,float) ;

void
FUNC_4(fz_context *VAR_2, fz_path *VAR_3, float VAR_4, float VAR_5)
{
 if (VAR_3->packed)
  FUNC_1(VAR_2, VAR_0, "Cannot modify a packed path");

 if (VAR_3->cmd_len > 0 && FUNC_0(VAR_3) == VAR_1)
 {

  VAR_3->coords[VAR_3->coord_len-2] = VAR_4;
  VAR_3->coords[VAR_3->coord_len-1] = VAR_5;
  VAR_3->current.x = VAR_4;
  VAR_3->current.y = VAR_5;
  VAR_3->begin = VAR_3->current;
  return;
 }

 FUNC_2(VAR_2, VAR_3, VAR_1);
 FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_3->begin = VAR_3->current;
}
