
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stroke_is_set; scalar_t__ fill_is_set; } ;
typedef TYPE_1__ svg_state ;
typedef int svg_document ;
typedef int fz_path ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,int *,int *,TYPE_1__*) ;
 int FUNC_1 (int *,int *,int *,int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(fz_context *VAR_0, fz_device *VAR_1, svg_document *VAR_2, fz_path *VAR_3, svg_state *VAR_4)
{
 if (VAR_4->fill_is_set)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_4->stroke_is_set)
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
}
