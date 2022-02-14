
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ shaper_handle; int (* destroy ) (int *,scalar_t__) ;} ;
struct TYPE_9__ {TYPE_1__ shaper_data; struct TYPE_9__* advance_cache; struct TYPE_9__* width_table; struct TYPE_9__* bbox_table; int buffer; struct TYPE_9__** encoding_cache; int name; scalar_t__ ft_face; struct TYPE_9__* t3flags; struct TYPE_9__* t3widths; struct TYPE_9__* t3lists; struct TYPE_9__* t3procs; int refs; } ;
typedef TYPE_2__ fz_font ;
typedef int fz_context ;
typedef int FT_Face ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_2__) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_2__*,int *) ;
 int FUNC_7 (int *,TYPE_2__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,char*,int ,int ) ;
 int FUNC_11 (int *,scalar_t__) ;

void
FUNC_12(fz_context *VAR_1, fz_font *VAR_2)
{
 int VAR_3;
 int VAR_4;

 if (!FUNC_6(VAR_1, VAR_2, &VAR_2->refs))
  return;

 if (VAR_2->t3lists)
 {
  FUNC_1(VAR_1, VAR_2);
  for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
   FUNC_4(VAR_1, VAR_2->t3lists[VAR_4]);
  FUNC_7(VAR_1, VAR_2->t3procs);
  FUNC_7(VAR_1, VAR_2->t3lists);
  FUNC_7(VAR_1, VAR_2->t3widths);
  FUNC_7(VAR_1, VAR_2->t3flags);
 }

 if (VAR_2->ft_face)
 {
  FUNC_8(VAR_1, VAR_0);
  VAR_3 = FUNC_0((FT_Face)VAR_2->ft_face);
  FUNC_9(VAR_1, VAR_0);
  if (VAR_3)
   FUNC_10(VAR_1, "FT_Done_Face(%s): %s", VAR_2->name, FUNC_2(VAR_3));
  FUNC_5(VAR_1);
 }

 for (VAR_4 = 0; VAR_4 < 256; ++VAR_4)
  FUNC_7(VAR_1, VAR_2->encoding_cache[VAR_4]);

 FUNC_3(VAR_1, VAR_2->buffer);
 FUNC_7(VAR_1, VAR_2->bbox_table);
 FUNC_7(VAR_1, VAR_2->width_table);
 FUNC_7(VAR_1, VAR_2->advance_cache);
 if (VAR_2->shaper_data.destroy && VAR_2->shaper_data.shaper_handle)
 {
  VAR_2->shaper_data.destroy(VAR_1, VAR_2->shaper_data.shaper_handle);
 }
 FUNC_7(VAR_1, VAR_2);
}
