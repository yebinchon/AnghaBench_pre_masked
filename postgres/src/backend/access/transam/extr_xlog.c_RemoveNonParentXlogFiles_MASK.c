
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_name; } ;
typedef int XLogSegNo ;
typedef int XLogRecPtr ;
typedef int TimeLineID ;
typedef int DIR ;


 int * FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (scalar_t__) ;
 int VAR_2 ;
 struct dirent* FUNC_3 (int *,int ) ;
 int FUNC_4 (scalar_t__,int ,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int ,int ,int ) ;
 int FUNC_8 (int ,char*,char*) ;
 scalar_t__ FUNC_9 (scalar_t__,char*) ;
 scalar_t__ FUNC_10 (scalar_t__,char*,int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_11(XLogRecPtr VAR_5, TimeLineID VAR_6)
{
 DIR *VAR_7;
 struct dirent *VAR_8;
 char VAR_9[VAR_2];
 XLogSegNo VAR_10;

 FUNC_5(VAR_5, VAR_10, VAR_4);




 FUNC_7(VAR_9, VAR_6, VAR_10, VAR_4);

 FUNC_8(VAR_0, "attempting to remove WAL segments newer than log file %s",
   VAR_9);

 VAR_7 = FUNC_0(VAR_3);

 while ((VAR_8 = FUNC_3(VAR_7, VAR_3)) != ((void*)0))
 {

  if (!FUNC_2(VAR_8->d_name))
   continue;






  if (FUNC_10(VAR_8->d_name, VAR_9, 8) < 0 &&
   FUNC_9(VAR_8->d_name + 8, VAR_9 + 8) > 0)
  {






   if (!FUNC_6(VAR_8->d_name))
    FUNC_4(VAR_8->d_name, VAR_1, VAR_5);
  }
 }

 FUNC_1(VAR_7);
}
