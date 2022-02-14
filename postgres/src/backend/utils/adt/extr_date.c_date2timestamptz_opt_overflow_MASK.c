
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; int tm_mday; int tm_mon; int tm_year; } ;
typedef int TimestampTz ;
typedef int DateADT ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct pg_tm*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int,int *,int *,int *) ;
 int VAR_8 ;

TimestampTz
FUNC_11(DateADT VAR_9, int *VAR_10)
{
 TimestampTz VAR_11;
 struct pg_tm VAR_12,
      *VAR_13 = &VAR_12;
 int VAR_14;

 if (FUNC_1(VAR_9))
  FUNC_5(VAR_11);
 else if (FUNC_2(VAR_9))
  FUNC_6(VAR_11);
 else
 {





  if (VAR_9 >= (VAR_5 - VAR_4))
  {
   if (VAR_10)
   {
    *VAR_10 = 1;
    return (TimestampTz) 0;
   }
   else
   {
    FUNC_7(VAR_2,
      (FUNC_8(VAR_1),
       FUNC_9("date out of range for timestamp")));
   }
  }

  FUNC_10(VAR_9 + VAR_4,
      &(VAR_13->tm_year), &(VAR_13->tm_mon), &(VAR_13->tm_mday));
  VAR_13->tm_hour = 0;
  VAR_13->tm_min = 0;
  VAR_13->tm_sec = 0;
  VAR_14 = FUNC_3(VAR_13, VAR_8);

  VAR_11 = VAR_9 * VAR_6 + VAR_14 * VAR_7;





  if (!FUNC_4(VAR_11))
  {
   if (VAR_10)
   {
    if (VAR_11 < VAR_3)
     *VAR_10 = -1;
    else
    {
     FUNC_0(VAR_11 >= VAR_0);
     *VAR_10 = 1;
    }
    return (TimestampTz) 0;
   }
   else
   {
    FUNC_7(VAR_2,
      (FUNC_8(VAR_1),
       FUNC_9("date out of range for timestamp")));
   }
  }
 }

 return VAR_11;
}
