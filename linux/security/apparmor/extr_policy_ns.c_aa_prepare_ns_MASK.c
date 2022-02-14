
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aa_ns {int lock; int sub_ns; int level; } ;


 struct aa_ns* FUNC_0 (struct aa_ns*,char const*,int *) ;
 int FUNC_1 (int *,char const*) ;
 struct aa_ns* FUNC_2 (int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;

struct aa_ns *FUNC_5(struct aa_ns *VAR_0, const char *VAR_1)
{
 struct aa_ns *VAR_2;

 FUNC_3(&VAR_0->lock, VAR_0->level);


 VAR_2 = FUNC_2(FUNC_1(&VAR_0->sub_ns, VAR_1));
 if (!VAR_2)
  VAR_2 = FUNC_0(VAR_0, VAR_1, ((void*)0));
 FUNC_4(&VAR_0->lock);


 return VAR_2;
}
