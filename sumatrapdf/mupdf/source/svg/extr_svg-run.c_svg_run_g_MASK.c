
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svg_state ;
typedef int svg_document ;
typedef int fz_xml ;
typedef int fz_device ;
typedef int fz_context ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *,int *) ;
 int FUNC_3 (int *,int *,int *,int *,int *) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_0, fz_device *VAR_1, svg_document *VAR_2, fz_xml *VAR_3, const svg_state *VAR_4)
{
 svg_state VAR_5 = *VAR_4;
 fz_xml *VAR_6;

 FUNC_2(VAR_0, VAR_2, VAR_3, &VAR_5);

 for (VAR_6 = FUNC_0(VAR_3); VAR_6; VAR_6 = FUNC_1(VAR_6))
  FUNC_3(VAR_0, VAR_1, VAR_2, VAR_6, &VAR_5);
}
