
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dash_len; } ;
typedef TYPE_1__ fz_stroke_state ;
typedef int fz_matrix ;
typedef int fz_irect ;
typedef int fz_glyph ;
typedef int fz_font ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int *,int,int ,int ,TYPE_1__ const*,int) ;
 int * FUNC_2 (int *,int *,int,int *,int *,int const*,int,int) ;
 int FUNC_3 (int *,int *,int *,unsigned char*,unsigned char*) ;

fz_glyph *
FUNC_4(fz_context *VAR_0, fz_font *VAR_1, int VAR_2, fz_matrix *VAR_3, fz_matrix VAR_4, const fz_stroke_state *VAR_5, const fz_irect *VAR_6, int VAR_7)
{
 if (FUNC_0(VAR_0, VAR_1))
 {
  fz_matrix VAR_8;
  unsigned char VAR_9, VAR_10;

  if (VAR_5->dash_len > 0)
   return ((void*)0);
  (void)FUNC_3(VAR_0, VAR_3, &VAR_8, &VAR_9, &VAR_10);
  return FUNC_1(VAR_0, VAR_1, VAR_2, VAR_8, VAR_4, VAR_5, VAR_7);
 }
 return FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, ((void*)0), VAR_6, 1, VAR_7);
}
