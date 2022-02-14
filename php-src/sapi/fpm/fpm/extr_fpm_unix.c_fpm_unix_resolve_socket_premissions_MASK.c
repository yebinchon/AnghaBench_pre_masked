
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct passwd {int pw_uid; int pw_gid; } ;
struct group {int gr_gid; } ;
struct fpm_worker_pool_s {int socket_uid; int socket_gid; int socket_mode; struct fpm_worker_pool_config_s* config; int * socket_acl; } ;
struct fpm_worker_pool_config_s {char* listen_acl_users; char* listen_acl_groups; char* listen_owner; char* listen_group; int name; scalar_t__* listen_mode; } ;
typedef int * acl_t ;
typedef int acl_permset_t ;
typedef int acl_entry_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int **,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int * FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 struct group* FUNC_10 (char*) ;
 struct passwd* FUNC_11 (char*) ;
 char* FUNC_12 (char*,char) ;
 int FUNC_13 (scalar_t__*,int ,int) ;
 int FUNC_14 (int ,char*,int ,...) ;

int FUNC_15(struct fpm_worker_pool_s *VAR_7)
{
 struct fpm_worker_pool_config_s *VAR_8 = VAR_7->config;






 VAR_7->socket_uid = -1;
 VAR_7->socket_gid = -1;
 VAR_7->socket_mode = 0660;

 if (!VAR_8) {
  return 0;
 }

 if (VAR_8->listen_mode && *VAR_8->listen_mode) {
  VAR_7->socket_mode = FUNC_13(VAR_8->listen_mode, 0, 8);
 }
 if (VAR_8->listen_owner && *VAR_8->listen_owner) {
  struct passwd *VAR_9;

  VAR_9 = FUNC_11(VAR_8->listen_owner);
  if (!VAR_9) {
   FUNC_14(VAR_5, "[pool %s] cannot get uid for user '%s'", VAR_7->config->name, VAR_8->listen_owner);
   return -1;
  }

  VAR_7->socket_uid = VAR_9->pw_uid;
  VAR_7->socket_gid = VAR_9->pw_gid;
 }

 if (VAR_8->listen_group && *VAR_8->listen_group) {
  struct group *VAR_10;

  VAR_10 = FUNC_10(VAR_8->listen_group);
  if (!VAR_10) {
   FUNC_14(VAR_5, "[pool %s] cannot get gid for group '%s'", VAR_7->config->name, VAR_8->listen_group);
   return -1;
  }
  VAR_7->socket_gid = VAR_10->gr_gid;
 }

 return 0;
}
