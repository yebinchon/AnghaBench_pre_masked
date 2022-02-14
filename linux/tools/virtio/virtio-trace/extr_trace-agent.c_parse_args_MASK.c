
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agent_info {int use_stdout; unsigned long pipe_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct agent_info*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,char**,char*) ;
 int VAR_1 ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void *FUNC_5(int VAR_2, char *VAR_3[], struct agent_info *VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 while ((VAR_5 = FUNC_2(VAR_2, VAR_3, "hos:")) != -1) {
  switch (VAR_5) {

  case 'o':
   VAR_4->use_stdout = 1;
   break;

  case 's':
   VAR_6 = FUNC_3(VAR_1);
   if (VAR_6 == 0)
    goto error;
   VAR_4->pipe_size = VAR_6;
   break;
  case 'h':
  default:
   FUNC_4(VAR_3[0]);
   goto error;
  }
 }

 FUNC_0(VAR_4);

 return ((void*)0);

error:
 FUNC_1(VAR_0);
}
