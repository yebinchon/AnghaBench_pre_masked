
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zone {int pageset; } ;
struct per_cpu_pages {struct list_head* lists; } ;
struct page {int dummy; } ;
struct list_head {int dummy; } ;
typedef int gfp_t ;
struct TYPE_2__ {struct per_cpu_pages pcp; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 struct page* FUNC_1 (struct zone*,int,unsigned int,struct per_cpu_pages*,struct list_head*) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct page*) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (struct zone*,struct zone*) ;

__attribute__((used)) static struct page *FUNC_7(struct zone *VAR_1,
   struct zone *VAR_2, gfp_t VAR_3,
   int VAR_4, unsigned int VAR_5)
{
 struct per_cpu_pages *VAR_6;
 struct list_head *VAR_7;
 struct page *VAR_8;
 unsigned long VAR_9;

 FUNC_3(VAR_9);
 VAR_6 = &FUNC_5(VAR_2->pageset)->pcp;
 VAR_7 = &VAR_6->lists[VAR_4];
 VAR_8 = FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6, VAR_7);
 if (VAR_8) {
  FUNC_0(VAR_0, FUNC_4(VAR_8), 1);
  FUNC_6(VAR_1, VAR_2);
 }
 FUNC_2(VAR_9);
 return VAR_8;
}
