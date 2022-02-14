
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char**,int*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char*,char const*,int) ;

int FUNC_6(char *VAR_6)
{
 static const char VAR_7[] = "schedule";
 static const char VAR_8[] = "sleep";
 static const char VAR_9[] = "kvm";
 int VAR_10;

 if (!FUNC_5(VAR_6, VAR_8, FUNC_4(VAR_8))) {
  FUNC_3("kernel sleep profiling requires CONFIG_SCHEDSTATS\n");

 } else if (!FUNC_5(VAR_6, VAR_7, FUNC_4(VAR_7))) {
  VAR_4 = VAR_2;
  if (VAR_6[FUNC_4(VAR_7)] == ',')
   VAR_6 += FUNC_4(VAR_7) + 1;
  if (FUNC_1(&VAR_6, &VAR_10))
   VAR_5 = VAR_10;
  FUNC_2("kernel schedule profiling enabled (shift: %ld)\n",
   VAR_5);
 } else if (!FUNC_5(VAR_6, VAR_9, FUNC_4(VAR_9))) {
  VAR_4 = VAR_1;
  if (VAR_6[FUNC_4(VAR_9)] == ',')
   VAR_6 += FUNC_4(VAR_9) + 1;
  if (FUNC_1(&VAR_6, &VAR_10))
   VAR_5 = VAR_10;
  FUNC_2("kernel KVM profiling enabled (shift: %ld)\n",
   VAR_5);
 } else if (FUNC_1(&VAR_6, &VAR_10)) {
  VAR_5 = VAR_10;
  VAR_4 = VAR_0;
  FUNC_2("kernel profiling enabled (shift: %ld)\n",
   VAR_5);
 }
 return 1;
}
