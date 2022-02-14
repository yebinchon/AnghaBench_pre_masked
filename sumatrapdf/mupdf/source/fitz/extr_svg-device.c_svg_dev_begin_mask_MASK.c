
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int id; } ;
typedef TYPE_2__ svg_device ;
typedef int fz_rect ;
typedef int fz_output ;
struct TYPE_8__ {int container_len; TYPE_1__* container; } ;
typedef TYPE_3__ fz_device ;
typedef int fz_context ;
typedef int fz_colorspace ;
typedef int fz_color_params ;
struct TYPE_6__ {int user; } ;


 int FUNC_0 (int *,int *,char*,int) ;
 int * FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static void
FUNC_2(fz_context *VAR_0, fz_device *VAR_1, fz_rect VAR_2, int VAR_3, fz_colorspace *VAR_4, const float *VAR_5, fz_color_params VAR_6)
{
 svg_device *VAR_7 = (svg_device*)VAR_1;
 fz_output *VAR_8;
 int VAR_9 = VAR_7->id++;

 VAR_8 = FUNC_1(VAR_0, VAR_7);
 FUNC_0(VAR_0, VAR_8, "<mask id=\"ma%d\">\n", VAR_9);

 if (VAR_1->container_len > 0)
  VAR_1->container[VAR_1->container_len-1].user = VAR_9;
}
