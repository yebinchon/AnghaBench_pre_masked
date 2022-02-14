
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_gstates; int num_cid_fonts; int num_groups; TYPE_2__* gstates; TYPE_2__* alphas; TYPE_2__* groups; TYPE_2__* image_indices; TYPE_2__* cid_fonts; int resources; } ;
typedef TYPE_1__ pdf_device ;
typedef int fz_device ;
typedef int fz_context ;
struct TYPE_5__ {int colorspace; int ref; int stroke_state; int buf; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,TYPE_2__) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, fz_device *VAR_1)
{
 pdf_device *VAR_2 = (pdf_device*)VAR_1;
 int VAR_3;

 for (VAR_3 = VAR_2->num_gstates-1; VAR_3 >= 0; VAR_3--)
 {
  FUNC_0(VAR_0, VAR_2->gstates[VAR_3].buf);
  FUNC_3(VAR_0, VAR_2->gstates[VAR_3].stroke_state);
 }

 for (VAR_3 = VAR_2->num_cid_fonts-1; VAR_3 >= 0; VAR_3--)
  FUNC_2(VAR_0, VAR_2->cid_fonts[VAR_3]);

 for (VAR_3 = VAR_2->num_groups - 1; VAR_3 >= 0; VAR_3--)
 {
  FUNC_5(VAR_0, VAR_2->groups[VAR_3].ref);
  FUNC_1(VAR_0, VAR_2->groups[VAR_3].colorspace);
 }

 FUNC_5(VAR_0, VAR_2->resources);
 FUNC_4(VAR_0, VAR_2->cid_fonts);
 FUNC_4(VAR_0, VAR_2->image_indices);
 FUNC_4(VAR_0, VAR_2->groups);
 FUNC_4(VAR_0, VAR_2->alphas);
 FUNC_4(VAR_0, VAR_2->gstates);
}
