
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timechart {int with_backtrace; scalar_t__ tasks_only; scalar_t__ power_only; } ;


 unsigned int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 char** FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,char const**) ;
 scalar_t__ FUNC_3 (char*) ;
 void* FUNC_4 (char const* const) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_5(struct timechart *VAR_2, int VAR_3, const char **VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 const char **VAR_8;
 const char **VAR_9;
 unsigned int VAR_10;

 const char * const VAR_11[] = {
  "record", "-a", "-R", "-c", "1",
 };
 unsigned int VAR_12 = FUNC_0(VAR_11);

 const char * const VAR_13[] = {
  "-g",
 };
 unsigned int VAR_14 = FUNC_0(VAR_13);

 const char * const VAR_15[] = {
  "-e", "power:cpu_frequency",
  "-e", "power:cpu_idle",
 };
 unsigned int VAR_16 = FUNC_0(VAR_15);

 const char * const VAR_17[] = {





 };
 unsigned int VAR_18 = FUNC_0(VAR_17);

 const char * const VAR_19[] = {
  "-e", "sched:sched_wakeup",
  "-e", "sched:sched_switch",
 };
 unsigned int VAR_20 = FUNC_0(VAR_19);
 if (VAR_2->power_only)
  VAR_20 = 0;

 if (VAR_2->tasks_only) {
  VAR_16 = 0;
  VAR_18 = 0;
 }

 if (!VAR_2->with_backtrace)
  VAR_14 = 0;

 VAR_10 = VAR_12 + VAR_20 +
  VAR_16 + VAR_18 + VAR_14;

 VAR_5 = VAR_10 + VAR_3;
 VAR_8 = FUNC_1(VAR_5 + 1, sizeof(char *));

 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_9 = VAR_8;
 for (VAR_6 = 0; VAR_6 < VAR_12; VAR_6++)
  *VAR_9++ = FUNC_4(VAR_11[VAR_6]);

 for (VAR_6 = 0; VAR_6 < VAR_14; VAR_6++)
  *VAR_9++ = FUNC_4(VAR_13[VAR_6]);

 for (VAR_6 = 0; VAR_6 < VAR_20; VAR_6++)
  *VAR_9++ = FUNC_4(VAR_19[VAR_6]);

 for (VAR_6 = 0; VAR_6 < VAR_16; VAR_6++)
  *VAR_9++ = FUNC_4(VAR_15[VAR_6]);

 for (VAR_6 = 0; VAR_6 < VAR_18; VAR_6++)
  *VAR_9++ = FUNC_4(VAR_17[VAR_6]);

 for (VAR_7 = 0; VAR_7 < (unsigned int)VAR_3; VAR_7++)
  *VAR_9++ = VAR_4[VAR_7];

 return FUNC_2(VAR_5, VAR_8);
}
