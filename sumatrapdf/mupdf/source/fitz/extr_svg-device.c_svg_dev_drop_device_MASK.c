
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_fonts; int num_images; TYPE_2__* images; TYPE_2__* fonts; int defs; int defs_buffer; TYPE_2__* tiles; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_4__ {int image; struct TYPE_4__* sentlist; int font; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_device *VAR_1)
{
 svg_device *VAR_2 = (svg_device*)VAR_1;
 int VAR_3;

 FUNC_4(VAR_0, VAR_2->tiles);
 FUNC_0(VAR_0, VAR_2->defs_buffer);
 FUNC_3(VAR_0, VAR_2->defs);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_fonts; VAR_3++)
 {
  FUNC_1(VAR_0, VAR_2->fonts[VAR_3].font);
  FUNC_4(VAR_0, VAR_2->fonts[VAR_3].sentlist);
 }
 FUNC_4(VAR_0, VAR_2->fonts);
 for (VAR_3 = 0; VAR_3 < VAR_2->num_images; VAR_3++)
 {
  FUNC_2(VAR_0, VAR_2->images[VAR_3].image);
 }
 FUNC_4(VAR_0, VAR_2->images);
}
