
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int frzflags; int t_infomask2; int t_infomask; int xmax; } ;
typedef TYPE_1__ xl_heap_freeze_tuple ;
struct TYPE_8__ {int t_infomask2; int t_infomask; } ;
typedef TYPE_2__* HeapTupleHeader ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_2(HeapTupleHeader VAR_4, xl_heap_freeze_tuple *VAR_5)
{
 FUNC_0(VAR_4, VAR_5->xmax);

 if (VAR_5->frzflags & VAR_2)
  FUNC_1(VAR_4, VAR_0);

 if (VAR_5->frzflags & VAR_3)
  FUNC_1(VAR_4, VAR_1);

 VAR_4->t_infomask = VAR_5->t_infomask;
 VAR_4->t_infomask2 = VAR_5->t_infomask2;
}
