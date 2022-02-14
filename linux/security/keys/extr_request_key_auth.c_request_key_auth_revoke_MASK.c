
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_key_auth {int rcu; } ;
struct key {int serial; } ;


 int FUNC_0 (int *,int ) ;
 struct request_key_auth* FUNC_1 (struct key*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct key*,int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_4(struct key *VAR_1)
{
 struct request_key_auth *VAR_2 = FUNC_1(VAR_1);

 FUNC_2("{%d}", VAR_1->serial);
 FUNC_3(VAR_1, ((void*)0));
 FUNC_0(&VAR_2->rcu, VAR_0);
}
