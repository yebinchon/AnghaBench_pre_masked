
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int TupleTableSlot ;
struct TYPE_3__ {int tuple; } ;
struct TYPE_4__ {int buffer; TYPE_1__ base; } ;
typedef int Snapshot ;
typedef int Relation ;
typedef TYPE_2__ BufferHeapTupleTableSlot ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static bool
FUNC_5(Relation VAR_2, TupleTableSlot *VAR_3,
        Snapshot VAR_4)
{
 BufferHeapTupleTableSlot *VAR_5 = (BufferHeapTupleTableSlot *) VAR_3;
 bool VAR_6;

 FUNC_0(FUNC_4(VAR_3));
 FUNC_0(FUNC_1(VAR_5->buffer));





 FUNC_3(VAR_5->buffer, VAR_0);
 VAR_6 = FUNC_2(VAR_5->base.tuple, VAR_4,
            VAR_5->buffer);
 FUNC_3(VAR_5->buffer, VAR_1);

 return VAR_6;
}
