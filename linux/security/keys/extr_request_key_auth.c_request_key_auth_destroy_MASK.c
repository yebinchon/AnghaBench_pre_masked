
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_key_auth {int rcu; } ;
struct TYPE_2__ {int rcu_data0; } ;
struct key {int serial; TYPE_1__ payload; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ) ;
 struct request_key_auth* FUNC_2 (int ) ;
 int FUNC_3 (struct key*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct key *VAR_1)
{
 struct request_key_auth *VAR_2 = FUNC_2(VAR_1->payload.rcu_data0);

 FUNC_1("{%d}", VAR_1->serial);
 if (VAR_2) {
  FUNC_3(VAR_1, ((void*)0));
  FUNC_0(&VAR_2->rcu, VAR_0);
 }
}
