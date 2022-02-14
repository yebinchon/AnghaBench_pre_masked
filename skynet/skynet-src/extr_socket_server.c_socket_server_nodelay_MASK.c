
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct socket_server {int dummy; } ;
struct TYPE_3__ {int id; int value; int what; } ;
struct TYPE_4__ {TYPE_1__ setopt; } ;
struct request_package {TYPE_2__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct socket_server*,struct request_package*,char,int) ;

void
FUNC_1(struct socket_server *VAR_1, int VAR_2) {
 struct request_package VAR_3;
 VAR_3.u.setopt.id = VAR_2;
 VAR_3.u.setopt.what = VAR_0;
 VAR_3.u.setopt.value = 1;
 FUNC_0(VAR_1, &VAR_3, 'T', sizeof(VAR_3.u.setopt));
}
