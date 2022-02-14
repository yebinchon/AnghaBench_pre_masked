
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
struct perf_tool {int dummy; } ;
struct machine {char* root_dir; } ;
struct dirent {int d_name; } ;
typedef int pid_t ;
typedef int perf_event__handler_t ;
typedef int filename ;
typedef int DIR ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct machine*) ;
 int * FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (union perf_event*,int,struct machine*,int*,int*) ;
 int FUNC_4 (struct perf_tool*,union perf_event*,int,int ,struct machine*) ;
 scalar_t__ FUNC_5 (struct perf_tool*,union perf_event*,int,int,int,int ,struct machine*) ;
 int FUNC_6 (struct perf_tool*,union perf_event*,int,int,int ,struct machine*,int) ;
 scalar_t__ FUNC_7 (struct perf_tool*,union perf_event*,int,int,int ,struct machine*) ;
 scalar_t__ FUNC_8 (struct perf_tool*,union perf_event*,struct machine*,int ) ;
 int FUNC_9 (char*,char*) ;
 struct dirent* FUNC_10 (int *) ;
 int FUNC_11 (char*,int,char*,char*,int) ;
 int FUNC_12 (int ,char**,int) ;

__attribute__((used)) static int FUNC_13(union perf_event *VAR_1,
          union perf_event *VAR_2,
          union perf_event *VAR_3,
          union perf_event *VAR_4,
          pid_t VAR_5, int VAR_6, perf_event__handler_t VAR_7,
          struct perf_tool *VAR_8, struct machine *VAR_9, bool VAR_10)
{
 char VAR_11[VAR_0];
 DIR *VAR_12;
 struct dirent *VAR_13;
 pid_t VAR_14, VAR_15;
 int VAR_16 = 0;


 if (!VAR_6) {
  VAR_14 = FUNC_4(VAR_8, VAR_1, VAR_5,
         VAR_7, VAR_9);

  if (VAR_14 == -1)
   return -1;

  if (FUNC_7(VAR_8, VAR_4, VAR_5,
            VAR_14, VAR_7, VAR_9) < 0)
   return -1;





  if (VAR_5 == VAR_14 &&
      FUNC_6(VAR_8, VAR_2, VAR_5, VAR_14,
             VAR_7, VAR_9, VAR_10))
   return -1;

  return 0;
 }

 if (FUNC_1(VAR_9))
  return 0;

 FUNC_11(VAR_11, sizeof(VAR_11), "%s/proc/%d/task",
   VAR_9->root_dir, VAR_5);

 VAR_12 = FUNC_2(VAR_11);
 if (VAR_12 == ((void*)0)) {
  FUNC_9("couldn't open %s\n", VAR_11);
  return 0;
 }

 while ((VAR_13 = FUNC_10(VAR_12)) != ((void*)0)) {
  char *VAR_17;
  pid_t VAR_18;

  VAR_18 = FUNC_12(VAR_13->d_name, &VAR_17, 10);
  if (*VAR_17)
   continue;

  VAR_16 = -1;
  if (FUNC_3(VAR_1, VAR_18, VAR_9,
          &VAR_14, &VAR_15) != 0)
   break;

  if (FUNC_5(VAR_8, VAR_3, VAR_18, VAR_14,
      VAR_15, VAR_7, VAR_9) < 0)
   break;

  if (FUNC_7(VAR_8, VAR_4, VAR_18,
            VAR_14, VAR_7, VAR_9) < 0)
   break;




  if (FUNC_8(VAR_8, VAR_1, VAR_9, VAR_7) != 0)
   break;

  VAR_16 = 0;
  if (VAR_18 == VAR_5) {

   VAR_16 = FUNC_6(VAR_8, VAR_2, VAR_5, VAR_14,
      VAR_7, VAR_9, VAR_10);
   if (VAR_16)
    break;
  }
 }

 FUNC_0(VAR_12);
 return VAR_16;
}
