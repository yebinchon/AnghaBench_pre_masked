
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int ps_snapshot_data; int ps_offset; void* ps_indexid; void* ps_relid; } ;
struct TYPE_10__ {TYPE_1__* rd_indam; } ;
struct TYPE_9__ {int (* aminitparallelscan ) (void*) ;} ;
typedef int Snapshot ;
typedef int Size ;
typedef TYPE_2__* Relation ;
typedef TYPE_3__* ParallelIndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (void*) ;

void
FUNC_8(Relation VAR_3, Relation VAR_4,
         Snapshot VAR_5, ParallelIndexScanDesc VAR_6)
{
 Size VAR_7;

 VAR_1;

 VAR_7 = FUNC_5(FUNC_6(VAR_0, VAR_2),
       FUNC_0(VAR_5));
 VAR_7 = FUNC_1(VAR_7);

 VAR_6->ps_relid = FUNC_3(VAR_3);
 VAR_6->ps_indexid = FUNC_3(VAR_4);
 VAR_6->ps_offset = VAR_7;
 FUNC_4(VAR_5, VAR_6->ps_snapshot_data);


 if (VAR_4->rd_indam->aminitparallelscan != ((void*)0))
 {
  void *VAR_8;

  VAR_8 = FUNC_2(VAR_6, VAR_7);
  VAR_4->rd_indam->aminitparallelscan(VAR_8);
 }
}
