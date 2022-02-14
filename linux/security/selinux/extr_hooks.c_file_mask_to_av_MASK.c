
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline u32 FUNC_1(int VAR_11, int VAR_12)
{
 u32 VAR_13 = 0;

 if (!FUNC_0(VAR_11)) {
  if (VAR_12 & VAR_8)
   VAR_13 |= VAR_4;
  if (VAR_12 & VAR_9)
   VAR_13 |= VAR_5;

  if (VAR_12 & VAR_7)
   VAR_13 |= VAR_3;
  else if (VAR_12 & VAR_10)
   VAR_13 |= VAR_6;

 } else {
  if (VAR_12 & VAR_8)
   VAR_13 |= VAR_1;
  if (VAR_12 & VAR_10)
   VAR_13 |= VAR_2;
  if (VAR_12 & VAR_9)
   VAR_13 |= VAR_0;
 }

 return VAR_13;
}
