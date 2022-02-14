
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (unsigned long) ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 unsigned long FUNC_3 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_4(unsigned long VAR_8,
        unsigned long *VAR_9,
        unsigned long *VAR_10)
{
 unsigned long VAR_11 = 0, VAR_12 = 0;
 unsigned long VAR_13, VAR_14, VAR_15, VAR_16;


 if (!FUNC_1(VAR_1))
  FUNC_0(!VAR_5);
 else
  FUNC_0(!VAR_7);


 VAR_14 = 0;
 VAR_15 = VAR_6;

 while (VAR_15 - VAR_14 > 1) {
  VAR_16 = VAR_14 + (VAR_15 - VAR_14) / 2;
  if (FUNC_3(VAR_16) <= VAR_8)
   VAR_14 = VAR_16;
  else
   VAR_15 = VAR_16;
 }





 while (VAR_14 && FUNC_3(VAR_14-1) == FUNC_3(VAR_14))
  --VAR_14;

 VAR_11 = FUNC_3(VAR_14);


 for (VAR_13 = VAR_14 + 1; VAR_13 < VAR_6; VAR_13++) {
  if (FUNC_3(VAR_13) > VAR_11) {
   VAR_12 = FUNC_3(VAR_13);
   break;
  }
 }


 if (!VAR_12) {
  if (FUNC_2(VAR_8))
   VAR_12 = (unsigned long)VAR_2;
  else if (FUNC_1(VAR_0))
   VAR_12 = (unsigned long)VAR_3;
  else
   VAR_12 = (unsigned long)VAR_4;
 }

 if (VAR_9)
  *VAR_9 = VAR_12 - VAR_11;
 if (VAR_10)
  *VAR_10 = VAR_8 - VAR_11;

 return VAR_14;
}
