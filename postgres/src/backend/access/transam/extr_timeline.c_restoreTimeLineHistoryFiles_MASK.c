
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimeLineID ;


 int FUNC_0 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*,char*,int ,int) ;
 int FUNC_2 (char*,int) ;

void
FUNC_3(TimeLineID VAR_2, TimeLineID VAR_3)
{
 char VAR_4[VAR_1];
 char VAR_5[VAR_0];
 TimeLineID VAR_6;

 for (VAR_6 = VAR_2; VAR_6 < VAR_3; VAR_6++)
 {
  if (VAR_6 == 1)
   continue;

  FUNC_2(VAR_5, VAR_6);
  if (FUNC_1(VAR_4, VAR_5, "RECOVERYHISTORY", 0, 0))
   FUNC_0(VAR_4, VAR_5);
 }
}
