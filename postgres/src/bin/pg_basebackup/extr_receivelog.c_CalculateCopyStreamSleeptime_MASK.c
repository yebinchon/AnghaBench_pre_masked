
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64 ;
typedef scalar_t__ TimestampTz ;


 int FUNC_0 (scalar_t__,scalar_t__,long*,int*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static long
FUNC_1(TimestampTz VAR_1, int VAR_2,
        TimestampTz VAR_3)
{
 TimestampTz VAR_4 = 0;
 long VAR_5;

 if (VAR_2 && VAR_0)
  VAR_4 = VAR_3 +
   (VAR_2 - 1) * ((int64) 1000);

 if (VAR_4 > 0)
 {
  long VAR_6;
  int VAR_7;

  FUNC_0(VAR_1,
         VAR_4,
         &VAR_6,
         &VAR_7);

  if (VAR_6 <= 0)
  {
   VAR_6 = 1;
   VAR_7 = 0;
  }

  VAR_5 = VAR_6 * 1000 + VAR_7 / 1000;
 }
 else
  VAR_5 = -1;

 return VAR_5;
}
