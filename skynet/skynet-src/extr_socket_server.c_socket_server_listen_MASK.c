
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {int dummy; } ;
struct TYPE_3__ {uintptr_t opaque; int id; int fd; } ;
struct TYPE_4__ {TYPE_1__ listen; } ;
struct request_package {TYPE_2__ u; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int) ;
 int FUNC_2 (struct socket_server*) ;
 int FUNC_3 (struct socket_server*,struct request_package*,char,int) ;

int
FUNC_4(struct socket_server *VAR_0, uintptr_t VAR_1, const char * VAR_2, int VAR_3, int VAR_4) {
 int VAR_5 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0) {
  return -1;
 }
 struct request_package VAR_6;
 int VAR_7 = FUNC_2(VAR_0);
 if (VAR_7 < 0) {
  FUNC_0(VAR_5);
  return VAR_7;
 }
 VAR_6.u.listen.opaque = VAR_1;
 VAR_6.u.listen.id = VAR_7;
 VAR_6.u.listen.fd = VAR_5;
 FUNC_3(VAR_0, &VAR_6, 'L', sizeof(VAR_6.u.listen));
 return VAR_7;
}
