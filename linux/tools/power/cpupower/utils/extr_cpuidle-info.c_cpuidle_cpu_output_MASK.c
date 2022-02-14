
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 char* FUNC_3 (unsigned int,unsigned int) ;
 char* FUNC_4 (unsigned int,unsigned int) ;
 char* FUNC_5 (unsigned int,unsigned int) ;
 char* FUNC_6 (unsigned int,unsigned int) ;
 char* FUNC_7 (unsigned int,unsigned int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;

__attribute__((used)) static void FUNC_10(unsigned int VAR_0, int VAR_1)
{
 unsigned int VAR_2, VAR_3;
 char *VAR_4;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == 0) {
  FUNC_9(FUNC_0("CPU %u: No idle states\n"), VAR_0);
  return;
 }

 FUNC_9(FUNC_0("Number of idle states: %d\n"), VAR_2);
 FUNC_9(FUNC_0("Available idle states:"));
 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_4 = FUNC_5(VAR_0, VAR_3);
  if (!VAR_4)
   continue;
  FUNC_9(" %s", VAR_4);
  FUNC_8(VAR_4);
 }
 FUNC_9("\n");

 if (!VAR_1)
  return;

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  int VAR_5 = FUNC_1(VAR_0, VAR_3);

  if (VAR_5 < 0)
   VAR_5 = 0;
  VAR_4 = FUNC_5(VAR_0, VAR_3);
  if (!VAR_4)
   continue;
  FUNC_9("%s%s:\n", VAR_4, (VAR_5) ? " (DISABLED) " : "");
  FUNC_8(VAR_4);

  VAR_4 = FUNC_3(VAR_0, VAR_3);
  if (!VAR_4)
   continue;
  FUNC_9(FUNC_0("Flags/Description: %s\n"), VAR_4);
  FUNC_8(VAR_4);

  FUNC_9(FUNC_0("Latency: %lu\n"),
         FUNC_4(VAR_0, VAR_3));
  FUNC_9(FUNC_0("Usage: %lu\n"),
         FUNC_7(VAR_0, VAR_3));
  FUNC_9(FUNC_0("Duration: %llu\n"),
         FUNC_6(VAR_0, VAR_3));
 }
}
