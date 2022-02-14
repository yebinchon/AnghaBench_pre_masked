
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct mem_cgroup {TYPE_1__* vmstats_percpu; } ;
struct TYPE_2__ {int nr_page_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int,struct page*) ;
 int FUNC_4 (struct mem_cgroup*,int ,int) ;
 int FUNC_5 (struct mem_cgroup*,int ,int) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static void FUNC_7(struct mem_cgroup *VAR_6,
      struct page *VAR_7,
      bool VAR_8, int VAR_9)
{




 if (FUNC_0(VAR_7))
  FUNC_5(VAR_6, VAR_1, VAR_9);
 else {
  FUNC_5(VAR_6, VAR_0, VAR_9);
  if (FUNC_1(VAR_7))
   FUNC_5(VAR_6, VAR_3, VAR_9);
 }

 if (VAR_8) {
  FUNC_3(!FUNC_2(VAR_7), VAR_7);
  FUNC_5(VAR_6, VAR_2, VAR_9);
 }


 if (VAR_9 > 0)
  FUNC_4(VAR_6, VAR_4, 1);
 else {
  FUNC_4(VAR_6, VAR_5, 1);
  VAR_9 = -VAR_9;
 }

 FUNC_6(VAR_6->vmstats_percpu->nr_page_events, VAR_9);
}
