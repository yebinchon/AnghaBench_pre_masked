
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;
struct lruvec {unsigned long refaults; } ;
typedef int pg_data_t ;


 int VAR_0 ;
 unsigned long FUNC_0 (struct lruvec*,int ) ;
 struct mem_cgroup* FUNC_1 (struct mem_cgroup*,struct mem_cgroup*,int *) ;
 struct lruvec* FUNC_2 (int *,struct mem_cgroup*) ;

__attribute__((used)) static void FUNC_3(struct mem_cgroup *VAR_1, pg_data_t *VAR_2)
{
 struct mem_cgroup *VAR_3;

 VAR_3 = FUNC_1(VAR_1, ((void*)0), ((void*)0));
 do {
  unsigned long VAR_4;
  struct lruvec *VAR_5;

  VAR_5 = FUNC_2(VAR_2, VAR_3);
  VAR_4 = FUNC_0(VAR_5, VAR_0);
  VAR_5->refaults = VAR_4;
 } while ((VAR_3 = FUNC_1(VAR_1, VAR_3, ((void*)0))));
}
