
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {int id; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_rect ;
typedef int fz_output ;
struct TYPE_16__ {float a; float d; int member_0; } ;
typedef TYPE_2__ fz_matrix ;
struct TYPE_17__ {float w; float h; } ;
typedef TYPE_3__ fz_image ;
typedef int fz_device ;
typedef int fz_context ;


 int * FUNC_0 (int *,TYPE_1__*) ;
 TYPE_2__ FUNC_1 (TYPE_2__,TYPE_2__) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,char*,...) ;
 int * FUNC_3 (int *,TYPE_1__*) ;
 int FUNC_4 (int *,TYPE_1__*,TYPE_2__) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_1, fz_device *VAR_2, fz_image *VAR_3, fz_matrix VAR_4, fz_rect VAR_5)
{
 svg_device *VAR_6 = (svg_device*)VAR_2;
 fz_output *VAR_7;
 fz_matrix VAR_8 = VAR_4;
 fz_matrix VAR_9 = { 0 };
 int VAR_10 = VAR_6->id++;

 VAR_9.a = 1.0f / VAR_3->w;
 VAR_9.d = 1.0f / VAR_3->h;

 VAR_8 = FUNC_1(VAR_9, VAR_4);
 VAR_7 = FUNC_3(VAR_1, VAR_6);
 FUNC_2(VAR_1, VAR_7, "<mask id=\"ma%d\">\n<g", VAR_10);
 FUNC_4(VAR_1, VAR_6, VAR_8);
 FUNC_2(VAR_1, VAR_7, ">\n");
 FUNC_5(VAR_1, VAR_6, VAR_3, VAR_0 );
 FUNC_2(VAR_1, VAR_7, "</g>\n</mask>\n");
 VAR_7 = FUNC_0(VAR_1, VAR_6);
 FUNC_2(VAR_1, VAR_7, "<g mask=\"url(#ma%d)\">\n", VAR_10);
}
