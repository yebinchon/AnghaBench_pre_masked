
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_font ;
typedef int fz_context ;
struct TYPE_6__ {TYPE_1__* charmap; } ;
struct TYPE_5__ {int platform_id; scalar_t__ encoding_id; } ;
typedef TYPE_2__* FT_Face ;


 int FUNC_0 (TYPE_2__*,int) ;
 TYPE_2__* FUNC_1 (int *,int *) ;

int
FUNC_2(fz_context *VAR_0, fz_font *VAR_1, int VAR_2)
{
 FT_Face VAR_3 = FUNC_1(VAR_0, VAR_1);
 int VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4 == 0 && VAR_3->charmap && VAR_3->charmap->platform_id == 3 && VAR_3->charmap->encoding_id == 0)
  VAR_4 = FUNC_0(VAR_3, 0xF000 | VAR_2);
 return VAR_4;
}
