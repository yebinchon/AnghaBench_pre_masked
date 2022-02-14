
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name_buf ;
typedef int desc ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,int *) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,int,char*,char*) ;
 int VAR_2 ;
 int FUNC_6 (char*,char*,int,int) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*,char) ;

__attribute__((used)) static void
FUNC_9(void)
{
 char VAR_3[64];
 char VAR_4[16];
 char VAR_5[64];
 FILE *VAR_6;
 int VAR_7;
 char *VAR_8;

 if (!FUNC_0(VAR_0))
  return;

 for (VAR_7 = 0; VAR_7 < 10; ++VAR_7) {

  FUNC_6(VAR_3, "/sys/devices/system/cpu/cpu%d/cpuidle/state%d/name",
   VAR_1, VAR_7);
  VAR_6 = FUNC_4(VAR_3, "r");
  if (VAR_6 == ((void*)0))
   continue;
  if (!FUNC_3(VAR_4, sizeof(VAR_4), VAR_6))
   FUNC_1(1, "%s: failed to read file", VAR_3);


  VAR_8 = FUNC_7(VAR_4, '-');
  if (!VAR_8)
   VAR_8 = FUNC_8(VAR_4, '\n');
  *VAR_8 = '\0';
  FUNC_2(VAR_6);

  FUNC_6(VAR_3, "/sys/devices/system/cpu/cpu%d/cpuidle/state%d/desc",
   VAR_1, VAR_7);
  VAR_6 = FUNC_4(VAR_3, "r");
  if (VAR_6 == ((void*)0))
   continue;
  if (!FUNC_3(VAR_5, sizeof(VAR_5), VAR_6))
   FUNC_1(1, "%s: failed to read file", VAR_3);

  FUNC_5(VAR_2, "cpu%d: %s: %s", VAR_1, VAR_4, VAR_5);
  FUNC_2(VAR_6);
 }
}
