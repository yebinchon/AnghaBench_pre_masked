
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int tup_context; } ;
struct TYPE_7__ {int t_data; } ;
struct TYPE_8__ {TYPE_1__ tuple; scalar_t__ alloc_tuple_size; } ;
typedef scalar_t__ Size ;
typedef TYPE_2__ ReorderBufferTupleBuf ;
typedef TYPE_3__ ReorderBuffer ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_1 ;

ReorderBufferTupleBuf *
FUNC_2(ReorderBuffer *VAR_2, Size VAR_3)
{
 ReorderBufferTupleBuf *VAR_4;
 Size VAR_5;

 VAR_5 = VAR_3 + VAR_1;

 VAR_4 = (ReorderBufferTupleBuf *)
  FUNC_0(VAR_2->tup_context,
         sizeof(ReorderBufferTupleBuf) +
         VAR_0 + VAR_5);
 VAR_4->alloc_tuple_size = VAR_5;
 VAR_4->tuple.t_data = FUNC_1(VAR_4);

 return VAR_4;
}
