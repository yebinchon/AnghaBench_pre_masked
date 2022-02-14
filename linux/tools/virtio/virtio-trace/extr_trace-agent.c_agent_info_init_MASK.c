
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_info {int cpus; int ctl_fd; int * rw_ti; int pipe_size; int use_stdout; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (int,char const*,char const*,int ,int ,int ) ;

__attribute__((used)) static void *FUNC_6(struct agent_info *VAR_2)
{
 int VAR_3;
 const char *VAR_4 = ((void*)0);
 const char *VAR_5 = ((void*)0);


 for (VAR_3 = 0; VAR_3 < VAR_2->cpus; VAR_3++) {

  VAR_4 = FUNC_1(VAR_3);
  if (VAR_4 == ((void*)0))
   goto error;


  if (!VAR_2->use_stdout) {
   VAR_5 = FUNC_2(VAR_3);
   if (VAR_5 == ((void*)0))
    goto error;
  } else

   FUNC_3("stdout mode\n");

  FUNC_5(VAR_3, VAR_4, VAR_5, VAR_2->use_stdout,
      VAR_2->pipe_size, VAR_2->rw_ti[VAR_3]);
 }


 VAR_2->ctl_fd = FUNC_4((const char *)VAR_0);

 return ((void*)0);

error:
 FUNC_0(VAR_1);
}
