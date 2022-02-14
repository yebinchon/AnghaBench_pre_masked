
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {scalar_t__ d_type; int d_name; } ;
typedef int DIR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *) ;
 unsigned int FUNC_3 (int *) ;
 unsigned int FUNC_4 (unsigned int,unsigned int) ;
 unsigned int FUNC_5 (char*,int) ;
 int * FUNC_6 (char*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (unsigned int) ;
 int FUNC_9 (int ) ;
 struct dirent* FUNC_10 (int *) ;
 unsigned long long FUNC_11 (int ,char**) ;

int FUNC_12(void)
{
 struct dirent *VAR_5;
 unsigned int VAR_6, VAR_7;

 if (FUNC_9(VAR_0) == -1)
  return 1;


 do {
  DIR *VAR_8;

  VAR_8 = FUNC_6("/proc/self/fd");
  if (!VAR_8)
   return 1;

  VAR_5 = FUNC_10(VAR_8);
  FUNC_0(VAR_5->d_type == VAR_1);
  FUNC_0(FUNC_7(VAR_5->d_name, "."));

  VAR_5 = FUNC_10(VAR_8);
  FUNC_0(VAR_5->d_type == VAR_1);
  FUNC_0(FUNC_7(VAR_5->d_name, ".."));
next:
  VAR_5 = FUNC_10(VAR_8);
  if (VAR_5) {
   unsigned long long VAR_9;
   unsigned int VAR_10;
   char *VAR_11;

   FUNC_0(VAR_5->d_type == VAR_2);

   VAR_9 = FUNC_11(VAR_5->d_name, &VAR_11);
   FUNC_0(*VAR_11 == '\0');
   FUNC_0(VAR_9 == (unsigned int)VAR_9);

   VAR_10 = VAR_9;
   if (VAR_10 == FUNC_3(VAR_8))
    goto next;
   FUNC_1(VAR_10);
  }

  FUNC_2(VAR_8);
 } while (VAR_5);



 VAR_6 = FUNC_5("/", VAR_4|VAR_3);
 FUNC_0(VAR_6 == 0);
 FUNC_8(VAR_6);
 FUNC_1(VAR_6);



 VAR_6 = FUNC_5("/", VAR_4|VAR_3);
 FUNC_0(VAR_6 == 0);

 VAR_7 = 1023;
 while (VAR_7 > 0) {
  if (FUNC_4(VAR_6, VAR_7) == VAR_7)
   break;
  VAR_7 /= 2;
 }
 FUNC_0(VAR_7 > 0);
 FUNC_1(VAR_6);
 FUNC_8(VAR_7);
 FUNC_1(VAR_7);

 return 0;
}
