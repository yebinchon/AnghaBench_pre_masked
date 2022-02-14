
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {char* name; int slabs; int partial; unsigned long alloc_fastpath; unsigned long alloc_slowpath; unsigned long free_fastpath; unsigned long free_slowpath; int objects; int order; int object_size; int objs_per_slab; int cmpxchg_double_cpu_fail; int cmpxchg_double_fail; int order_fallback; scalar_t__ trace; scalar_t__ store_user; scalar_t__ sanity_checks; scalar_t__ red_zone; scalar_t__ reclaim_account; scalar_t__ poison; scalar_t__ hwcache_align; scalar_t__ cache_dma; scalar_t__ aliases; scalar_t__ cpu_slabs; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int,int,...) ;
 int FUNC_2 (struct slabinfo*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (struct slabinfo*) ;
 int FUNC_4 (struct slabinfo*) ;
 int FUNC_5 (char*,int,char*,scalar_t__,int,scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 scalar_t__ VAR_7 ;

__attribute__((used)) static void FUNC_8(struct slabinfo *VAR_8)
{
 char VAR_9[20];
 char VAR_10[40];
 char VAR_11[20];
 char *VAR_12 = VAR_11;

 if (FUNC_7(VAR_8->name, "*") == 0)
  return;

 if (VAR_7 && VAR_8->reclaim_account)
  return;

 if (VAR_0 == 1) {
  FUNC_2(VAR_8);
  return;
 }

 if (VAR_5 && !VAR_4 && !VAR_8->slabs)
  return;

 if (VAR_4 && VAR_8->slabs)
  return;

 if (VAR_6 == 0)
  FUNC_6(VAR_9, FUNC_3(VAR_8));
 else
  FUNC_6(VAR_9, FUNC_4(VAR_8));
 FUNC_5(VAR_10, 40, "%lu/%lu/%d", VAR_8->slabs - VAR_8->cpu_slabs,
      VAR_8->partial, VAR_8->cpu_slabs);

 if (!VAR_1++)
  FUNC_0();

 if (VAR_8->aliases)
  *VAR_12++ = '*';
 if (VAR_8->cache_dma)
  *VAR_12++ = 'd';
 if (VAR_8->hwcache_align)
  *VAR_12++ = 'A';
 if (VAR_8->poison)
  *VAR_12++ = 'P';
 if (VAR_8->reclaim_account)
  *VAR_12++ = 'a';
 if (VAR_8->red_zone)
  *VAR_12++ = 'Z';
 if (VAR_8->sanity_checks)
  *VAR_12++ = 'F';
 if (VAR_8->store_user)
  *VAR_12++ = 'U';
 if (VAR_8->trace)
  *VAR_12++ = 'T';

 *VAR_12 = 0;
 if (VAR_3) {
  unsigned long VAR_13;
  unsigned long VAR_14;

  VAR_13 = VAR_8->alloc_fastpath + VAR_8->alloc_slowpath;
  VAR_14 = VAR_8->free_fastpath + VAR_8->free_slowpath;

  FUNC_1("%-21s %8ld %10ld %10ld %3ld %3ld %5ld %1d %4ld %4ld\n",
   VAR_8->name, VAR_8->objects,
   VAR_13, VAR_14,
   VAR_13 ? (VAR_8->alloc_fastpath * 100 / VAR_13) : 0,
   VAR_14 ? (VAR_8->free_fastpath * 100 / VAR_14) : 0,
   VAR_8->order_fallback, VAR_8->order, VAR_8->cmpxchg_double_fail,
   VAR_8->cmpxchg_double_cpu_fail);
 } else {
  FUNC_1("%-21s %8ld %7d %15s %14s %4d %1d %3ld %3ld %s\n",
   VAR_8->name, VAR_8->objects, VAR_8->object_size, VAR_9, VAR_10,
   VAR_8->objs_per_slab, VAR_8->order,
   VAR_8->slabs ? (VAR_8->partial * 100) / VAR_8->slabs : 100,
   VAR_8->slabs ? (VAR_8->objects * VAR_8->object_size * 100) /
    (VAR_8->slabs * (VAR_2 << VAR_8->order)) : 100,
   VAR_11);
 }
}
