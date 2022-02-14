
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct cred {struct key* thread_keyring; int gid; int uid; } ;


 scalar_t__ FUNC_0 (struct key*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct key*) ;
 struct key* FUNC_2 (char*,int ,int ,struct cred*,int,int ,int *,int *) ;

int FUNC_3(struct cred *VAR_3)
{
 struct key *VAR_4;

 if (VAR_3->thread_keyring)
  return 0;

 VAR_4 = FUNC_2("_tid", VAR_3->uid, VAR_3->gid, VAR_3,
    VAR_1 | VAR_2,
    VAR_0,
    ((void*)0), ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->thread_keyring = VAR_4;
 return 0;
}
