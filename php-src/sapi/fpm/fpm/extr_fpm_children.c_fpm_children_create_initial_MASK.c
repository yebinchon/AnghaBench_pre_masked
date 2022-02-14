
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {int socket_event_set; struct fpm_event_s* ondemand_event; int listening_socket; TYPE_1__* config; } ;
struct fpm_event_s {int dummy; } ;
struct TYPE_2__ {scalar_t__ pm; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct fpm_worker_pool_s*,int ,int ,int) ;
 int FUNC_1 (struct fpm_event_s*,int ) ;
 int FUNC_2 (struct fpm_event_s*,int ,int,int ,struct fpm_worker_pool_s*) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct fpm_event_s*,int ,int) ;
 int FUNC_5 (int ,char*,int ) ;

int FUNC_6(struct fpm_worker_pool_s *VAR_5)
{
 if (VAR_5->config->pm == VAR_2) {
  VAR_5->ondemand_event = (struct fpm_event_s *)FUNC_3(sizeof(struct fpm_event_s));

  if (!VAR_5->ondemand_event) {
   FUNC_5(VAR_3, "[pool %s] unable to malloc the ondemand socket event", VAR_5->config->name);

   return 1;
  }

  FUNC_4(VAR_5->ondemand_event, 0, sizeof(struct fpm_event_s));
  FUNC_2(VAR_5->ondemand_event, VAR_5->listening_socket, VAR_1 | VAR_0, VAR_4, VAR_5);
  VAR_5->socket_event_set = 1;
  FUNC_1(VAR_5->ondemand_event, 0);

  return 1;
 }
 return FUNC_0(VAR_5, 0 , 0, 1);
}
