
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int xs_temp_snap; int parallel_scan; } ;
struct TYPE_11__ {TYPE_1__* rd_indam; } ;
struct TYPE_10__ {TYPE_3__* (* ambeginscan ) (TYPE_2__*,int,int) ;int ampredlocks; } ;
typedef int Snapshot ;
typedef TYPE_2__* Relation ;
typedef int ParallelIndexScanDesc ;
typedef TYPE_3__* IndexScanDesc ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int,int) ;

__attribute__((used)) static IndexScanDesc
FUNC_4(Relation VAR_2,
       int VAR_3, int VAR_4, Snapshot VAR_5,
       ParallelIndexScanDesc VAR_6, bool VAR_7)
{
 IndexScanDesc VAR_8;

 VAR_0;
 FUNC_0(VAR_1);

 if (!(VAR_2->rd_indam->ampredlocks))
  FUNC_1(VAR_2, VAR_5);




 FUNC_2(VAR_2);




 VAR_8 = VAR_2->rd_indam->ambeginscan(VAR_2, VAR_3,
            VAR_4);

 VAR_8->parallel_scan = VAR_6;
 VAR_8->xs_temp_snap = VAR_7;

 return VAR_8;
}
