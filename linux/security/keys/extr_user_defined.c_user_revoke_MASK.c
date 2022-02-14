
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_key_payload {int rcu; } ;
struct key {int dummy; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct key*,int ) ;
 int FUNC_2 (struct key*,int *) ;
 int VAR_0 ;
 struct user_key_payload* FUNC_3 (struct key*) ;

void FUNC_4(struct key *VAR_1)
{
 struct user_key_payload *VAR_2 = FUNC_3(VAR_1);


 FUNC_1(VAR_1, 0);

 if (VAR_2) {
  FUNC_2(VAR_1, ((void*)0));
  FUNC_0(&VAR_2->rcu, VAR_0);
 }
}
