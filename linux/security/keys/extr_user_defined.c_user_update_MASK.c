
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct user_key_payload {int rcu; } ;
struct TYPE_2__ {int ** data; } ;
struct key_preparsed_payload {TYPE_1__ payload; int expiry; int datalen; } ;
struct key {int expiry; } ;


 int FUNC_0 (int *,int ) ;
 struct user_key_payload* FUNC_1 (struct key*) ;
 scalar_t__ FUNC_2 (struct key*) ;
 int FUNC_3 (struct key*,int ) ;
 int FUNC_4 (struct key*,int *) ;
 int VAR_0 ;

int FUNC_5(struct key *VAR_1, struct key_preparsed_payload *VAR_2)
{
 struct user_key_payload *VAR_3 = ((void*)0);
 int VAR_4;


 VAR_4 = FUNC_3(VAR_1, VAR_2->datalen);
 if (VAR_4 < 0)
  return VAR_4;


 VAR_1->expiry = VAR_2->expiry;
 if (FUNC_2(VAR_1))
  VAR_3 = FUNC_1(VAR_1);
 FUNC_4(VAR_1, VAR_2->payload.data[0]);
 VAR_2->payload.data[0] = ((void*)0);

 if (VAR_3)
  FUNC_0(&VAR_3->rcu, VAR_0);
 return VAR_4;
}
