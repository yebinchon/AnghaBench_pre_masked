
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xps_resource ;
struct TYPE_3__ {scalar_t__ opacity_top; int * dev; } ;
typedef TYPE_1__ xps_document ;
typedef int fz_xml ;
typedef int fz_device ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,char*) ;

void
FUNC_2(fz_context *VAR_0, xps_document *VAR_1, char *VAR_2, xps_resource *VAR_3,
 char *VAR_4, fz_xml *VAR_5)
{
 fz_device *VAR_6 = VAR_1->dev;

 if (!VAR_4 && !VAR_5)
  return;

 if (VAR_1->opacity_top > 0)
  VAR_1->opacity_top--;

 if (VAR_5)
 {
  if (!FUNC_1(VAR_5, "SolidColorBrush"))
   FUNC_0(VAR_0, VAR_6);
 }
}
