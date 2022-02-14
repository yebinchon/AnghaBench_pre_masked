
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct TYPE_4__ {void* connection_id; } ;
struct TYPE_5__ {TYPE_1__ dgm; } ;
struct TYPE_6__ {TYPE_2__ u; } ;
struct caif_connect_request {int protocol; TYPE_3__ sockaddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 void* FUNC_0 (struct nlattr*) ;
 scalar_t__ FUNC_1 (struct nlattr*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(struct nlattr *VAR_5[],
          struct caif_connect_request *VAR_6)
{
 if (!VAR_5) {
  FUNC_2("no params data found\n");
  return;
 }
 if (VAR_5[VAR_2])
  VAR_6->sockaddr.u.dgm.connection_id =
   FUNC_0(VAR_5[VAR_2]);
 if (VAR_5[VAR_3])
  VAR_6->sockaddr.u.dgm.connection_id =
   FUNC_0(VAR_5[VAR_3]);
 if (VAR_5[VAR_4]) {
  if (FUNC_1(VAR_5[VAR_4]))
   VAR_6->protocol = VAR_1;
  else
   VAR_6->protocol = VAR_0;
 }
}
