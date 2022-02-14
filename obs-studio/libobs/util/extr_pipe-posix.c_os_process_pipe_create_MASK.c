
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct os_process_pipe {int read_pipe; int * file; int member_0; } ;
typedef int pipe ;
typedef struct os_process_pipe os_process_pipe_t ;
typedef int FILE ;


 struct os_process_pipe* FUNC_0 (int) ;
 int * FUNC_1 (char const*,char const*) ;

os_process_pipe_t *FUNC_2(const char *VAR_0,
       const char *VAR_1)
{
 struct os_process_pipe VAR_2 = {0};
 struct os_process_pipe *VAR_3;

 if (!VAR_0 || !VAR_1) {
  return ((void*)0);
 }

 VAR_2.file = FUNC_1(VAR_0, VAR_1);
 VAR_2.read_pipe = *VAR_1 == 'r';

 if (VAR_2.file == (FILE *)-1 || VAR_2.file == ((void*)0)) {
  return ((void*)0);
 }

 VAR_3 = FUNC_0(sizeof(VAR_2));
 *VAR_3 = VAR_2;
 return VAR_3;
}
