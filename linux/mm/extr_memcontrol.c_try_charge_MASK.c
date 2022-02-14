
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct page_counter {int dummy; } ;
struct mem_cgroup {scalar_t__ high; int high_work; int memory; int css; int memsw; } ;
typedef int gfp_t ;
typedef enum oom_status { ____Placeholder_oom_status } oom_status ;
struct TYPE_5__ {int flags; unsigned int memcg_nr_pages_over_high; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct mem_cgroup*,unsigned int) ;
 int FUNC_1 (int *,unsigned int) ;
 TYPE_1__* VAR_11 ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (struct mem_cgroup*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 unsigned int FUNC_8 (int ,unsigned int) ;
 struct mem_cgroup* FUNC_9 (struct page_counter*,int ) ;
 scalar_t__ FUNC_10 (struct mem_cgroup*) ;
 unsigned int FUNC_11 (struct mem_cgroup*) ;
 int FUNC_12 (struct mem_cgroup*,int,int ) ;
 scalar_t__ FUNC_13 (struct mem_cgroup*) ;
 int FUNC_14 (struct mem_cgroup*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_15 (int *,unsigned int) ;
 scalar_t__ FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int *,unsigned int,struct page_counter**) ;
 int FUNC_18 (int *,unsigned int) ;
 struct mem_cgroup* FUNC_19 (struct mem_cgroup*) ;
 int FUNC_20 (struct mem_cgroup*,unsigned int) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 () ;
 int FUNC_24 (TYPE_1__*) ;
 unsigned long FUNC_25 (struct mem_cgroup*,unsigned int,int,int) ;
 scalar_t__ FUNC_26 (int) ;

__attribute__((used)) static int FUNC_27(struct mem_cgroup *VAR_14, gfp_t VAR_15,
        unsigned int VAR_16)
{
 unsigned int VAR_17 = FUNC_8(VAR_1, VAR_16);
 int VAR_18 = VAR_3;
 struct mem_cgroup *VAR_19;
 struct page_counter *VAR_20;
 unsigned long VAR_21;
 bool VAR_22 = 1;
 bool VAR_23 = 0;
 enum oom_status VAR_24;

 if (FUNC_10(VAR_14))
  return 0;
retry:
 if (FUNC_0(VAR_14, VAR_16))
  return 0;

 if (!FUNC_2() ||
     FUNC_17(&VAR_14->memsw, VAR_17, &VAR_20)) {
  if (FUNC_17(&VAR_14->memory, VAR_17, &VAR_20))
   goto done_restock;
  if (FUNC_2())
   FUNC_18(&VAR_14->memsw, VAR_17);
  VAR_19 = FUNC_9(VAR_20, VAR_12);
 } else {
  VAR_19 = FUNC_9(VAR_20, VAR_13);
  VAR_22 = 0;
 }

 if (VAR_17 > VAR_16) {
  VAR_17 = VAR_16;
  goto retry;
 }







 if (VAR_15 & VAR_7)
  goto force;







 if (FUNC_26(FUNC_23()))
  goto force;







 if (FUNC_26(VAR_11->flags & VAR_6))
  goto force;

 if (FUNC_26(FUNC_24(VAR_11)))
  goto nomem;

 if (!FUNC_6(VAR_15))
  goto nomem;

 FUNC_14(VAR_19, VAR_2);

 VAR_21 = FUNC_25(VAR_19, VAR_16,
          VAR_15, VAR_22);

 if (FUNC_11(VAR_19) >= VAR_16)
  goto retry;

 if (!VAR_23) {
  FUNC_3(VAR_19);
  VAR_23 = 1;
  goto retry;
 }

 if (VAR_15 & VAR_9)
  goto nomem;
 if (VAR_21 && VAR_16 <= (1 << VAR_4))
  goto retry;




 if (FUNC_13(VAR_19))
  goto retry;

 if (VAR_18--)
  goto retry;

 if (VAR_15 & VAR_10)
  goto nomem;

 if (VAR_15 & VAR_8)
  goto force;

 if (FUNC_4(VAR_11))
  goto force;






 VAR_24 = FUNC_12(VAR_19, VAR_15,
         FUNC_5(VAR_16 * VAR_5));
 switch (VAR_24) {
 case 128:
  VAR_18 = VAR_3;
  goto retry;
 case 129:
  goto force;
 default:
  goto nomem;
 }
nomem:
 if (!(VAR_15 & VAR_8))
  return -VAR_0;
force:





 FUNC_15(&VAR_14->memory, VAR_16);
 if (FUNC_2())
  FUNC_15(&VAR_14->memsw, VAR_16);
 FUNC_1(&VAR_14->css, VAR_16);

 return 0;

done_restock:
 FUNC_1(&VAR_14->css, VAR_17);
 if (VAR_17 > VAR_16)
  FUNC_20(VAR_14, VAR_17 - VAR_16);
 do {
  if (FUNC_16(&VAR_14->memory) > VAR_14->high) {

   if (FUNC_7()) {
    FUNC_21(&VAR_14->high_work);
    break;
   }
   VAR_11->memcg_nr_pages_over_high += VAR_17;
   FUNC_22(VAR_11);
   break;
  }
 } while ((VAR_14 = FUNC_19(VAR_14)));

 return 0;
}
