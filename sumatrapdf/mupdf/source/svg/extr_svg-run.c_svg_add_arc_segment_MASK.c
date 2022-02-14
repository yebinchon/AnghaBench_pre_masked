
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int y; int x; } ;
typedef TYPE_1__ fz_point ;
typedef int fz_path ;
typedef int fz_matrix ;
typedef int fz_context ;


 int VAR_0 ;
 int FUNC_0 (float) ;
 int FUNC_1 (int *,int *,int ,int ) ;
 TYPE_1__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (float) ;

__attribute__((used)) static void
FUNC_4(fz_context *VAR_1, fz_path *VAR_2, fz_matrix VAR_3, float VAR_4, float VAR_5, int VAR_6)
{
 float VAR_7, VAR_8;
 fz_point VAR_9;

 while (VAR_5 < VAR_4)
  VAR_5 += VAR_0 * 2;

 VAR_8 = VAR_0 / 180;

 if (VAR_6)
 {
  for (VAR_7 = VAR_4 + VAR_8; VAR_7 < VAR_5 - VAR_8/2; VAR_7 += VAR_8)
  {
   VAR_9 = FUNC_2(FUNC_0(VAR_7), FUNC_3(VAR_7), VAR_3);
   FUNC_1(VAR_1, VAR_2, VAR_9.x, VAR_9.y);
  }
 }
 else
 {
  VAR_4 += VAR_0 * 2;
  for (VAR_7 = VAR_4 - VAR_8; VAR_7 > VAR_5 + VAR_8/2; VAR_7 -= VAR_8)
  {
   VAR_9 = FUNC_2(FUNC_0(VAR_7), FUNC_3(VAR_7), VAR_3);
   FUNC_1(VAR_1, VAR_2, VAR_9.x, VAR_9.y);
  }
 }
}
