
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;


struct TYPE_23__ {int a; int b; int c; int d; int e; int f; } ;
typedef TYPE_2__ fz_matrix ;
struct TYPE_22__ {scalar_t__ fake_bold; scalar_t__ fake_italic; } ;
struct TYPE_24__ {int name; TYPE_1__ flags; TYPE_7__* ft_face; } ;
typedef TYPE_3__ fz_font ;
typedef int fz_context ;
struct TYPE_28__ {TYPE_6__* glyph; } ;
struct TYPE_27__ {int outline; } ;
struct TYPE_26__ {int xx; int yx; int xy; int yy; } ;
struct TYPE_25__ {int x; int y; } ;
typedef TYPE_4__ FT_Vector ;
typedef TYPE_5__ FT_Matrix ;
typedef TYPE_6__* FT_GlyphSlot ;
typedef TYPE_7__* FT_Face ;
typedef scalar_t__ FT_Error ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_7__*,int,int) ;
 int FUNC_1 (int *,float) ;
 int FUNC_2 (int *,float,float) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_7__*,int,int,int,int) ;
 int FUNC_5 (TYPE_7__*,TYPE_5__*,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,TYPE_3__*,int,TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;
 float FUNC_9 (TYPE_2__) ;
 TYPE_2__ FUNC_10 (TYPE_2__,int ,int ) ;
 int FUNC_11 (int *,char*,int ,int,...) ;

__attribute__((used)) static FT_GlyphSlot
FUNC_12(fz_context *VAR_7, fz_font *VAR_8, int VAR_9, fz_matrix VAR_10, int VAR_11)
{
 FT_Face VAR_12 = VAR_8->ft_face;
 FT_Matrix VAR_13;
 FT_Vector VAR_14;
 FT_Error VAR_15;

 float VAR_16 = FUNC_9(VAR_10) * 0.02f;

 FUNC_7(VAR_7, VAR_8, VAR_9, &VAR_10);

 if (VAR_8->flags.fake_italic)
  VAR_10 = FUNC_10(VAR_10, VAR_6, 0);

 FUNC_8(VAR_7, VAR_5);

 if (VAR_11 == 0)
 {

  float VAR_17 = FUNC_9(VAR_10);
  VAR_13.xx = VAR_10.a * 65536 / VAR_17;
  VAR_13.yx = VAR_10.b * 65536 / VAR_17;
  VAR_13.xy = VAR_10.c * 65536 / VAR_17;
  VAR_13.yy = VAR_10.d * 65536 / VAR_17;
  VAR_14.x = 0;
  VAR_14.y = 0;

  VAR_15 = FUNC_4(VAR_12, 64 * VAR_17, 64 * VAR_17, 72, 72);
  if (VAR_15)
   FUNC_11(VAR_7, "FT_Set_Char_Size(%s,%d,72): %s", VAR_8->name, (int)(64*VAR_17), FUNC_6(VAR_15));
  FUNC_5(VAR_12, &VAR_13, &VAR_14);
  VAR_15 = FUNC_0(VAR_12, VAR_9, VAR_0 | VAR_2);
  if (VAR_15)
  {
   FUNC_11(VAR_7, "FT_Load_Glyph(%s,%d,FT_LOAD_TARGET_MONO): %s", VAR_8->name, VAR_9, FUNC_6(VAR_15));
   goto retry_unhinted;
  }
 }
 else
 {
retry_unhinted:
  if (VAR_10.a < -512 || VAR_10.a > 512) return ((void*)0);
  if (VAR_10.b < -512 || VAR_10.b > 512) return ((void*)0);
  if (VAR_10.c < -512 || VAR_10.c > 512) return ((void*)0);
  if (VAR_10.d < -512 || VAR_10.d > 512) return ((void*)0);

  VAR_13.xx = VAR_10.a * 64;
  VAR_13.yx = VAR_10.b * 64;
  VAR_13.xy = VAR_10.c * 64;
  VAR_13.yy = VAR_10.d * 64;
  VAR_14.x = VAR_10.e * 64;
  VAR_14.y = VAR_10.f * 64;

  VAR_15 = FUNC_4(VAR_12, 65536, 65536, 72, 72);
  if (VAR_15)
   FUNC_11(VAR_7, "FT_Set_Char_Size(%s,65536,72): %s", VAR_8->name, FUNC_6(VAR_15));
  FUNC_5(VAR_12, &VAR_13, &VAR_14);
  VAR_15 = FUNC_0(VAR_12, VAR_9, VAR_0 | VAR_1);
  if (VAR_15)
  {
   FUNC_11(VAR_7, "FT_Load_Glyph(%s,%d,FT_LOAD_NO_HINTING): %s", VAR_8->name, VAR_9, FUNC_6(VAR_15));
   return ((void*)0);
  }
 }

 if (VAR_8->flags.fake_bold)
 {
  FUNC_1(&VAR_12->glyph->outline, VAR_16 * 64);
  FUNC_2(&VAR_12->glyph->outline, -VAR_16 * 32, -VAR_16 * 32);
 }

 VAR_15 = FUNC_3(VAR_12->glyph, VAR_11 > 0 ? VAR_4 : VAR_3);
 if (VAR_15)
 {
  if (VAR_11 > 0)
   FUNC_11(VAR_7, "FT_Render_Glyph(%s,%d,FT_RENDER_MODE_NORMAL): %s", VAR_8->name, VAR_9, FUNC_6(VAR_15));
  else
   FUNC_11(VAR_7, "FT_Render_Glyph(%s,%d,FT_RENDER_MODE_MONO): %s", VAR_8->name, VAR_9, FUNC_6(VAR_15));
  return ((void*)0);
 }
 return VAR_12->glyph;
}
