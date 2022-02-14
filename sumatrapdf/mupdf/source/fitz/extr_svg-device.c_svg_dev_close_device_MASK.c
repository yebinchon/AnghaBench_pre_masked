
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ layers; int id; int * save_id; int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_output ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *,char*) ;

__attribute__((used)) static void
FUNC_1(fz_context *VAR_0, fz_device *VAR_1)
{
 svg_device *VAR_2 = (svg_device*)VAR_1;
 fz_output *VAR_3 = VAR_2->out;

 while (VAR_2->layers > 0)
 {
  FUNC_0(VAR_0, VAR_3, "</g>\n");
  VAR_2->layers--;
 }

 if (VAR_2->save_id)
  *VAR_2->save_id = VAR_2->id;

 FUNC_0(VAR_0, VAR_3, "</g>\n");
 FUNC_0(VAR_0, VAR_3, "</svg>\n");
}
