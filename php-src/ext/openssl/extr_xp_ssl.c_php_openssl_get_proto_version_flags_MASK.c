
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_3) {
  VAR_3 = FUNC_1(VAR_2);
 }
 if (!VAR_4) {
  VAR_4 = FUNC_0(VAR_2);
 }

 for (VAR_5 = VAR_1; VAR_5 <= VAR_0; VAR_5 <<= 1) {
  if (VAR_5 >= VAR_3 && VAR_5 <= VAR_4) {
   if (!(VAR_2 & VAR_5)) {
    VAR_2 |= VAR_5;
   }
  } else if (VAR_2 & VAR_5) {
   VAR_2 &= ~VAR_5;
  }
 }

 return VAR_2;
}
