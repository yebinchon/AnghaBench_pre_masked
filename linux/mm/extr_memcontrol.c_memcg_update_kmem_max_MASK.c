
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int kmem; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct mem_cgroup *VAR_1,
     unsigned long VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_0);
 VAR_3 = FUNC_2(&VAR_1->kmem, VAR_2);
 FUNC_1(&VAR_0);
 return VAR_3;
}
