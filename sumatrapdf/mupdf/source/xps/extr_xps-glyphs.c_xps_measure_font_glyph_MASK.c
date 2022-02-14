
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {float hadv; float vadv; float vorg; } ;
typedef TYPE_1__ xps_glyph_metrics ;
typedef int xps_document ;
typedef int fz_font ;
typedef int fz_context ;
struct TYPE_7__ {float units_per_EM; scalar_t__ ascender; } ;
typedef scalar_t__ FT_Fixed ;
typedef TYPE_2__* FT_Face ;


 int FUNC_0 (TYPE_2__*,int,int,scalar_t__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;

void
FUNC_4(fz_context *VAR_4, xps_document *VAR_5, fz_font *VAR_6, int VAR_7, xps_glyph_metrics *VAR_8)
{
 int VAR_9 = VAR_1 | VAR_0;
 FT_Face VAR_10 = FUNC_1(VAR_4, VAR_6);
 FT_Fixed VAR_11 = 0, VAR_12 = 0;

 FUNC_2(VAR_4, VAR_3);
 FUNC_0(VAR_10, VAR_7, VAR_9, &VAR_11);
 FUNC_0(VAR_10, VAR_7, VAR_9 | VAR_2, &VAR_12);
 FUNC_3(VAR_4, VAR_3);

 VAR_8->hadv = (float) VAR_11 / VAR_10->units_per_EM;
 VAR_8->vadv = (float) VAR_12 / VAR_10->units_per_EM;
 VAR_8->vorg = (float) VAR_10->ascender / VAR_10->units_per_EM;
}
