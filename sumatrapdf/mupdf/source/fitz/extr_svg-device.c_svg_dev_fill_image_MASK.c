
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int * out; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_output ;
struct TYPE_14__ {float a; float d; int member_0; } ;
typedef TYPE_2__ fz_matrix ;
struct TYPE_15__ {float w; float h; } ;
typedef TYPE_3__ fz_image ;
typedef int fz_device ;
typedef int fz_context ;
typedef int fz_color_params ;


 TYPE_2__ FUNC_0 (TYPE_2__,TYPE_2__) ;
 int FUNC_1 (int *,int *,char*,...) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_2__) ;
 int FUNC_3 (int *,TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, fz_image *VAR_2, fz_matrix VAR_3, float VAR_4, fz_color_params VAR_5)
{
 svg_device *VAR_6 = (svg_device*)VAR_1;
 fz_output *VAR_7 = VAR_6->out;

 fz_matrix VAR_8 = VAR_3;
 fz_matrix VAR_9 = { 0 };

 VAR_9.a = 1.0f / VAR_2->w;
 VAR_9.d = 1.0f / VAR_2->h;

 VAR_8 = FUNC_0(VAR_9, VAR_3);
 FUNC_1(VAR_0, VAR_7, "<g");
 if (VAR_4 != 1.0f)
  FUNC_1(VAR_0, VAR_7, " opacity=\"%g\"", VAR_4);
 FUNC_2(VAR_0, VAR_6, VAR_8);
 FUNC_1(VAR_0, VAR_7, ">\n");
 FUNC_3(VAR_0, VAR_6, VAR_2, VAR_5);
 FUNC_1(VAR_0, VAR_7, "</g>\n");
}
