
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ pg_time_t ;
typedef scalar_t__ XLogRecPtr ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int ,char*,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_8(void)
{
 pg_time_t VAR_4;
 pg_time_t VAR_5;
 XLogRecPtr VAR_6;

 if (VAR_1 <= 0 || FUNC_3())
  return;

 VAR_4 = (pg_time_t) FUNC_7(((void*)0));


 if ((int) (VAR_4 - VAR_2) < VAR_1)
  return;





 VAR_5 = FUNC_1(&VAR_6);

 VAR_2 = FUNC_2(VAR_2, VAR_5);


 if ((int) (VAR_4 - VAR_2) >= VAR_1)
 {





  if (FUNC_0() > VAR_6)
  {
   XLogRecPtr VAR_7;


   VAR_7 = FUNC_4(1);





   if (FUNC_5(VAR_7, VAR_3) != 0)
    FUNC_6(VAR_0, "write-ahead log switch forced (archive_timeout=%d)",
      VAR_1);
  }





  VAR_2 = VAR_4;
 }
}
