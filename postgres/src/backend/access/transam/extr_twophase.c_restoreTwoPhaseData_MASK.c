
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef scalar_t__ TransactionId ;
typedef int DIR ;


 int * FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (char*,int ,int ,int ) ;
 char* FUNC_5 (scalar_t__,int ,int,int,int) ;
 struct dirent* FUNC_6 (int *,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int ,int *,int) ;

void
FUNC_10(void)
{
 DIR *VAR_5;
 struct dirent *VAR_6;

 FUNC_2(VAR_4, VAR_2);
 VAR_5 = FUNC_0(VAR_3);
 while ((VAR_6 = FUNC_6(VAR_5, VAR_3)) != ((void*)0))
 {
  if (FUNC_7(VAR_6->d_name) == 8 &&
   FUNC_8(VAR_6->d_name, "0123456789ABCDEF") == 8)
  {
   TransactionId VAR_7;
   char *VAR_8;

   VAR_7 = (TransactionId) FUNC_9(VAR_6->d_name, ((void*)0), 16);

   VAR_8 = FUNC_5(VAR_7, VAR_1,
          1, 0, 0);
   if (VAR_8 == ((void*)0))
    continue;

   FUNC_4(VAR_8, VAR_1,
         VAR_1, VAR_0);
  }
 }
 FUNC_3(VAR_4);
 FUNC_1(VAR_5);
}
