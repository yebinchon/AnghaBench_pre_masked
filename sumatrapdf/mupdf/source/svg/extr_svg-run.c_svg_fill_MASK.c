
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {float opacity; float fill_opacity; int fill_color; int transform; int fill_rule; } ;
typedef TYPE_1__ svg_state ;
typedef int svg_document ;
typedef int fz_path ;
typedef int fz_device ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int *,int ,int ,int ,int ,float,int ) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_1, fz_device *VAR_2, svg_document *VAR_3, fz_path *VAR_4, svg_state *VAR_5)
{
 float VAR_6 = VAR_5->opacity * VAR_5->fill_opacity;
 if (VAR_4)
  FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5->fill_rule, VAR_5->transform, FUNC_0(VAR_1), VAR_5->fill_color, VAR_6, VAR_0);
}
