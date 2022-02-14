
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* font; } ;
typedef TYPE_2__ pdf_font_desc ;
typedef int fz_context ;
struct TYPE_9__ {int units_per_EM; } ;
struct TYPE_7__ {TYPE_3__* ft_face; } ;
typedef int FT_UShort ;
typedef int FT_Fixed ;
typedef TYPE_3__* FT_Face ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int,int,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int,int ) ;

__attribute__((used)) static int FUNC_4(fz_context *VAR_5, pdf_font_desc *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_4 | VAR_3 | VAR_2 | VAR_1;
 int VAR_9 = FUNC_1(VAR_6, VAR_7);
 FT_Fixed VAR_10 = 0;
 int VAR_11;
 FT_Face VAR_12 = VAR_6->font->ft_face;
 FT_UShort VAR_13;

 VAR_11 = FUNC_0(VAR_12, VAR_9, VAR_8, &VAR_10);
 if (VAR_11 && VAR_11 != VAR_0)
  FUNC_3(VAR_5, "FT_Get_Advance(%d): %s", VAR_9, FUNC_2(VAR_11));

 VAR_13 = VAR_12->units_per_EM;
 if (VAR_13 == 0)
  VAR_13 = 2048;

 return VAR_10 * 1000 / VAR_13;
}
