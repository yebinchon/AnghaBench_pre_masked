
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int xps_document ;
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
FUNC_4(fz_context *VAR_1, xps_document *VAR_2, fz_path *VAR_3, fz_matrix VAR_4, float VAR_5, float VAR_6, int VAR_7)
{
 float VAR_8, VAR_9;
 fz_point VAR_10;

 while (VAR_6 < VAR_5)
  VAR_6 += VAR_0 * 2;

 VAR_9 = VAR_0 / 180;

 if (VAR_7)
 {
  for (VAR_8 = VAR_5 + VAR_9; VAR_8 < VAR_6 - VAR_9/2; VAR_8 += VAR_9)
  {
   VAR_10 = FUNC_2(FUNC_0(VAR_8), FUNC_3(VAR_8), VAR_4);
   FUNC_1(VAR_1, VAR_3, VAR_10.x, VAR_10.y);
  }
 }
 else
 {
  VAR_5 += VAR_0 * 2;
  for (VAR_8 = VAR_5 - VAR_9; VAR_8 > VAR_6 + VAR_9/2; VAR_8 -= VAR_9)
  {
   VAR_10 = FUNC_2(FUNC_0(VAR_8), FUNC_3(VAR_8), VAR_4);
   FUNC_1(VAR_1, VAR_3, VAR_10.x, VAR_10.y);
  }
 }
}
