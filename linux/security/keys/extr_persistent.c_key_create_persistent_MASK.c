
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {struct key* persistent_keyring_register; } ;
struct keyring_index_key {int description; } ;
struct key {int dummy; } ;
typedef int kuid_t ;
typedef scalar_t__ key_ref_t ;


 scalar_t__ FUNC_0 (struct key*) ;
 scalar_t__ FUNC_1 (long) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct key*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (scalar_t__,struct keyring_index_key*) ;
 long FUNC_5 (struct user_namespace*) ;
 struct key* FUNC_6 (int ,int ,int ,int ,int,int ,int *,struct key*) ;
 scalar_t__ FUNC_7 (struct key*,int) ;

__attribute__((used)) static key_ref_t FUNC_8(struct user_namespace *VAR_6, kuid_t VAR_7,
           struct keyring_index_key *VAR_8)
{
 struct key *VAR_9;
 key_ref_t VAR_10, VAR_11;

 if (!VAR_6->persistent_keyring_register) {
  long VAR_12 = FUNC_5(VAR_6);
  if (VAR_12 < 0)
   return FUNC_1(VAR_12);
 } else {
  VAR_10 = FUNC_7(VAR_6->persistent_keyring_register, 1);
  VAR_11 = FUNC_4(VAR_10, VAR_8);
  if (VAR_11)
   return VAR_11;
 }

 VAR_9 = FUNC_6(VAR_8->description,
       VAR_7, VAR_0, FUNC_3(),
       ((VAR_2 & ~VAR_3) |
        VAR_5 | VAR_4),
       VAR_1, ((void*)0),
       VAR_6->persistent_keyring_register);
 if (FUNC_2(VAR_9))
  return FUNC_0(VAR_9);

 return FUNC_7(VAR_9, 1);
}
