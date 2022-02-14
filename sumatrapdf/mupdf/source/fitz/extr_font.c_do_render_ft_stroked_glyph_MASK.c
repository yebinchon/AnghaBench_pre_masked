
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;


struct TYPE_30__ {float linewidth; scalar_t__ linejoin; scalar_t__ start_cap; int miterlimit; } ;
typedef TYPE_3__ fz_stroke_state ;
struct TYPE_31__ {int a; int b; int c; int d; int e; int f; } ;
typedef TYPE_4__ fz_matrix ;
struct TYPE_28__ {scalar_t__ fake_italic; } ;
struct TYPE_32__ {int name; TYPE_1__ flags; TYPE_9__* ft_face; } ;
typedef TYPE_5__ fz_font ;
struct TYPE_33__ {TYPE_2__* font; } ;
typedef TYPE_6__ fz_context ;
struct TYPE_36__ {int glyph; } ;
struct TYPE_35__ {int xx; int yx; int xy; int yy; } ;
struct TYPE_34__ {int x; int y; } ;
struct TYPE_29__ {int ftlib; } ;
typedef TYPE_7__ FT_Vector ;
typedef int FT_Stroker_LineJoin ;
typedef int FT_Stroker_LineCap ;
typedef int FT_Stroker ;
typedef TYPE_8__ FT_Matrix ;
typedef int * FT_Glyph ;
typedef TYPE_9__* FT_Face ;
typedef scalar_t__ FT_Error ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int **,int ,int) ;
 scalar_t__ FUNC_3 (int **,int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (TYPE_9__*,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_5 (TYPE_9__*,int,int,int,int) ;
 int FUNC_6 (TYPE_9__*,TYPE_8__*,TYPE_7__*) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int,int ,int ,int) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_6__*,TYPE_5__*,int,TYPE_4__*) ;
 int FUNC_12 (TYPE_6__*,int ) ;
 float FUNC_13 (TYPE_4__) ;
 TYPE_4__ FUNC_14 (TYPE_4__,int ,int ) ;
 int FUNC_15 (TYPE_6__*,char*,int ,...) ;

__attribute__((used)) static FT_Glyph
FUNC_16(fz_context *VAR_20, fz_font *VAR_21, int VAR_22, fz_matrix VAR_23, fz_matrix VAR_24, const fz_stroke_state *VAR_25, int VAR_26)
{
 FT_Face VAR_27 = VAR_21->ft_face;
 float VAR_28 = FUNC_13(VAR_24);
 int VAR_29 = VAR_25->linewidth * VAR_28 * 64 / 2;
 FT_Matrix VAR_30;
 FT_Vector VAR_31;
 FT_Error VAR_32;
 FT_Stroker VAR_33;
 FT_Glyph VAR_34;
 FT_Stroker_LineJoin VAR_35;
 FT_Stroker_LineCap VAR_36;

 FUNC_11(VAR_20, VAR_21, VAR_22, &VAR_23);

 if (VAR_21->flags.fake_italic)
  VAR_23 = FUNC_14(VAR_23, VAR_19, 0);

 VAR_30.xx = VAR_23.a * 64;
 VAR_30.yx = VAR_23.b * 64;
 VAR_30.xy = VAR_23.c * 64;
 VAR_30.yy = VAR_23.d * 64;
 VAR_31.x = VAR_23.e * 64;
 VAR_31.y = VAR_23.f * 64;

 FUNC_12(VAR_20, VAR_18);
 VAR_32 = FUNC_5(VAR_27, 65536, 65536, 72, 72);
 if (VAR_32)
 {
  FUNC_15(VAR_20, "FT_Set_Char_Size(%s,65536,72): %s", VAR_21->name, FUNC_10(VAR_32));
  return ((void*)0);
 }

 FUNC_6(VAR_27, &VAR_30, &VAR_31);

 VAR_32 = FUNC_4(VAR_27, VAR_22, VAR_0 | VAR_1);
 if (VAR_32)
 {
  FUNC_15(VAR_20, "FT_Load_Glyph(%s,%d,FT_LOAD_NO_HINTING): %s", VAR_21->name, VAR_22, FUNC_10(VAR_32));
  return ((void*)0);
 }

 VAR_32 = FUNC_8(VAR_20->font->ftlib, &VAR_33);
 if (VAR_32)
 {
  FUNC_15(VAR_20, "FT_Stroker_New(): %s", FUNC_10(VAR_32));
  return ((void*)0);
 }

 VAR_35 =
  VAR_25->linejoin == VAR_16 ? VAR_8 :
  VAR_25->linejoin == VAR_17 ? VAR_10 :
  VAR_25->linejoin == VAR_15 ? VAR_7 :
  VAR_9;
 VAR_36 =
  VAR_25->start_cap == VAR_11 ? VAR_4 :
  VAR_25->start_cap == VAR_12 ? VAR_5 :
  VAR_25->start_cap == VAR_13 ? VAR_6 :
  VAR_25->start_cap == VAR_14 ? VAR_4 :
  VAR_4;

 FUNC_9(VAR_33, VAR_29, VAR_36, VAR_35, VAR_25->miterlimit * 65536);

 VAR_32 = FUNC_1(VAR_27->glyph, &VAR_34);
 if (VAR_32)
 {
  FUNC_15(VAR_20, "FT_Get_Glyph(): %s", FUNC_10(VAR_32));
  FUNC_7(VAR_33);
  return ((void*)0);
 }

 VAR_32 = FUNC_2(&VAR_34, VAR_33, 1);
 if (VAR_32)
 {
  FUNC_15(VAR_20, "FT_Glyph_Stroke(): %s", FUNC_10(VAR_32));
  FUNC_0(VAR_34);
  FUNC_7(VAR_33);
  return ((void*)0);
 }

 FUNC_7(VAR_33);

 VAR_32 = FUNC_3(&VAR_34, VAR_26 > 0 ? VAR_3 : VAR_2, 0, 1);
 if (VAR_32)
 {
  FUNC_15(VAR_20, "FT_Glyph_To_Bitmap(): %s", FUNC_10(VAR_32));
  FUNC_0(VAR_34);
  return ((void*)0);
 }
 return VAR_34;
}
