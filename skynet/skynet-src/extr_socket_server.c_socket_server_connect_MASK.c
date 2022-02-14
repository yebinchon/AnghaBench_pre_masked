
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {int dummy; } ;
struct TYPE_3__ {int id; } ;
struct TYPE_4__ {TYPE_1__ open; } ;
struct request_package {TYPE_2__ u; } ;


 int FUNC_0 (struct socket_server*,struct request_package*,uintptr_t,char const*,int) ;
 int FUNC_1 (struct socket_server*,struct request_package*,char,int) ;

int
FUNC_2(struct socket_server *VAR_0, uintptr_t VAR_1, const char * VAR_2, int VAR_3) {
 struct request_package VAR_4;
 int VAR_5 = FUNC_0(VAR_0, &VAR_4, VAR_1, VAR_2, VAR_3);
 if (VAR_5 < 0)
  return -1;
 FUNC_1(VAR_0, &VAR_4, 'O', sizeof(VAR_4.u.open) + VAR_5);
 return VAR_4.u.open.id;
}
