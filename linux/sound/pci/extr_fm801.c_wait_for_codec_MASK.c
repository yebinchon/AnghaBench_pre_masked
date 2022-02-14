
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fm801 {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct fm801*,int ) ;
 int FUNC_1 (struct fm801*,int ,unsigned short) ;
 unsigned long VAR_6 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct fm801 *VAR_7, unsigned int VAR_8,
     unsigned short VAR_9, unsigned long VAR_10)
{
 unsigned long VAR_11 = VAR_6 + VAR_10;

 FUNC_1(VAR_7, VAR_0,
       VAR_9 | (VAR_8 << VAR_2) | VAR_4);
 FUNC_4(5);
 do {
  if ((FUNC_0(VAR_7, VAR_0) &
       (VAR_5 | VAR_3)) == VAR_5)
   return 0;
  FUNC_2(1);
 } while (FUNC_3(VAR_11, VAR_6));
 return -VAR_1;
}
