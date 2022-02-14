
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimestampTz ;


 int FUNC_0 (int ,int ,long*,int*) ;
 int FUNC_1 (scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static long
FUNC_2(TimestampTz VAR_3)
{
 long VAR_4 = 10000;

 if (VAR_2 > 0 && VAR_0 > 0)
 {
  TimestampTz VAR_5;
  long VAR_6;
  int VAR_7;





  VAR_5 = FUNC_1(VAR_0,
              VAR_2);






  if (!VAR_1)
   VAR_5 = FUNC_1(VAR_0,
               VAR_2 / 2);


  FUNC_0(VAR_3, VAR_5,
       &VAR_6, &VAR_7);

  VAR_4 = VAR_6 * 1000 +
   VAR_7 / 1000;
 }

 return VAR_4;
}
