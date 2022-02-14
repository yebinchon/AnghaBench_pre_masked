
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ida {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ida*,int) ;
 unsigned long FUNC_1 (struct ida*,unsigned long,int ) ;
 int FUNC_2 (struct ida*) ;
 int FUNC_3 (struct ida*) ;

__attribute__((used)) static void FUNC_4(struct ida *VAR_2)
{
 unsigned long VAR_3, VAR_4;

 for (VAR_4 = 1; VAR_4 < 65537; VAR_4 *= 2) {
  unsigned long VAR_5 = (1UL << 31) - VAR_4;
  for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
   FUNC_0(VAR_2, FUNC_1(VAR_2, VAR_5, VAR_1) !=
     VAR_5 + VAR_3);
  }
  FUNC_0(VAR_2, FUNC_1(VAR_2, VAR_5, VAR_1) !=
    -VAR_0);
  FUNC_2(VAR_2);
  FUNC_0(VAR_2, !FUNC_3(VAR_2));
 }
}
