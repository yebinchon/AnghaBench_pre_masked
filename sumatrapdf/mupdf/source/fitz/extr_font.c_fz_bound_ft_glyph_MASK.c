
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;


struct TYPE_26__ {float x0; float x1; float y0; float y1; } ;
typedef TYPE_3__ fz_rect ;
struct TYPE_27__ {int a; int b; int c; int d; int e; int f; } ;
typedef TYPE_4__ fz_matrix ;
struct TYPE_24__ {scalar_t__ fake_bold; scalar_t__ fake_italic; } ;
struct TYPE_28__ {TYPE_1__ flags; int name; TYPE_3__* bbox_table; TYPE_8__* ft_face; } ;
typedef TYPE_5__ fz_font ;
typedef int fz_context ;
struct TYPE_32__ {float const xMin; float const yMin; float const xMax; float const yMax; } ;
struct TYPE_31__ {int units_per_EM; TYPE_2__* glyph; } ;
struct TYPE_30__ {int xx; int yx; int xy; int yy; } ;
struct TYPE_29__ {int x; int y; } ;
struct TYPE_25__ {int outline; } ;
typedef TYPE_6__ FT_Vector ;
typedef TYPE_7__ FT_Matrix ;
typedef TYPE_8__* FT_Face ;
typedef scalar_t__ FT_Error ;
typedef TYPE_9__ FT_BBox ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_8__*,int,int) ;
 int FUNC_1 (int *,float const) ;
 int FUNC_2 (int *,TYPE_9__*) ;
 int FUNC_3 (int *,float const,float const) ;
 scalar_t__ FUNC_4 (TYPE_8__*,int const,int const,int,int) ;
 int FUNC_5 (TYPE_8__*,TYPE_7__*,TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,TYPE_5__*,int,TYPE_4__*) ;
 TYPE_4__ VAR_4 ;
 scalar_t__ FUNC_8 (TYPE_3__) ;
 int FUNC_9 (int *,int ) ;
 TYPE_4__ FUNC_10 (TYPE_4__,int ,int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (int *,char*,int ,int const,int ) ;

__attribute__((used)) static fz_rect *
FUNC_13(fz_context *VAR_5, fz_font *VAR_6, int VAR_7)
{
 FT_Face VAR_8 = VAR_6->ft_face;
 FT_Error VAR_9;
 FT_BBox VAR_10;
 FT_Matrix VAR_11;
 FT_Vector VAR_12;
 fz_rect *VAR_13 = &VAR_6->bbox_table[VAR_7];




 const int VAR_14 = VAR_8->units_per_EM;
 const float VAR_15 = 1.0f / VAR_14;
 const float VAR_16 = 0.02f;
 fz_matrix VAR_17 = VAR_4;

 FUNC_7(VAR_5, VAR_6, VAR_7, &VAR_17);

 if (VAR_6->flags.fake_italic)
  VAR_17 = FUNC_10(VAR_17, VAR_3, 0);

 VAR_11.xx = VAR_17.a * 65536;
 VAR_11.yx = VAR_17.b * 65536;
 VAR_11.xy = VAR_17.c * 65536;
 VAR_11.yy = VAR_17.d * 65536;
 VAR_12.x = VAR_17.e * 65536;
 VAR_12.y = VAR_17.f * 65536;

 FUNC_9(VAR_5, VAR_2);



 VAR_9 = FUNC_4(VAR_8, VAR_14, VAR_14, 72, 72);
 if (VAR_9)
  FUNC_12(VAR_5, "FT_Set_Char_Size(%s,%d,72): %s", VAR_6->name, VAR_14, FUNC_6(VAR_9));
 FUNC_5(VAR_8, &VAR_11, &VAR_12);

 VAR_9 = FUNC_0(VAR_8, VAR_7, VAR_0 | VAR_1);
 if (VAR_9)
 {
  FUNC_12(VAR_5, "FT_Load_Glyph(%s,%d,FT_LOAD_NO_HINTING): %s", VAR_6->name, VAR_7, FUNC_6(VAR_9));
  FUNC_11(VAR_5, VAR_2);
  VAR_13->x0 = VAR_13->x1 = VAR_17.e;
  VAR_13->y0 = VAR_13->y1 = VAR_17.f;
  return VAR_13;
 }

 if (VAR_6->flags.fake_bold)
 {
  FUNC_1(&VAR_8->glyph->outline, VAR_16 * VAR_14);
  FUNC_3(&VAR_8->glyph->outline, -VAR_16 * 0.5f * VAR_14, -VAR_16 * 0.5f * VAR_14);
 }

 FUNC_2(&VAR_8->glyph->outline, &VAR_10);
 FUNC_11(VAR_5, VAR_2);
 VAR_13->x0 = VAR_10.xMin * VAR_15;
 VAR_13->y0 = VAR_10.yMin * VAR_15;
 VAR_13->x1 = VAR_10.xMax * VAR_15;
 VAR_13->y1 = VAR_10.yMax * VAR_15;

 if (FUNC_8(*VAR_13))
 {
  VAR_13->x0 = VAR_13->x1 = VAR_17.e;
  VAR_13->y0 = VAR_13->y1 = VAR_17.f;
 }

 return VAR_13;
}
