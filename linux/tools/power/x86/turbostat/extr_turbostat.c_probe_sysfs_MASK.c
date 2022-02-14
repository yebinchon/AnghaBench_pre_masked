
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name_buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,char*,int,int ,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int *) ;
 int * FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,int,...) ;
 char* FUNC_8 (char*,char) ;
 char* FUNC_9 (char*,char) ;

void FUNC_10(void)
{
 char VAR_8[64];
 char VAR_9[16];
 FILE *VAR_10;
 int VAR_11;
 char *VAR_12;

 if (!FUNC_0(VAR_0))
  return;

 for (VAR_11 = 10; VAR_11 >= 0; --VAR_11) {

  FUNC_7(VAR_8, "/sys/devices/system/cpu/cpu%d/cpuidle/state%d/name",
   VAR_7, VAR_11);
  VAR_10 = FUNC_5(VAR_8, "r");
  if (VAR_10 == ((void*)0))
   continue;
  if (!FUNC_4(VAR_9, sizeof(VAR_9), VAR_10))
   FUNC_2(1, "%s: failed to read file", VAR_8);


  VAR_12 = FUNC_8(VAR_9, '-');
  if (!VAR_12)
   VAR_12 = FUNC_9(VAR_9, '\n');
  *VAR_12 = '%';
  *(VAR_12 + 1) = '\0';

  FUNC_3(VAR_10);

  FUNC_7(VAR_8, "cpuidle/state%d/time", VAR_11);

  if (FUNC_6(VAR_9))
   continue;

  FUNC_1(0, VAR_8, VAR_9, 64, VAR_5, VAR_2,
    VAR_4, VAR_6);
 }

 for (VAR_11 = 10; VAR_11 >= 0; --VAR_11) {

  FUNC_7(VAR_8, "/sys/devices/system/cpu/cpu%d/cpuidle/state%d/name",
   VAR_7, VAR_11);
  VAR_10 = FUNC_5(VAR_8, "r");
  if (VAR_10 == ((void*)0))
   continue;
  if (!FUNC_4(VAR_9, sizeof(VAR_9), VAR_10))
   FUNC_2(1, "%s: failed to read file", VAR_8);

  VAR_12 = FUNC_8(VAR_9, '-');
  if (!VAR_12)
   VAR_12 = FUNC_9(VAR_9, '\n');
  *VAR_12 = '\0';
  FUNC_3(VAR_10);

  FUNC_7(VAR_8, "cpuidle/state%d/usage", VAR_11);

  if (FUNC_6(VAR_9))
   continue;

  FUNC_1(0, VAR_8, VAR_9, 64, VAR_5, VAR_1,
    VAR_3, VAR_6);
 }

}
