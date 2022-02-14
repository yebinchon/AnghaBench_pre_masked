
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct seq_buf {char* buffer; } ;
struct mem_cgroup {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 int FUNC_1 (int,int ) ;
 int * VAR_31 ;
 int FUNC_2 (struct mem_cgroup*,int ) ;
 int FUNC_3 (struct mem_cgroup*,scalar_t__) ;
 int FUNC_4 (struct seq_buf*) ;
 int FUNC_5 (struct seq_buf*,int ,int) ;
 int FUNC_6 (struct seq_buf*,char*,int,...) ;

__attribute__((used)) static char *FUNC_7(struct mem_cgroup *VAR_32)
{
 struct seq_buf VAR_33;
 int VAR_34;

 FUNC_5(&VAR_33, FUNC_1(VAR_14, VAR_0), VAR_14);
 if (!VAR_33.buffer)
  return ((void*)0);
 FUNC_6(&VAR_33, "anon %llu\n",
         (u64)FUNC_3(VAR_32, VAR_3) *
         VAR_14);
 FUNC_6(&VAR_33, "file %llu\n",
         (u64)FUNC_3(VAR_32, VAR_1) *
         VAR_14);
 FUNC_6(&VAR_33, "kernel_stack %llu\n",
         (u64)FUNC_3(VAR_32, VAR_2) *
         1024);
 FUNC_6(&VAR_33, "slab %llu\n",
         (u64)(FUNC_3(VAR_32, VAR_11) +
        FUNC_3(VAR_32, VAR_12)) *
         VAR_14);
 FUNC_6(&VAR_33, "sock %llu\n",
         (u64)FUNC_3(VAR_32, VAR_5) *
         VAR_14);

 FUNC_6(&VAR_33, "shmem %llu\n",
         (u64)FUNC_3(VAR_32, VAR_10) *
         VAR_14);
 FUNC_6(&VAR_33, "file_mapped %llu\n",
         (u64)FUNC_3(VAR_32, VAR_7) *
         VAR_14);
 FUNC_6(&VAR_33, "file_dirty %llu\n",
         (u64)FUNC_3(VAR_32, VAR_6) *
         VAR_14);
 FUNC_6(&VAR_33, "file_writeback %llu\n",
         (u64)FUNC_3(VAR_32, VAR_13) *
         VAR_14);







 FUNC_6(&VAR_33, "anon_thp %llu\n",
         (u64)FUNC_3(VAR_32, VAR_4) *
         VAR_14);

 for (VAR_34 = 0; VAR_34 < VAR_9; VAR_34++)
  FUNC_6(&VAR_33, "%s %llu\n", VAR_31[VAR_34],
          (u64)FUNC_3(VAR_32, VAR_8 + VAR_34) *
          VAR_14);

 FUNC_6(&VAR_33, "slab_reclaimable %llu\n",
         (u64)FUNC_3(VAR_32, VAR_11) *
         VAR_14);
 FUNC_6(&VAR_33, "slab_unreclaimable %llu\n",
         (u64)FUNC_3(VAR_32, VAR_12) *
         VAR_14);



 FUNC_6(&VAR_33, "pgfault %lu\n", FUNC_2(VAR_32, VAR_17));
 FUNC_6(&VAR_33, "pgmajfault %lu\n", FUNC_2(VAR_32, VAR_20));

 FUNC_6(&VAR_33, "workingset_refault %lu\n",
         FUNC_3(VAR_32, VAR_30));
 FUNC_6(&VAR_33, "workingset_activate %lu\n",
         FUNC_3(VAR_32, VAR_28));
 FUNC_6(&VAR_33, "workingset_nodereclaim %lu\n",
         FUNC_3(VAR_32, VAR_29));

 FUNC_6(&VAR_33, "pgrefill %lu\n", FUNC_2(VAR_32, VAR_21));
 FUNC_6(&VAR_33, "pgscan %lu\n",
         FUNC_2(VAR_32, VAR_23) +
         FUNC_2(VAR_32, VAR_22));
 FUNC_6(&VAR_33, "pgsteal %lu\n",
         FUNC_2(VAR_32, VAR_25) +
         FUNC_2(VAR_32, VAR_24));
 FUNC_6(&VAR_33, "pgactivate %lu\n", FUNC_2(VAR_32, VAR_15));
 FUNC_6(&VAR_33, "pgdeactivate %lu\n", FUNC_2(VAR_32, VAR_16));
 FUNC_6(&VAR_33, "pglazyfree %lu\n", FUNC_2(VAR_32, VAR_18));
 FUNC_6(&VAR_33, "pglazyfreed %lu\n", FUNC_2(VAR_32, VAR_19));
 FUNC_0(FUNC_4(&VAR_33));

 return VAR_33.buffer;
}
