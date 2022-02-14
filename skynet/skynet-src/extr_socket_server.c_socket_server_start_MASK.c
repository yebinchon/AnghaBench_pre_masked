
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {int dummy; } ;
struct TYPE_3__ {int id; uintptr_t opaque; } ;
struct TYPE_4__ {TYPE_1__ start; } ;
struct request_package {TYPE_2__ u; } ;


 int FUNC_0 (struct socket_server*,struct request_package*,char,int) ;

void
FUNC_1(struct socket_server *VAR_0, uintptr_t VAR_1, int VAR_2) {
 struct request_package VAR_3;
 VAR_3.u.start.id = VAR_2;
 VAR_3.u.start.opaque = VAR_1;
 FUNC_0(VAR_0, &VAR_3, 'S', sizeof(VAR_3.u.start));
}
