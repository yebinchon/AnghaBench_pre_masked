
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {int trace_pgfaults; scalar_t__ trace_syscalls; } ;


 unsigned int FUNC_0 (char const* const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char** FUNC_1 (unsigned int,int) ;
 int FUNC_2 (unsigned int,char const**) ;
 int FUNC_3 (char const**) ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct trace *VAR_3, int VAR_4, const char **VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8;
 const char **VAR_9;
 const char * const VAR_10[] = {
  "record",
  "-R",
  "-m", "1024",
  "-c", "1",
 };

 const char * const VAR_11[] = { "-e", };
 unsigned int VAR_12 = FUNC_0(VAR_11);
 const char * const VAR_13[] = { "-e", "major-faults" };
 unsigned int VAR_14 = FUNC_0(VAR_13);
 const char * const VAR_15[] = { "-e", "minor-faults" };
 unsigned int VAR_16 = FUNC_0(VAR_15);


 VAR_6 = FUNC_0(VAR_10) + VAR_12 + 1 +
  VAR_14 + VAR_16 + VAR_4;
 VAR_9 = FUNC_1(VAR_6 + 1, sizeof(char *));

 if (VAR_9 == ((void*)0))
  return -VAR_0;

 VAR_8 = 0;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_10); VAR_7++)
  VAR_9[VAR_8++] = VAR_10[VAR_7];

 if (VAR_3->trace_syscalls) {
  for (VAR_7 = 0; VAR_7 < VAR_12; VAR_7++)
   VAR_9[VAR_8++] = VAR_11[VAR_7];


  if (FUNC_4("raw_syscalls:sys_enter"))
   VAR_9[VAR_8++] = "raw_syscalls:sys_enter,raw_syscalls:sys_exit";
  else if (FUNC_4("syscalls:sys_enter"))
   VAR_9[VAR_8++] = "syscalls:sys_enter,syscalls:sys_exit";
  else {
   FUNC_5("Neither raw_syscalls nor syscalls events exist.\n");
   FUNC_3(VAR_9);
   return -1;
  }
 }

 if (VAR_3->trace_pgfaults & VAR_1)
  for (VAR_7 = 0; VAR_7 < VAR_14; VAR_7++)
   VAR_9[VAR_8++] = VAR_13[VAR_7];

 if (VAR_3->trace_pgfaults & VAR_2)
  for (VAR_7 = 0; VAR_7 < VAR_16; VAR_7++)
   VAR_9[VAR_8++] = VAR_15[VAR_7];

 for (VAR_7 = 0; VAR_7 < (unsigned int)VAR_4; VAR_7++)
  VAR_9[VAR_8++] = VAR_5[VAR_7];

 return FUNC_2(VAR_8, VAR_9);
}
