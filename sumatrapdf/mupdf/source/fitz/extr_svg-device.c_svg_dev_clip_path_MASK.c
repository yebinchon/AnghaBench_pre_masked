
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int id; } ;
typedef TYPE_1__ svg_device ;
typedef int fz_rect ;
typedef int fz_path ;
typedef int fz_output ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 int * FUNC_0 (int *,TYPE_1__*) ;
 int FUNC_1 (int *,int *,char*,...) ;
 int * FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int const*) ;

__attribute__((used)) static void
FUNC_5(fz_context *VAR_0, fz_device *VAR_1, const fz_path *VAR_2, int VAR_3, fz_matrix VAR_4, fz_rect VAR_5)
{
 svg_device *VAR_6 = (svg_device*)VAR_1;
 fz_output *VAR_7;

 int VAR_8 = VAR_6->id++;

 VAR_7 = FUNC_2(VAR_0, VAR_6);
 FUNC_1(VAR_0, VAR_7, "<clipPath id=\"cp%d\">\n", VAR_8);
 FUNC_1(VAR_0, VAR_7, "<path");
 FUNC_3(VAR_0, VAR_6, VAR_4);
 FUNC_4(VAR_0, VAR_6, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_0, VAR_7, " fill-rule=\"evenodd\"");
 FUNC_1(VAR_0, VAR_7, "/>\n</clipPath>\n");
 VAR_7 = FUNC_0(VAR_0, VAR_6);
 FUNC_1(VAR_0, VAR_7, "<g clip-path=\"url(#cp%d)\">\n", VAR_8);
}
