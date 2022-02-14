
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_stroke_state ;
typedef int fz_rect ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_context ;
struct TYPE_3__ {int first; int rect; scalar_t__ trailing_move; int ctm; } ;
typedef TYPE_1__ bound_path_arg ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int const*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int *,int const*,int *,TYPE_1__*) ;

fz_rect
FUNC_2(fz_context *VAR_2, const fz_path *VAR_3, const fz_stroke_state *VAR_4, fz_matrix VAR_5)
{
 bound_path_arg VAR_6;

 VAR_6.ctm = VAR_5;
 VAR_6.rect = VAR_1;
 VAR_6.trailing_move = 0;
 VAR_6.first = 1;

 FUNC_1(VAR_2, VAR_3, &VAR_0, &VAR_6);

 if (!VAR_6.first && VAR_4)
 {
  VAR_6.rect = FUNC_0(VAR_2, VAR_6.rect, VAR_4, VAR_5);
 }

 return VAR_6.rect;
}
