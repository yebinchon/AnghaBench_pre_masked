
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct psample_group {int list; int group_num; struct net* net; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct psample_group* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct psample_group*,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct psample_group *FUNC_3(struct net *VAR_3,
        u32 VAR_4)
{
 struct psample_group *VAR_5;

 VAR_5 = FUNC_0(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->net = VAR_3;
 VAR_5->group_num = VAR_4;
 FUNC_1(&VAR_5->list, &VAR_2);

 FUNC_2(VAR_5, VAR_1);
 return VAR_5;
}
