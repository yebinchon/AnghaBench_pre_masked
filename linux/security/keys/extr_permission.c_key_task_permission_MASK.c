
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct key {int perm; int gid; int uid; } ;
struct cred {int group_info; int fsgid; int fsuid; } ;
typedef int key_ref_t ;
typedef int key_perm_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int const) ;
 struct key* FUNC_4 (int const) ;
 int FUNC_5 (int const,struct cred const*,unsigned int) ;
 scalar_t__ FUNC_6 (int ,int ) ;

int FUNC_7(const key_ref_t VAR_3, const struct cred *VAR_4,
   unsigned VAR_5)
{
 struct key *VAR_6;
 key_perm_t VAR_7;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_3);


 if (FUNC_6(VAR_6->uid, VAR_4->fsuid)) {
  VAR_7 = VAR_6->perm >> 16;
  goto use_these_perms;
 }



 if (FUNC_1(VAR_6->gid) && VAR_6->perm & VAR_1) {
  if (FUNC_0(VAR_6->gid, VAR_4->fsgid)) {
   VAR_7 = VAR_6->perm >> 8;
   goto use_these_perms;
  }

  VAR_8 = FUNC_2(VAR_4->group_info, VAR_6->gid);
  if (VAR_8) {
   VAR_7 = VAR_6->perm >> 8;
   goto use_these_perms;
  }
 }


 VAR_7 = VAR_6->perm;

use_these_perms:




 if (FUNC_3(VAR_3))
  VAR_7 |= VAR_6->perm >> 24;

 VAR_7 = VAR_7 & VAR_5 & VAR_2;

 if (VAR_7 != VAR_5)
  return -VAR_0;


 return FUNC_5(VAR_3, VAR_4, VAR_5);
}
