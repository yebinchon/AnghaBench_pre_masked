
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int read_pipe; int * handle_err; int * process; int * handle; } ;
typedef TYPE_1__ os_process_pipe_t ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int **,int **) ;
 int FUNC_4 (char const*,int *,int *,int *,int **) ;

os_process_pipe_t *FUNC_5(const char *VAR_1,
       const char *VAR_2)
{
 os_process_pipe_t *VAR_3 = ((void*)0);
 bool VAR_4;
 HANDLE VAR_5;
 HANDLE VAR_6;
 HANDLE VAR_7, VAR_8;
 HANDLE VAR_9;
 bool VAR_10;

 if (!VAR_1 || !VAR_2) {
  return ((void*)0);
 }
 if (*VAR_2 != 'r' && *VAR_2 != 'w') {
  return ((void*)0);
 }
 if (!FUNC_3(&VAR_9, &VAR_6)) {
  return ((void*)0);
 }

 if (!FUNC_3(&VAR_7, &VAR_8)) {
  return ((void*)0);
 }

 VAR_4 = *VAR_2 == 'r';

 VAR_10 = !!FUNC_1(VAR_4 ? VAR_9 : VAR_6,
      VAR_0, 0);
 if (!VAR_10) {
  goto error;
 }

 VAR_10 = !!FUNC_1(VAR_7, VAR_0, 0);
 if (!VAR_10) {
  goto error;
 }

 VAR_10 = FUNC_4(VAR_1, VAR_4 ? ((void*)0) : VAR_9,
     VAR_4 ? VAR_6 : ((void*)0), VAR_8,
     &VAR_5);
 if (!VAR_10) {
  goto error;
 }

 VAR_3 = FUNC_2(sizeof(*VAR_3));

 VAR_3->handle = VAR_4 ? VAR_9 : VAR_6;
 VAR_3->read_pipe = VAR_4;
 VAR_3->process = VAR_5;
 VAR_3->handle_err = VAR_7;

 FUNC_0(VAR_4 ? VAR_6 : VAR_9);
 FUNC_0(VAR_8);
 return VAR_3;

error:
 FUNC_0(VAR_6);
 FUNC_0(VAR_9);
 return ((void*)0);
}
