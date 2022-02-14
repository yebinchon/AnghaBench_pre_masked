
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * pdh_dentry; } ;
struct rpc_clnt {TYPE_2__ cl_pipedir_objects; int cl_count; TYPE_1__* cl_program; } ;
struct TYPE_3__ {int * pipe_dir_name; } ;




 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct rpc_clnt *VAR_0, unsigned long VAR_1)
{
 if (VAR_0->cl_program->pipe_dir_name == ((void*)0))
  return 1;

 switch (VAR_1) {
 case 129:
  if (VAR_0->cl_pipedir_objects.pdh_dentry != ((void*)0))
   return 1;
  if (FUNC_0(&VAR_0->cl_count) == 0)
   return 1;
  break;
 case 128:
  if (VAR_0->cl_pipedir_objects.pdh_dentry == ((void*)0))
   return 1;
  break;
 }
 return 0;
}
