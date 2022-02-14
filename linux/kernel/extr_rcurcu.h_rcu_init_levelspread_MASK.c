
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static inline void FUNC_0(int *VAR_5, const int *VAR_6)
{
 int VAR_7;

 if (VAR_2) {
  VAR_5[VAR_4 - 1] = VAR_3;
  for (VAR_7 = VAR_4 - 2; VAR_7 >= 0; VAR_7--)
   VAR_5[VAR_7] = VAR_0;
 } else {
  int VAR_8;
  int VAR_9;

  VAR_9 = VAR_1;
  for (VAR_7 = VAR_4 - 1; VAR_7 >= 0; VAR_7--) {
   VAR_8 = VAR_6[VAR_7];
   VAR_5[VAR_7] = (VAR_9 + VAR_8 - 1) / VAR_8;
   VAR_9 = VAR_8;
  }
 }
}
