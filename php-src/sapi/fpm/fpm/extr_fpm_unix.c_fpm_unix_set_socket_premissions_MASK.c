
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fpm_worker_pool_s {int socket_uid; int socket_gid; TYPE_1__* config; scalar_t__ socket_acl; } ;
typedef scalar_t__ acl_t ;
typedef int acl_entry_t ;
struct TYPE_2__ {char const* listen_address; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__*,int *) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__,int,int *) ;
 scalar_t__ FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (char const*,int ,scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (char const*,int,int) ;
 int FUNC_9 (int ,char*,int ,char const*) ;

int FUNC_10(struct fpm_worker_pool_s *VAR_5, const char *VAR_6)
{
 if (VAR_5->socket_uid != -1 || VAR_5->socket_gid != -1) {
  if (0 > FUNC_8(VAR_6, VAR_5->socket_uid, VAR_5->socket_gid)) {
   FUNC_9(VAR_4, "[pool %s] failed to chown() the socket '%s'", VAR_5->config->name, VAR_5->config->listen_address);
   return -1;
  }
 }
 return 0;
}
