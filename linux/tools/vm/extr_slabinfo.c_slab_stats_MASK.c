
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slabinfo {int alloc_slab; unsigned long alloc_fastpath; unsigned long alloc_slowpath; unsigned long free_fastpath; unsigned long free_slowpath; int free_slab; int deactivate_to_head; int deactivate_to_tail; int free_add_partial; int alloc_from_partial; int free_remove_partial; int cpu_partial_alloc; int cpu_partial_free; int deactivate_remote_frees; int free_frozen; long cpuslab_flush; unsigned long deactivate_full; unsigned long deactivate_empty; unsigned long deactivate_bypass; unsigned long alloc_refill; unsigned long alloc_node_mismatch; unsigned long cmpxchg_double_fail; int cmpxchg_double_cpu_fail; } ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(struct slabinfo *VAR_0)
{
 unsigned long VAR_1;
 unsigned long VAR_2;
 unsigned long VAR_3;

 if (!VAR_0->alloc_slab)
  return;

 VAR_1 = VAR_0->alloc_fastpath + VAR_0->alloc_slowpath;
 VAR_2 = VAR_0->free_fastpath + VAR_0->free_slowpath;

 if (!VAR_1)
  return;

 FUNC_0("\n");
 FUNC_0("Slab Perf Counter       Alloc     Free %%Al %%Fr\n");
 FUNC_0("--------------------------------------------------\n");
 FUNC_0("Fastpath             %8lu %8lu %3lu %3lu\n",
  VAR_0->alloc_fastpath, VAR_0->free_fastpath,
  VAR_0->alloc_fastpath * 100 / VAR_1,
  VAR_2 ? VAR_0->free_fastpath * 100 / VAR_2 : 0);
 FUNC_0("Slowpath             %8lu %8lu %3lu %3lu\n",
  VAR_1 - VAR_0->alloc_fastpath, VAR_0->free_slowpath,
  (VAR_1 - VAR_0->alloc_fastpath) * 100 / VAR_1,
  VAR_2 ? VAR_0->free_slowpath * 100 / VAR_2 : 0);
 FUNC_0("Page Alloc           %8lu %8lu %3lu %3lu\n",
  VAR_0->alloc_slab, VAR_0->free_slab,
  VAR_0->alloc_slab * 100 / VAR_1,
  VAR_2 ? VAR_0->free_slab * 100 / VAR_2 : 0);
 FUNC_0("Add partial          %8lu %8lu %3lu %3lu\n",
  VAR_0->deactivate_to_head + VAR_0->deactivate_to_tail,
  VAR_0->free_add_partial,
  (VAR_0->deactivate_to_head + VAR_0->deactivate_to_tail) * 100 / VAR_1,
  VAR_2 ? VAR_0->free_add_partial * 100 / VAR_2 : 0);
 FUNC_0("Remove partial       %8lu %8lu %3lu %3lu\n",
  VAR_0->alloc_from_partial, VAR_0->free_remove_partial,
  VAR_0->alloc_from_partial * 100 / VAR_1,
  VAR_2 ? VAR_0->free_remove_partial * 100 / VAR_2 : 0);

 FUNC_0("Cpu partial list     %8lu %8lu %3lu %3lu\n",
  VAR_0->cpu_partial_alloc, VAR_0->cpu_partial_free,
  VAR_0->cpu_partial_alloc * 100 / VAR_1,
  VAR_2 ? VAR_0->cpu_partial_free * 100 / VAR_2 : 0);

 FUNC_0("RemoteObj/SlabFrozen %8lu %8lu %3lu %3lu\n",
  VAR_0->deactivate_remote_frees, VAR_0->free_frozen,
  VAR_0->deactivate_remote_frees * 100 / VAR_1,
  VAR_2 ? VAR_0->free_frozen * 100 / VAR_2 : 0);

 FUNC_0("Total                %8lu %8lu\n\n", VAR_1, VAR_2);

 if (VAR_0->cpuslab_flush)
  FUNC_0("Flushes %8lu\n", VAR_0->cpuslab_flush);

 VAR_3 = VAR_0->deactivate_full + VAR_0->deactivate_empty +
   VAR_0->deactivate_to_head + VAR_0->deactivate_to_tail + VAR_0->deactivate_bypass;

 if (VAR_3) {
  FUNC_0("\nSlab Deactivation             Occurrences %%\n");
  FUNC_0("-------------------------------------------------\n");
  FUNC_0("Slab full                     %7lu  %3lu%%\n",
   VAR_0->deactivate_full, (VAR_0->deactivate_full * 100) / VAR_3);
  FUNC_0("Slab empty                    %7lu  %3lu%%\n",
   VAR_0->deactivate_empty, (VAR_0->deactivate_empty * 100) / VAR_3);
  FUNC_0("Moved to head of partial list %7lu  %3lu%%\n",
   VAR_0->deactivate_to_head, (VAR_0->deactivate_to_head * 100) / VAR_3);
  FUNC_0("Moved to tail of partial list %7lu  %3lu%%\n",
   VAR_0->deactivate_to_tail, (VAR_0->deactivate_to_tail * 100) / VAR_3);
  FUNC_0("Deactivation bypass           %7lu  %3lu%%\n",
   VAR_0->deactivate_bypass, (VAR_0->deactivate_bypass * 100) / VAR_3);
  FUNC_0("Refilled from foreign frees   %7lu  %3lu%%\n",
   VAR_0->alloc_refill, (VAR_0->alloc_refill * 100) / VAR_3);
  FUNC_0("Node mismatch                 %7lu  %3lu%%\n",
   VAR_0->alloc_node_mismatch, (VAR_0->alloc_node_mismatch * 100) / VAR_3);
 }

 if (VAR_0->cmpxchg_double_fail || VAR_0->cmpxchg_double_cpu_fail) {
  FUNC_0("\nCmpxchg_double Looping\n------------------------\n");
  FUNC_0("Locked Cmpxchg Double redos   %lu\nUnlocked Cmpxchg Double redos %lu\n",
   VAR_0->cmpxchg_double_fail, VAR_0->cmpxchg_double_cpu_fail);
 }
}
