
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct group_info {int ngroups; int usage; } ;
typedef int kgid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct group_info* FUNC_0 (unsigned int,int,int ) ;
 int FUNC_1 (int *,int) ;
 struct group_info* FUNC_2 (unsigned int,int) ;

struct group_info *FUNC_3(int VAR_4)
{
 struct group_info *VAR_5;
 unsigned int VAR_6;

 VAR_6 = sizeof(struct group_info) + sizeof(kgid_t) * VAR_4;
 VAR_5 = FUNC_2(VAR_6, VAR_0|VAR_3|VAR_2);
 if (!VAR_5)
  VAR_5 = FUNC_0(VAR_6, VAR_0, VAR_1);
 if (!VAR_5)
  return ((void*)0);

 FUNC_1(&VAR_5->usage, 1);
 VAR_5->ngroups = VAR_4;
 return VAR_5;
}
