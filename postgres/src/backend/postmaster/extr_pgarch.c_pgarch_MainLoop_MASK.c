
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int pg_time_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int,int,int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_3 () ;
 int VAR_10 ;
 void* FUNC_4 (int *) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_5(void)
{
 pg_time_t VAR_12 = 0;
 bool VAR_13;







 VAR_11 = 1;






 do
 {
  FUNC_1(VAR_0);


  VAR_13 = VAR_10;


  if (VAR_7)
  {
   VAR_7 = 0;
   FUNC_0(VAR_2);
  }
  if (VAR_8)
  {
   time_t VAR_14 = FUNC_4(((void*)0));

   if (VAR_9 == 0)
    VAR_9 = VAR_14;
   else if ((unsigned int) (VAR_14 - VAR_9) >=
      (unsigned int) 60)
    break;
  }


  if (VAR_11 || VAR_13)
  {
   VAR_11 = 0;
   FUNC_3();
   VAR_12 = FUNC_4(((void*)0));
  }






  if (!VAR_13)
  {
   pg_time_t VAR_15 = (pg_time_t) FUNC_4(((void*)0));
   int VAR_16;

   VAR_16 = VAR_1 - (VAR_15 - VAR_12);
   if (VAR_16 > 0)
   {
    int VAR_17;

    VAR_17 = FUNC_2(VAR_0,
          VAR_4 | VAR_6 | VAR_5,
          VAR_16 * 1000L,
          VAR_3);
    if (VAR_17 & VAR_6)
     VAR_11 = 1;
    if (VAR_17 & VAR_5)
     VAR_13 = 1;
   }
   else
    VAR_11 = 1;
  }






 } while (!VAR_13);
}
