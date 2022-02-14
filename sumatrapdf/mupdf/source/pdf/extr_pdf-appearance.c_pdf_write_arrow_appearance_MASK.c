
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int fz_rect ;
struct TYPE_5__ {float x; float y; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_context ;
typedef int fz_buffer ;


 float FUNC_0 (float,float) ;
 int FUNC_1 (int *,int *,char*,float,float) ;
 int FUNC_2 (int ,float) ;
 int FUNC_3 (int ,TYPE_1__) ;
 TYPE_1__ FUNC_4 (float,float) ;
 float FUNC_5 (int,float) ;
 TYPE_1__ FUNC_6 (float,float,float) ;

__attribute__((used)) static void FUNC_7(fz_context *VAR_0, fz_buffer *VAR_1, fz_rect *VAR_2, float VAR_3, float VAR_4, float VAR_5, float VAR_6, float VAR_7)
{
 float VAR_8 = FUNC_5(1, VAR_7);
 float VAR_9 = FUNC_0(VAR_6, VAR_5);
 fz_point VAR_10, VAR_11, VAR_12;

 VAR_10 = FUNC_6(VAR_9, 8.8f*VAR_8, 4.5f*VAR_8);
 VAR_11 = FUNC_4(VAR_3 + VAR_10.x, VAR_4 + VAR_10.y);
 VAR_10 = FUNC_6(VAR_9, 8.8f*VAR_8, -4.5f*VAR_8);
 VAR_12 = FUNC_4(VAR_3 + VAR_10.x, VAR_4 + VAR_10.y);

 *VAR_2 = FUNC_3(*VAR_2, VAR_11);
 *VAR_2 = FUNC_3(*VAR_2, VAR_12);
 *VAR_2 = FUNC_2(*VAR_2, VAR_7);

 FUNC_1(VAR_0, VAR_1, "%g %g m\n", VAR_11.x, VAR_11.y);
 FUNC_1(VAR_0, VAR_1, "%g %g l\n", VAR_3, VAR_4);
 FUNC_1(VAR_0, VAR_1, "%g %g l\n", VAR_12.x, VAR_12.y);
}
