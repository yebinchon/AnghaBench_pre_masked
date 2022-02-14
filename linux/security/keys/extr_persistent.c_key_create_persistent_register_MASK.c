
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {struct key* persistent_keyring_register; } ;
struct key {int dummy; } ;


 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct key*) ;
 int FUNC_4 () ;
 struct key* FUNC_5 (char*,int ,int ,int ,int,int ,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct user_namespace *VAR_5)
{
 struct key *VAR_6 = FUNC_5(".persistent_register",
     FUNC_2(0), FUNC_1(0),
     FUNC_4(),
     ((VAR_1 & ~VAR_2) |
      VAR_4 | VAR_3),
     VAR_0, ((void*)0), ((void*)0));
 if (FUNC_0(VAR_6))
  return FUNC_3(VAR_6);

 VAR_5->persistent_keyring_register = VAR_6;
 return 0;
}
