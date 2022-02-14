
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline int FUNC_1(int VAR_2, int *VAR_3)
{
 int VAR_4;

 switch(VAR_2) {
 case 1: *VAR_3 |= VAR_0; return 0;
 case 3: *VAR_3 |= VAR_1; return 0;
 default:
  if (VAR_2%2) return -1;
  VAR_4 = VAR_2/2-1;
  if (VAR_4 == 8 || VAR_4 == 9) return -1;
  *VAR_3 |= FUNC_0(VAR_2);
  return 0;
 }
}
