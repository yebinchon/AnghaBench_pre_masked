
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int fz_font ;
typedef int fz_context ;
struct TYPE_5__ {TYPE_1__** charmaps; } ;
struct TYPE_4__ {int platform_id; int encoding_id; } ;
typedef TYPE_2__* FT_Face ;


 TYPE_2__* FUNC_0 (int *,int *) ;

void
FUNC_1(fz_context *VAR_0, fz_font *VAR_1, int VAR_2, int *VAR_3, int *VAR_4)
{
 FT_Face VAR_5 = FUNC_0(VAR_0, VAR_1);
 *VAR_3 = VAR_5->charmaps[VAR_2]->platform_id;
 *VAR_4 = VAR_5->charmaps[VAR_2]->encoding_id;
}
