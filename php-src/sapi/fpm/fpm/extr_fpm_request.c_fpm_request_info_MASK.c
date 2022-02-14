
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeval {int dummy; } ;
struct fpm_scoreboard_proc_s {size_t content_length; int script_filename; int auth_user; int query_string; int request_method; int request_uri; struct timeval tv; int request_stage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*) ;
 char* FUNC_1 () ;
 size_t FUNC_2 () ;
 char* FUNC_3 () ;
 char* FUNC_4 () ;
 char* FUNC_5 () ;
 char* FUNC_6 () ;
 struct fpm_scoreboard_proc_s* FUNC_7 (int *,int,int ) ;
 int FUNC_8 (struct fpm_scoreboard_proc_s*) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int ,char*) ;

void FUNC_11()
{
 struct fpm_scoreboard_proc_s *VAR_2;
 char *VAR_3 = FUNC_5();
 char *VAR_4 = FUNC_4();
 char *VAR_5 = FUNC_6();
 char *VAR_6 = FUNC_3();
 char *VAR_7 = FUNC_1();
 size_t VAR_8 = FUNC_2();
 struct timeval VAR_9;

 FUNC_0(&VAR_9);

 VAR_2 = FUNC_7(((void*)0), -1, 0);
 if (VAR_2 == ((void*)0)) {
  FUNC_10(VAR_1, "failed to acquire proc scoreboard");
  return;
 }

 VAR_2->request_stage = VAR_0;
 VAR_2->tv = VAR_9;

 if (VAR_3) {
  FUNC_9(VAR_2->request_uri, VAR_3, sizeof(VAR_2->request_uri));
 }

 if (VAR_4) {
  FUNC_9(VAR_2->request_method, VAR_4, sizeof(VAR_2->request_method));
 }

 if (VAR_6) {
  FUNC_9(VAR_2->query_string, VAR_6, sizeof(VAR_2->query_string));
 }

 if (VAR_7) {
  FUNC_9(VAR_2->auth_user, VAR_7, sizeof(VAR_2->auth_user));
 }

 VAR_2->content_length = VAR_8;



 if (VAR_5) {
  FUNC_9(VAR_2->script_filename, VAR_5, sizeof(VAR_2->script_filename));
 }

 FUNC_8(VAR_2);
}
