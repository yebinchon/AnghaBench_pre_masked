
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pdf_device ;
struct TYPE_3__ {int buf; } ;
typedef TYPE_1__ gstate ;
typedef int fz_stroke_state ;
typedef int fz_rect ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_device ;
typedef int fz_context ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,int const*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(fz_context *VAR_0, fz_device *VAR_1, const fz_path *VAR_2, const fz_stroke_state *VAR_3, fz_matrix VAR_4, fz_rect VAR_5)
{
 pdf_device *VAR_6 = (pdf_device*)VAR_1;
 gstate *VAR_7;

 FUNC_3(VAR_0, VAR_6);
 FUNC_5(VAR_0, VAR_6);




 FUNC_2(VAR_0, VAR_6, VAR_4);
 FUNC_4(VAR_0, VAR_6, VAR_2);
 VAR_7 = FUNC_0(VAR_6);
 FUNC_1(VAR_0, VAR_7->buf, "W n\n");
}
