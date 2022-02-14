
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {int dummy; } ;
struct TYPE_3__ {uintptr_t opaque; int id; int fd; } ;
struct TYPE_4__ {TYPE_1__ bind; } ;
struct request_package {TYPE_2__ u; } ;


 int FUNC_0 (struct socket_server*) ;
 int FUNC_1 (struct socket_server*,struct request_package*,char,int) ;

int
FUNC_2(struct socket_server *VAR_0, uintptr_t VAR_1, int VAR_2) {
 struct request_package VAR_3;
 int VAR_4 = FUNC_0(VAR_0);
 if (VAR_4 < 0)
  return -1;
 VAR_3.u.bind.opaque = VAR_1;
 VAR_3.u.bind.id = VAR_4;
 VAR_3.u.bind.fd = VAR_2;
 FUNC_1(VAR_0, &VAR_3, 'B', sizeof(VAR_3.u.bind));
 return VAR_4;
}
