
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TimeLineID ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (int ,int,char**,char**,int*) ;
 int VAR_4 ;
 int FUNC_9 (int,char*,int) ;

__attribute__((used)) static void
FUNC_10(TimeLineID VAR_5, TimeLineID VAR_6)
{
 TimeLineID VAR_7;

 for (VAR_7 = VAR_5; VAR_7 <= VAR_6; VAR_7++)
 {

  if (VAR_7 != 1 && !FUNC_5(VAR_7))
  {
   char *VAR_8;
   char *VAR_9;
   int VAR_10;
   char VAR_11[VAR_3];

   FUNC_1(VAR_2,
     (FUNC_3("fetching timeline history file for timeline %u from primary server",
       VAR_7)));

   FUNC_8(VAR_4, VAR_7, &VAR_8, &VAR_9, &VAR_10);






   FUNC_0(VAR_11, VAR_7);
   if (FUNC_7(VAR_8, VAR_11) != 0)
    FUNC_1(VAR_1,
      (FUNC_2(VAR_0),
       FUNC_4("primary reported unexpected file name for timeline history file of timeline %u",
           VAR_7)));




   FUNC_9(VAR_7, VAR_9, VAR_10);

   FUNC_6(VAR_8);
   FUNC_6(VAR_9);
  }
 }
}
