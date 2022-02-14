
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svg_state ;
typedef int svg_document ;
typedef int fz_xml ;
typedef int fz_device ;
typedef int fz_context ;


 scalar_t__ FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int *,int *,int *,int const*) ;
 int FUNC_2 (int *,int *,int *,int *,int const*) ;
 int FUNC_3 (int *,int *,int *,int *,int const*) ;
 int FUNC_4 (int *,int *,int *,int *,int const*) ;
 int FUNC_5 (int *,int *,int *,int *,int const*) ;
 int FUNC_6 (int *,int *,int *,int *,int const*) ;
 int FUNC_7 (int *,int *,int *,int *,int const*) ;
 int FUNC_8 (int *,int *,int *,int *,int const*) ;
 int FUNC_9 (int *,int *,int *,int *,int const*) ;
 int FUNC_10 (int *,int *,int *,int *,int const*) ;
 int FUNC_11 (int *,int *,int *,int *) ;
 int FUNC_12 (int *,int *,int *,int *) ;
 int FUNC_13 (int *,int *,int *,int *) ;
 int FUNC_14 (int *,int *,int *,int *) ;
 int FUNC_15 (int *,int *,int *,int *,int const*) ;

__attribute__((used)) static void
FUNC_16(fz_context *VAR_0, fz_device *VAR_1, svg_document *VAR_2, fz_xml *VAR_3, const svg_state *VAR_4)
{
 if (FUNC_0(VAR_3, "svg"))
  FUNC_10(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 else if (FUNC_0(VAR_3, "g"))
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 else if (FUNC_0(VAR_3, "title"))
  ;
 else if (FUNC_0(VAR_3, "desc"))
  ;

 else if (FUNC_0(VAR_3, "defs"))
  ;
 else if (FUNC_0(VAR_3, "symbol"))
  ;

 else if (FUNC_0(VAR_3, "use"))
  FUNC_15(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 else if (FUNC_0(VAR_3, "path"))
  FUNC_6(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_0(VAR_3, "rect"))
  FUNC_9(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_0(VAR_3, "circle"))
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_0(VAR_3, "ellipse"))
  FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_0(VAR_3, "line"))
  FUNC_5(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_0(VAR_3, "polyline"))
  FUNC_8(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else if (FUNC_0(VAR_3, "polygon"))
  FUNC_7(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 else if (FUNC_0(VAR_3, "image"))
  FUNC_4(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 else
 {

 }
}
