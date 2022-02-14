
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct mem_cgroup {int css; } ;
typedef int gfp_t ;
struct TYPE_5__ {scalar_t__ mem_cgroup; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (int,struct page*) ;
 TYPE_3__* FUNC_3 (struct page*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_0 ;
 struct mem_cgroup* FUNC_6 (struct mm_struct*) ;
 int FUNC_7 (struct page*) ;
 unsigned short FUNC_8 (TYPE_1__) ;
 scalar_t__ FUNC_9 () ;
 struct mem_cgroup* FUNC_10 (unsigned short) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (struct mem_cgroup*,int ,unsigned int) ;

int FUNC_15(struct page *VAR_1, struct mm_struct *VAR_2,
     gfp_t VAR_3, struct mem_cgroup **VAR_4,
     bool VAR_5)
{
 struct mem_cgroup *VAR_6 = ((void*)0);
 unsigned int VAR_7 = VAR_5 ? FUNC_7(VAR_1) : 1;
 int VAR_8 = 0;

 if (FUNC_9())
  goto out;

 if (FUNC_1(VAR_1)) {







  FUNC_2(!FUNC_0(VAR_1), VAR_1);
  if (FUNC_3(VAR_1)->mem_cgroup)
   goto out;

  if (VAR_0) {
   swp_entry_t VAR_9 = { .val = FUNC_11(VAR_1), };
   unsigned short VAR_10 = FUNC_8(VAR_9);

   FUNC_12();
   VAR_6 = FUNC_10(VAR_10);
   if (VAR_6 && !FUNC_5(&VAR_6->css))
    VAR_6 = ((void*)0);
   FUNC_13();
  }
 }

 if (!VAR_6)
  VAR_6 = FUNC_6(VAR_2);

 VAR_8 = FUNC_14(VAR_6, VAR_3, VAR_7);

 FUNC_4(&VAR_6->css);
out:
 *VAR_4 = VAR_6;
 return VAR_8;
}
