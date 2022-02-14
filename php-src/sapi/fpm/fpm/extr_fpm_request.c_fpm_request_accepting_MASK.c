
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct fpm_scoreboard_proc_s {struct timeval tv; int request_stage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct timeval*) ;
 struct fpm_scoreboard_proc_s* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct fpm_scoreboard_proc_s*) ;
 int FUNC_3 (int,int,int ,int ,int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5()
{
 struct fpm_scoreboard_proc_s *VAR_3;
 struct timeval VAR_4;

 FUNC_0(&VAR_4);

 VAR_3 = FUNC_1(((void*)0), -1, 0);
 if (VAR_3 == ((void*)0)) {
  FUNC_4(VAR_2, "failed to acquire proc scoreboard");
  return;
 }

 VAR_3->request_stage = VAR_0;
 VAR_3->tv = VAR_4;
 FUNC_2(VAR_3);


 FUNC_3(1, -1, 0, 0, 0, 0, 0, VAR_1, ((void*)0));
}
