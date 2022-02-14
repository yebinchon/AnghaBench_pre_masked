
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int y; int x; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_context ;
struct TYPE_8__ {int y1; int y0; int x1; int x0; } ;
struct TYPE_7__ {TYPE_1__ move; TYPE_4__ rect; scalar_t__ trailing_move; scalar_t__ first; int ctm; } ;
typedef TYPE_2__ bound_path_arg ;


 int FUNC_0 (TYPE_4__*,TYPE_1__) ;
 TYPE_1__ FUNC_1 (float,float,int ) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, void *VAR_1, float VAR_2, float VAR_3)
{
 bound_path_arg *VAR_4 = (bound_path_arg *)VAR_1;
 fz_point VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4->ctm);
 if (VAR_4->first)
 {
  VAR_4->rect.x0 = VAR_4->rect.x1 = VAR_5.x;
  VAR_4->rect.y0 = VAR_4->rect.y1 = VAR_5.y;
  VAR_4->first = 0;
 }
 else
  FUNC_0(&VAR_4->rect, VAR_5);
 if (VAR_4->trailing_move)
 {
  VAR_4->trailing_move = 0;
  FUNC_0(&VAR_4->rect, VAR_4->move);
 }
}
