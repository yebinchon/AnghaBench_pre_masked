
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {int dummy; } ;
struct cred {struct group_info* group_info; } ;


 int FUNC_0 (struct group_info*) ;
 int FUNC_1 (struct group_info*) ;

void FUNC_2(struct cred *VAR_0, struct group_info *VAR_1)
{
 FUNC_1(VAR_0->group_info);
 FUNC_0(VAR_1);
 VAR_0->group_info = VAR_1;
}
