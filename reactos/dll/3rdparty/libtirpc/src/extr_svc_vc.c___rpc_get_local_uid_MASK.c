
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uid_t ;
struct sockaddr {scalar_t__ sa_family; } ;
typedef int gid_t ;
struct TYPE_4__ {scalar_t__ buf; } ;
struct TYPE_5__ {TYPE_1__ xp_rtaddr; int xp_fd; } ;
typedef TYPE_2__ SVCXPRT ;
typedef int SOCKET ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int *,int *) ;

int
FUNC_1(SVCXPRT *VAR_1, uid_t *VAR_2) {
 SOCKET VAR_3;
 int VAR_4;
 gid_t VAR_5;
 uid_t VAR_6;
 struct sockaddr *VAR_7;

 VAR_3 = VAR_1->xp_fd;
 VAR_7 = (struct sockaddr *)VAR_1->xp_rtaddr.buf;
 if (VAR_7->sa_family == VAR_0) {
  VAR_4 = FUNC_0(VAR_3, &VAR_6, &VAR_5);
  if (VAR_4 == 0)
   *VAR_2 = VAR_6;
  return (VAR_4);
 } else
  return (-1);
}
