
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct mem_cgroup {int dummy; } ;
typedef int gfp_t ;


 int FUNC_0 (struct mem_cgroup*,int ,int ) ;
 int FUNC_1 (struct page*,struct mm_struct*,int ,struct mem_cgroup**,int) ;
 int FUNC_2 (struct page*) ;

int FUNC_3(struct page *VAR_0, struct mm_struct *VAR_1,
     gfp_t VAR_2, struct mem_cgroup **VAR_3,
     bool VAR_4)
{
 struct mem_cgroup *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_5 = *VAR_3;
 FUNC_0(VAR_5, FUNC_2(VAR_0), VAR_2);
 return VAR_6;
}
