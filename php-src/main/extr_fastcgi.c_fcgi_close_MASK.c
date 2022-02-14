
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* on_close ) () ;} ;
struct TYPE_5__ {int fd; TYPE_1__ hook; scalar_t__ nodelay; int tcp; int keep; scalar_t__ has_env; int env; } ;
typedef TYPE_2__ fcgi_request ;
typedef int buf ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_7 (int,char*,int,int ) ;
 int FUNC_8 (int,int) ;
 int FUNC_9 () ;

void FUNC_10(fcgi_request *VAR_1, int VAR_2, int VAR_3)
{
 if (VAR_3 && VAR_1->has_env) {
  FUNC_6(&VAR_1->env);
  VAR_1->has_env = 0;
 }







 if ((VAR_2 || !VAR_1->keep) && VAR_1->fd >= 0) {
  if (!VAR_2) {
   char VAR_4[8];

   FUNC_8(VAR_1->fd, 1);

   while (FUNC_7(VAR_1->fd, VAR_4, sizeof(VAR_4), 0) > 0) {}
  }
  FUNC_4(VAR_1->fd);




  VAR_1->fd = -1;

  VAR_1->hook.on_close();
 }
}
