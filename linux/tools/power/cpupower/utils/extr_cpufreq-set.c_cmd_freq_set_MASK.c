
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpufreq_policy {char* governor; void* max; void* min; } ;
struct cpufreq_affected_cpus {int cpu; struct cpufreq_affected_cpus* next; } ;


 int VAR_0 ;
 char* FUNC_0 (char*) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,unsigned int) ;
 unsigned int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 struct cpufreq_affected_cpus* FUNC_7 (unsigned int) ;
 int FUNC_8 (struct cpufreq_affected_cpus*) ;
 int FUNC_9 (unsigned int) ;
 int VAR_1 ;
 int FUNC_10 (unsigned int,struct cpufreq_policy*,unsigned long,int) ;
 int FUNC_11 (int,char**,char*,int ,int *) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (char*,...) ;
 int VAR_2 ;
 int FUNC_15 (char*,char*,char*) ;
 void* FUNC_16 (char*) ;
 int FUNC_17 (char*) ;

int FUNC_18(int VAR_3, char **VAR_4)
{
 extern char *VAR_5;
 extern int VAR_6, VAR_7, VAR_8;
 int VAR_9 = 0, VAR_10 = 1;
 int VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 unsigned long VAR_14 = 0;
 char VAR_15[20];
 unsigned int VAR_16;

 struct cpufreq_policy VAR_17 = {
  .min = 0,
  .max = 0,
  .governor = ((void*)0),
 };


 do {
  VAR_9 = FUNC_11(VAR_3, VAR_4, "d:u:g:f:r", VAR_2, ((void*)0));
  switch (VAR_9) {
  case '?':
   FUNC_13();
   return -VAR_0;
  case -1:
   VAR_10 = 0;
   break;
  case 'r':
   if (VAR_12)
    VAR_11++;
   VAR_12++;
   break;
  case 'd':
   if (VAR_17.min)
    VAR_11++;
   VAR_13++;
   VAR_17.min = FUNC_16(VAR_5);
   if (VAR_17.min == 0) {
    FUNC_13();
    return -VAR_0;
   }
   break;
  case 'u':
   if (VAR_17.max)
    VAR_11++;
   VAR_13++;
   VAR_17.max = FUNC_16(VAR_5);
   if (VAR_17.max == 0) {
    FUNC_13();
    return -VAR_0;
   }
   break;
  case 'f':
   if (VAR_14)
    VAR_11++;
   VAR_14 = FUNC_16(VAR_5);
   if (VAR_14 == 0) {
    FUNC_13();
    return -VAR_0;
   }
   break;
  case 'g':
   if (VAR_17.governor)
    VAR_11++;
   VAR_13++;
   if ((FUNC_17(VAR_5) < 3) || (FUNC_17(VAR_5) > 18)) {
    FUNC_13();
    return -VAR_0;
   }
   if ((FUNC_15(VAR_5, "%19s", VAR_15)) != 1) {
    FUNC_13();
    return -VAR_0;
   }
   VAR_17.governor = VAR_15;
   break;
  }
 } while (VAR_10);


 if (VAR_11) {
  FUNC_14("the same parameter was passed more than once\n");
  return -VAR_0;
 }

 if (VAR_14 && VAR_13) {
  FUNC_14(FUNC_0("the -f/--freq parameter cannot be combined with -d/--min, -u/--max or\n"
    "-g/--governor parameters\n"));
  return -VAR_0;
 }

 if (!VAR_14 && !VAR_13) {
  FUNC_14(FUNC_0("At least one parameter out of -f/--freq, -d/--min, -u/--max, and\n"
    "-g/--governor must be passed\n"));
  return -VAR_0;
 }


 if (FUNC_2(VAR_1))
  FUNC_5(VAR_1);


 if (VAR_12) {
  for (VAR_16 = FUNC_1(VAR_1);
       VAR_16 <= FUNC_4(VAR_1); VAR_16++) {
   struct cpufreq_affected_cpus *VAR_18;

   if (!FUNC_3(VAR_1, VAR_16) ||
       FUNC_9(VAR_16) != 1)
    continue;

   VAR_18 = FUNC_7(VAR_16);
   if (!VAR_18)
    break;
   while (VAR_18->next) {
    FUNC_6(VAR_1, VAR_18->cpu);
    VAR_18 = VAR_18->next;
   }

   FUNC_6(VAR_1, VAR_18->cpu);
   FUNC_8(VAR_18);
  }
 }



 for (VAR_16 = FUNC_1(VAR_1);
      VAR_16 <= FUNC_4(VAR_1); VAR_16++) {

  if (!FUNC_3(VAR_1, VAR_16) ||
      FUNC_9(VAR_16) != 1)
   continue;

  FUNC_14(FUNC_0("Setting cpu: %d\n"), VAR_16);
  VAR_9 = FUNC_10(VAR_16, &VAR_17, VAR_14, VAR_13);
  if (VAR_9) {
   FUNC_12();
   return VAR_9;
  }
 }

 return 0;
}
