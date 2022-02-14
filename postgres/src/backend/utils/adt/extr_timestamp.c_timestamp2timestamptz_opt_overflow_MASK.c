
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pg_tm {int dummy; } ;
typedef int fsec_t ;
typedef scalar_t__ TimestampTz ;
typedef scalar_t__ Timestamp ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct pg_tm*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*) ;
 int VAR_4 ;
 int FUNC_8 (scalar_t__,int *,struct pg_tm*,int *,int *,int *) ;

TimestampTz
FUNC_9(Timestamp VAR_5, int *VAR_6)
{
 TimestampTz VAR_7;
 struct pg_tm VAR_8,
      *VAR_9 = &VAR_8;
 fsec_t VAR_10;
 int VAR_11;

 if (FUNC_3(VAR_5))
  return VAR_5;

 if (!FUNC_8(VAR_5, ((void*)0), VAR_9, &VAR_10, ((void*)0), ((void*)0)))
 {
  VAR_11 = FUNC_1(VAR_9, VAR_4);

  VAR_7 = FUNC_4(VAR_5, -VAR_11);

  if (FUNC_2(VAR_7))
  {
   return VAR_7;
  }
  else if (VAR_6)
  {
   if (VAR_7 < VAR_3)
    *VAR_6 = -1;
   else
   {
    FUNC_0(VAR_7 >= VAR_0);
    *VAR_6 = 1;
   }
   return (TimestampTz) 0;
  }
 }

 FUNC_5(VAR_2,
   (FUNC_6(VAR_1),
    FUNC_7("timestamp out of range")));

 return 0;
}
