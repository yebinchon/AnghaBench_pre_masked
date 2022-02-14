
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_device ;
struct TYPE_3__ {scalar_t__ a; float r; float g; float b; } ;
typedef TYPE_1__ fz_css_color ;
typedef int fz_context ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *,int *,int ,int ,int ,float*,float,int ) ;
 int FUNC_4 (int *,int *,float,float) ;
 int FUNC_5 (int *,int *,float,float) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(fz_context *VAR_1, fz_device *VAR_2, fz_matrix VAR_3, float VAR_4, fz_css_color VAR_5, float VAR_6, float VAR_7, float VAR_8, float VAR_9)
{
 if (VAR_5.a > 0)
 {
  float VAR_10[3];

  fz_path *VAR_11 = FUNC_6(VAR_1);

  FUNC_5(VAR_1, VAR_11, VAR_6, VAR_7 - VAR_4);
  FUNC_4(VAR_1, VAR_11, VAR_8, VAR_7 - VAR_4);
  FUNC_4(VAR_1, VAR_11, VAR_8, VAR_9 - VAR_4);
  FUNC_4(VAR_1, VAR_11, VAR_6, VAR_9 - VAR_4);
  FUNC_0(VAR_1, VAR_11);

  VAR_10[0] = VAR_5.r / 255.0f;
  VAR_10[1] = VAR_5.g / 255.0f;
  VAR_10[2] = VAR_5.b / 255.0f;

  FUNC_3(VAR_1, VAR_2, VAR_11, 0, VAR_3, FUNC_1(VAR_1), VAR_10, VAR_5.a / 255.0f, VAR_0);

  FUNC_2(VAR_1, VAR_11);
 }
}
