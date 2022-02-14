
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cred {int group_info; int egid; } ;
typedef int kgid_t ;


 struct cred* FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;

int FUNC_3(kgid_t VAR_0)
{
 const struct cred *VAR_1 = FUNC_0();
 int VAR_2 = 1;

 if (!FUNC_1(VAR_0, VAR_1->egid))
  VAR_2 = FUNC_2(VAR_1->group_info, VAR_0);
 return VAR_2;
}
