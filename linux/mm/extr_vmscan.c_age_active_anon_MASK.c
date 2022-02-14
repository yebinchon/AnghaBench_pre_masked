
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scan_control {int dummy; } ;
struct pglist_data {int dummy; } ;
struct mem_cgroup {int dummy; } ;
struct lruvec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct lruvec*,int,struct scan_control*,int) ;
 struct mem_cgroup* FUNC_1 (int *,struct mem_cgroup*,int *) ;
 struct lruvec* FUNC_2 (struct pglist_data*,struct mem_cgroup*) ;
 int FUNC_3 (int ,struct lruvec*,struct scan_control*,int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_4(struct pglist_data *VAR_3,
    struct scan_control *VAR_4)
{
 struct mem_cgroup *VAR_5;

 if (!VAR_2)
  return;

 VAR_5 = FUNC_1(((void*)0), ((void*)0), ((void*)0));
 do {
  struct lruvec *VAR_6 = FUNC_2(VAR_3, VAR_5);

  if (FUNC_0(VAR_6, 0, VAR_4, 1))
   FUNC_3(VAR_1, VAR_6,
        VAR_4, VAR_0);

  VAR_5 = FUNC_1(((void*)0), VAR_5, ((void*)0));
 } while (VAR_5);
}
