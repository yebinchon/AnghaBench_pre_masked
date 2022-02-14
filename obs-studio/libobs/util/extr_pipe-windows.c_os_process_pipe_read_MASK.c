
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int handle; int read_pipe; } ;
typedef TYPE_1__ os_process_pipe_t ;
typedef size_t DWORD ;


 int FUNC_0 (int ,int *,size_t,size_t*,int *) ;

size_t FUNC_1(os_process_pipe_t *VAR_0, uint8_t *VAR_1, size_t VAR_2)
{
 DWORD VAR_3;
 bool VAR_4;

 if (!VAR_0) {
  return 0;
 }
 if (!VAR_0->read_pipe) {
  return 0;
 }

 VAR_4 = !!FUNC_0(VAR_0->handle, VAR_1, (DWORD)VAR_2, &VAR_3, ((void*)0));
 if (VAR_4 && VAR_3) {
  return VAR_3;
 }

 return 0;
}
