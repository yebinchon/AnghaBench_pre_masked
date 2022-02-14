
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int dummy; } ;
struct cred {struct key* session_keyring; int gid; int uid; } ;


 scalar_t__ FUNC_0 (struct key*) ;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct key*) ;
 int FUNC_2 (struct key*) ;
 int FUNC_3 (struct key*) ;
 struct key* FUNC_4 (char*,int ,int ,struct cred*,int,unsigned long,int *,int *) ;
 int FUNC_5 () ;

int FUNC_6(struct cred *VAR_5, struct key *VAR_6)
{
 unsigned long VAR_7;
 struct key *VAR_8;

 FUNC_5();


 if (!VAR_6) {
  VAR_7 = VAR_1;
  if (VAR_5->session_keyring)
   VAR_7 = VAR_0;

  VAR_6 = FUNC_4("_ses", VAR_5->uid, VAR_5->gid, VAR_5,
     VAR_2 | VAR_4 | VAR_3,
     VAR_7, ((void*)0), ((void*)0));
  if (FUNC_0(VAR_6))
   return FUNC_1(VAR_6);
 } else {
  FUNC_2(VAR_6);
 }


 VAR_8 = VAR_5->session_keyring;
 VAR_5->session_keyring = VAR_6;

 if (VAR_8)
  FUNC_3(VAR_8);

 return 0;
}
