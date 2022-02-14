
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {int dummy; } ;
struct TYPE_3__ {int id; int fd; uintptr_t opaque; int family; } ;
struct TYPE_4__ {TYPE_1__ udp; } ;
struct request_package {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int,int ,int*) ;
 int FUNC_2 (struct socket_server*) ;
 int FUNC_3 (struct socket_server*,struct request_package*,unsigned char,int) ;
 int FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int) ;

int
FUNC_6(struct socket_server *VAR_3, uintptr_t VAR_4, const char * VAR_5, int VAR_6) {
 int VAR_7;
 int VAR_8;
 if (VAR_6 != 0 || VAR_5 != ((void*)0)) {

  VAR_7 = FUNC_1(VAR_5, VAR_6, VAR_1, &VAR_8);
  if (VAR_7 < 0) {
   return -1;
  }
 } else {
  VAR_8 = VAR_0;
  VAR_7 = FUNC_4(VAR_8, VAR_2, 0);
  if (VAR_7 < 0) {
   return -1;
  }
 }
 FUNC_5(VAR_7);

 int VAR_9 = FUNC_2(VAR_3);
 if (VAR_9 < 0) {
  FUNC_0(VAR_7);
  return -1;
 }
 struct request_package VAR_10;
 VAR_10.u.udp.id = VAR_9;
 VAR_10.u.udp.fd = VAR_7;
 VAR_10.u.udp.opaque = VAR_4;
 VAR_10.u.udp.family = VAR_8;

 FUNC_3(VAR_3, &VAR_10, 'U', sizeof(VAR_10.u.udp));
 return VAR_9;
}
