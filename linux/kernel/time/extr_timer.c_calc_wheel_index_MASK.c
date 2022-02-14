
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long FUNC_0 (int) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned int FUNC_1 (unsigned long,int) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6 = VAR_4 - VAR_5;
 unsigned int VAR_7;

 if (VAR_6 < FUNC_0(1)) {
  VAR_7 = FUNC_1(VAR_4, 0);
 } else if (VAR_6 < FUNC_0(2)) {
  VAR_7 = FUNC_1(VAR_4, 1);
 } else if (VAR_6 < FUNC_0(3)) {
  VAR_7 = FUNC_1(VAR_4, 2);
 } else if (VAR_6 < FUNC_0(4)) {
  VAR_7 = FUNC_1(VAR_4, 3);
 } else if (VAR_6 < FUNC_0(5)) {
  VAR_7 = FUNC_1(VAR_4, 4);
 } else if (VAR_6 < FUNC_0(6)) {
  VAR_7 = FUNC_1(VAR_4, 5);
 } else if (VAR_6 < FUNC_0(7)) {
  VAR_7 = FUNC_1(VAR_4, 6);
 } else if (VAR_0 > 8 && VAR_6 < FUNC_0(8)) {
  VAR_7 = FUNC_1(VAR_4, 7);
 } else if ((long) VAR_6 < 0) {
  VAR_7 = VAR_5 & VAR_1;
 } else {




  if (VAR_4 >= VAR_2)
   VAR_4 = VAR_3;

  VAR_7 = FUNC_1(VAR_4, VAR_0 - 1);
 }
 return VAR_7;
}
