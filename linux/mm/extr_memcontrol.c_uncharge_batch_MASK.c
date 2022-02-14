
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct uncharge_gather {unsigned long nr_anon; unsigned long nr_file; unsigned long nr_kmem; unsigned long nr_huge; unsigned long nr_shmem; TYPE_2__* memcg; int dummy_page; int pgpgout; } ;
struct TYPE_8__ {int css; TYPE_1__* vmstats_percpu; int kmem; int memsw; int memory; } ;
struct TYPE_7__ {int nr_page_events; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ,unsigned long) ;
 int FUNC_2 (int ,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (unsigned long) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_11 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_12(const struct uncharge_gather *VAR_6)
{
 unsigned long VAR_7 = VAR_6->nr_anon + VAR_6->nr_file + VAR_6->nr_kmem;
 unsigned long VAR_8;

 if (!FUNC_8(VAR_6->memcg)) {
  FUNC_11(&VAR_6->memcg->memory, VAR_7);
  if (FUNC_5())
   FUNC_11(&VAR_6->memcg->memsw, VAR_7);
  if (!FUNC_3(VAR_5) && VAR_6->nr_kmem)
   FUNC_11(&VAR_6->memcg->kmem, VAR_6->nr_kmem);
  FUNC_10(VAR_6->memcg);
 }

 FUNC_7(VAR_8);
 FUNC_1(VAR_6->memcg, VAR_1, -VAR_6->nr_anon);
 FUNC_1(VAR_6->memcg, VAR_0, -VAR_6->nr_file);
 FUNC_1(VAR_6->memcg, VAR_2, -VAR_6->nr_huge);
 FUNC_1(VAR_6->memcg, VAR_3, -VAR_6->nr_shmem);
 FUNC_0(VAR_6->memcg, VAR_4, VAR_6->pgpgout);
 FUNC_2(VAR_6->memcg->vmstats_percpu->nr_page_events, VAR_7);
 FUNC_9(VAR_6->memcg, VAR_6->dummy_page);
 FUNC_6(VAR_8);

 if (!FUNC_8(VAR_6->memcg))
  FUNC_4(&VAR_6->memcg->css, VAR_7);
}
