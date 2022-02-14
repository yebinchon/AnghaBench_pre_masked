
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct info {scalar_t__* palette; } ;
typedef int fz_context ;


 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int
FUNC_1(fz_context *VAR_0, struct info *VAR_1, int VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++)
 {
  int VAR_4 = FUNC_0(VAR_1->palette[3 * VAR_3 + 0] - VAR_1->palette[3 * VAR_3 + 1]);
  int VAR_5 = FUNC_0(VAR_1->palette[3 * VAR_3 + 1] - VAR_1->palette[3 * VAR_3 + 2]);
  int VAR_6 = FUNC_0(VAR_1->palette[3 * VAR_3 + 0] - VAR_1->palette[3 * VAR_3 + 2]);
  if (VAR_4 > 2 || VAR_5 > 2 || VAR_6 > 2)
   return 0;
 }
 return 1;
}
