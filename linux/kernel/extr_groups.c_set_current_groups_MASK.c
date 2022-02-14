
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {int dummy; } ;
struct cred {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cred*) ;
 struct cred* FUNC_1 () ;
 int FUNC_2 (struct cred*,struct group_info*) ;

int FUNC_3(struct group_info *VAR_1)
{
 struct cred *VAR_2;

 VAR_2 = FUNC_1();
 if (!VAR_2)
  return -VAR_0;

 FUNC_2(VAR_2, VAR_1);
 return FUNC_0(VAR_2);
}
