
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_dev; scalar_t__ st_ino; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,struct stat*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,int,char*,int) ;

int FUNC_4(void)
{
 int VAR_2, VAR_3, VAR_4;
 struct stat VAR_5, VAR_6, VAR_7;
 char VAR_8[64];
 int VAR_9;

 VAR_2 = FUNC_2("/", VAR_0|VAR_1);
 FUNC_0(VAR_2 >= 0);

 FUNC_3(VAR_8, sizeof(VAR_8), "/proc/self/fd/%u", VAR_2);
 VAR_3 = FUNC_2(VAR_8, VAR_1);
 FUNC_0(VAR_3 >= 0);

 FUNC_3(VAR_8, sizeof(VAR_8), "/proc/thread-self/fd/%u", VAR_2);
 VAR_4 = FUNC_2(VAR_8, VAR_1);
 FUNC_0(VAR_4 >= 0);

 VAR_9 = FUNC_1(VAR_2, &VAR_5);
 FUNC_0(VAR_9 == 0);
 VAR_9 = FUNC_1(VAR_3, &VAR_6);
 FUNC_0(VAR_9 == 0);
 VAR_9 = FUNC_1(VAR_4, &VAR_7);
 FUNC_0(VAR_9 == 0);

 FUNC_0(VAR_5 == VAR_6);
 FUNC_0(VAR_5 == VAR_6);

 FUNC_0(VAR_5 == VAR_7);
 FUNC_0(VAR_5 == VAR_7);

 return 0;
}
