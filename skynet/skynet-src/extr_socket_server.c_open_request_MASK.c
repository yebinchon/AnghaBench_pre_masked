
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {int dummy; } ;
struct TYPE_3__ {uintptr_t opaque; int id; int port; char* host; } ;
struct TYPE_4__ {TYPE_1__ open; } ;
struct request_package {TYPE_2__ u; } ;


 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (struct socket_server*) ;
 int VAR_0 ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct socket_server *VAR_1, struct request_package *VAR_2, uintptr_t VAR_3, const char *VAR_4, int VAR_5) {
 int VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 + sizeof(VAR_2->u.open) >= 256) {
  FUNC_0(VAR_0, "socket-server : Invalid addr %s.\n",VAR_4);
  return -1;
 }
 int VAR_7 = FUNC_2(VAR_1);
 if (VAR_7 < 0)
  return -1;
 VAR_2->u.open.opaque = VAR_3;
 VAR_2->u.open.id = VAR_7;
 VAR_2->u.open.port = VAR_5;
 FUNC_1(VAR_2->u.open.host, VAR_4, VAR_6);
 VAR_2->u.open.host[VAR_6] = '\0';

 return VAR_6;
}
