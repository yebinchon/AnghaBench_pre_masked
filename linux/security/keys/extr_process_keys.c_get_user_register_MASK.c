
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int keyring_sem; struct key* user_keyring_register; int owner; } ;
struct key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct key* FUNC_1 (struct key*) ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 struct key* FUNC_3 (char*,int ,int ,int *,int,int ,int *,int *) ;
 int FUNC_4 (struct key**,struct key*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct key *FUNC_6(struct user_namespace *VAR_6)
{
 struct key *VAR_7 = FUNC_1(VAR_6->user_keyring_register);

 if (VAR_7)
  return VAR_7;

 FUNC_2(&VAR_6->keyring_sem);




 VAR_7 = VAR_6->user_keyring_register;
 if (!VAR_7) {
  VAR_7 = FUNC_3(".user_reg",
         VAR_6->owner, VAR_0,
         &VAR_5,
         VAR_2 | VAR_1 |
         VAR_4 | VAR_3,
         0,
         ((void*)0), ((void*)0));
  if (!FUNC_0(VAR_7))
   FUNC_4(&VAR_6->user_keyring_register,
       VAR_7);
 }

 FUNC_5(&VAR_6->keyring_sem);


 return VAR_7;
}
