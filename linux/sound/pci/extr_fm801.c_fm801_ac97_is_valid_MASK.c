
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct fm801*,int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static bool FUNC_2(struct fm801 *VAR_2, unsigned int VAR_3)
{
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  if (FUNC_0(VAR_2, VAR_0) & VAR_1)
   return 1;
  FUNC_1(10);
 }
 return 0;
}
