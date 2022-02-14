
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page_counter {unsigned long max; } ;
struct mem_cgroup {struct page_counter memsw; struct page_counter memory; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mem_cgroup*) ;
 int VAR_5 ;
 int FUNC_1 (struct mem_cgroup*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct page_counter*,unsigned long) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct mem_cgroup*,int,int ,int) ;

__attribute__((used)) static int FUNC_7(struct mem_cgroup *VAR_6,
     unsigned long VAR_7, bool VAR_8)
{
 bool VAR_9 = 0;
 bool VAR_10 = 0;
 int VAR_11;
 bool VAR_12;
 struct page_counter *VAR_13 = VAR_8 ? &VAR_6->memsw : &VAR_6->memory;

 do {
  if (FUNC_5(VAR_4)) {
   VAR_11 = -VAR_1;
   break;
  }

  FUNC_2(&VAR_5);




  VAR_12 = VAR_8 ? VAR_7 >= VAR_6->memory.max :
        VAR_7 <= VAR_6->memsw.max;
  if (!VAR_12) {
   FUNC_3(&VAR_5);
   VAR_11 = -VAR_2;
   break;
  }
  if (VAR_7 > VAR_13->max)
   VAR_9 = 1;
  VAR_11 = FUNC_4(VAR_13, VAR_7);
  FUNC_3(&VAR_5);

  if (!VAR_11)
   break;

  if (!VAR_10) {
   FUNC_0(VAR_6);
   VAR_10 = 1;
   continue;
  }

  if (!FUNC_6(VAR_6, 1,
     VAR_3, !VAR_8)) {
   VAR_11 = -VAR_0;
   break;
  }
 } while (1);

 if (!VAR_11 && VAR_9)
  FUNC_1(VAR_6);

 return VAR_11;
}
