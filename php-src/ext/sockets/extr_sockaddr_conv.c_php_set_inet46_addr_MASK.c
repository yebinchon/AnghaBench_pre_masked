
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int t ;
struct sockaddr_in6 {int member_0; } ;
struct sockaddr_in {int member_0; } ;
typedef int socklen_t ;
struct TYPE_8__ {scalar_t__ type; } ;
typedef TYPE_1__ php_socket ;
struct TYPE_9__ {scalar_t__ ss_family; } ;
typedef TYPE_2__ php_sockaddr_storage ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,struct sockaddr_in6*,int) ;
 int FUNC_1 (int *,int ,char*) ;
 scalar_t__ FUNC_2 (struct sockaddr_in6*,char*,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct sockaddr_in6*,char*,TYPE_1__*) ;

int FUNC_4(php_sockaddr_storage *VAR_3, socklen_t *VAR_4, char *VAR_5, php_socket *VAR_6)
{
 if (VAR_6->type == VAR_0) {
  struct sockaddr_in VAR_7 = {0};
  if (FUNC_3(&VAR_7, VAR_5, VAR_6)) {
   FUNC_0(VAR_3, &VAR_7, sizeof VAR_7);
   VAR_3->ss_family = VAR_0;
   *VAR_4 = sizeof(VAR_7);
   return 1;
  }
 }
 else {
  FUNC_1(((void*)0), VAR_2,
   "IP address used in the context of an unexpected type of socket");
 }
 return 0;
}
