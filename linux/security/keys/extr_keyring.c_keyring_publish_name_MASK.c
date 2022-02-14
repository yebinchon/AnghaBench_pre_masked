
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_namespace {int keyring_name_list; } ;
struct key {char* description; int name_link; } ;


 struct user_namespace* FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct key *VAR_1)
{
 struct user_namespace *VAR_2 = FUNC_0();

 if (VAR_1->description &&
     VAR_1->description[0] &&
     VAR_1->description[0] != '.') {
  FUNC_2(&VAR_0);
  FUNC_1(&VAR_1->name_link, &VAR_2->keyring_name_list);
  FUNC_3(&VAR_0);
 }
}
