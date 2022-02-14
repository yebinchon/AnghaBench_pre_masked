
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RangeType ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char VAR_4 ;
 char VAR_5 ;
 char VAR_6 ;
 char VAR_7 ;
 char FUNC_0 (int *) ;

__attribute__((used)) static int
FUNC_1(RangeType *VAR_8)
{
 int VAR_9;
 char VAR_10;

 VAR_10 = FUNC_0(VAR_8);
 if (VAR_10 & VAR_5)
 {
  VAR_9 = VAR_1;
 }
 else
 {
  VAR_9 = 0;
  if (VAR_10 & VAR_6)
   VAR_9 |= VAR_2;
  if (VAR_10 & VAR_7)
   VAR_9 |= VAR_3;
  if (VAR_10 & VAR_4)
   VAR_9 |= VAR_0;
 }
 return VAR_9;
}
