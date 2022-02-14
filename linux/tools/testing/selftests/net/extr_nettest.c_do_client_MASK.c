
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_family; int sin6_scope_id; int sin6_addr; void* sin6_port; } ;
struct sockaddr_in {int sin_family; int sin_addr; void* sin_port; } ;
struct TYPE_2__ {int in6; int in; } ;
struct sock_args {int version; scalar_t__ type; scalar_t__ bind_test_only; scalar_t__ has_grp; int scope_id; TYPE_1__ remote_addr; int port; int grp; int has_remote_ip; } ;
typedef int sin6 ;
typedef int sin ;




 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*,int,struct sock_args*) ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int,int,void*,int,struct sock_args*) ;
 int FUNC_5 (struct sock_args*) ;
 int FUNC_6 (int,struct sock_args*) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_7(struct sock_args *VAR_2)
{
 struct sockaddr_in VAR_3 = {
  .sin_family = 129,
 };
 struct sockaddr_in6 VAR_4 = {
  .sin6_family = 128,
 };
 void *VAR_5;
 int VAR_6;
 int VAR_7 = 0;
 int VAR_8;

 if (!VAR_2->has_remote_ip && !VAR_2->has_grp) {
  FUNC_2(VAR_1, "remote IP or multicast group not given\n");
  return 1;
 }

 switch (VAR_2->version) {
 case 129:
  VAR_3.sin_port = FUNC_3(VAR_2->port);
  if (VAR_2->has_grp)
   VAR_3.sin_addr = VAR_2->grp;
  else
   VAR_3.sin_addr = VAR_2->remote_addr.in;
  VAR_5 = &VAR_3;
  VAR_6 = sizeof(VAR_3);
  break;
 case 128:
  VAR_4 = FUNC_3(VAR_2->port);
  VAR_4 = VAR_2->remote_addr.in6;
  VAR_4 = VAR_2->scope_id;
  VAR_5 = &VAR_4;
  VAR_6 = sizeof(VAR_4);
  break;
 }

 if (VAR_2->has_grp)
  VAR_8 = FUNC_5(VAR_2);
 else
  VAR_8 = FUNC_1(VAR_5, VAR_6, VAR_2);

 if (VAR_8 < 0)
  return -VAR_8;

 if (VAR_2->bind_test_only)
  goto out;

 if (VAR_2->type == VAR_0) {
  VAR_7 = FUNC_6(VAR_8, VAR_2);
  if (VAR_7 != 0)
   goto out;
 }

 VAR_7 = FUNC_4(1, VAR_8, VAR_5, VAR_6, VAR_2);

out:
 FUNC_0(VAR_8);

 return VAR_7;
}
