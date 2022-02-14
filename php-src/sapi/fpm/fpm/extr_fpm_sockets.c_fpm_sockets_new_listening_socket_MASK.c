
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_un {char* sun_path; } ;
struct sockaddr {int sa_family; } ;
struct fpm_worker_pool_s {scalar_t__ listen_address_domain; int socket_mode; TYPE_1__* config; } ;
typedef int mode_t ;
typedef int flags ;
struct TYPE_2__ {char* listen_address; int listen_backlog; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int,struct sockaddr*,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct sockaddr_un*,int) ;
 scalar_t__ FUNC_3 (struct fpm_worker_pool_s*,char*) ;
 scalar_t__ FUNC_4 (int,int ) ;
 scalar_t__ FUNC_5 (int,int ,int ,int*,int) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,...) ;

__attribute__((used)) static int FUNC_10(struct fpm_worker_pool_s *VAR_7, struct sockaddr *VAR_8, int VAR_9)
{
 int VAR_10 = 1;
 int VAR_11;
 mode_t VAR_12 = 0;

 VAR_11 = FUNC_6(VAR_8->sa_family, VAR_1, 0);

 if (0 > VAR_11) {
  FUNC_9(VAR_5, "failed to create new listening socket: socket()");
  return -1;
 }

 if (0 > FUNC_5(VAR_11, VAR_2, VAR_3, &VAR_10, sizeof(VAR_10))) {
  FUNC_9(VAR_6, "failed to change socket attribute");
 }

 if (VAR_7->listen_address_domain == VAR_0) {
  if (FUNC_2((struct sockaddr_un *)VAR_8, VAR_9) == 0) {
   FUNC_9(VAR_4, "Another FPM instance seems to already listen on %s", ((struct sockaddr_un *) VAR_8)->sun_path);
   FUNC_1(VAR_11);
   return -1;
  }
  FUNC_8( ((struct sockaddr_un *) VAR_8)->sun_path);
  VAR_12 = FUNC_7(0777 ^ VAR_7->socket_mode);
 }

 if (0 > FUNC_0(VAR_11, VAR_8, VAR_9)) {
  FUNC_9(VAR_5, "unable to bind listening socket for address '%s'", VAR_7->config->listen_address);
  if (VAR_7->listen_address_domain == VAR_0) {
   FUNC_7(VAR_12);
  }
  FUNC_1(VAR_11);
  return -1;
 }

 if (VAR_7->listen_address_domain == VAR_0) {
  char *VAR_13 = ((struct sockaddr_un *) VAR_8)->sun_path;

  FUNC_7(VAR_12);

  if (0 > FUNC_3(VAR_7, VAR_13)) {
   FUNC_1(VAR_11);
   return -1;
  }
 }

 if (0 > FUNC_4(VAR_11, VAR_7->config->listen_backlog)) {
  FUNC_9(VAR_5, "failed to listen to address '%s'", VAR_7->config->listen_address);
  FUNC_1(VAR_11);
  return -1;
 }

 return VAR_11;
}
