
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int domain_info; int base_typid; int record_io; int tupdesc; } ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int JsValue ;
typedef int JsObject ;
typedef int HeapTupleHeader ;
typedef scalar_t__ Datum ;
typedef TYPE_1__ CompositeIOData ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_0 ;
 int FUNC_3 (scalar_t__,int,int ,int *,int ) ;
 int FUNC_4 (int ,int *,int ,int ,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;

__attribute__((used)) static Datum
FUNC_6(CompositeIOData *VAR_1,
       Oid VAR_2,
       const char *VAR_3,
       MemoryContext VAR_4,
       HeapTupleHeader VAR_5,
       JsValue *VAR_6,
       bool VAR_7)
{
 Datum VAR_8;


 FUNC_5(VAR_1, VAR_4);

 if (VAR_7)
  VAR_8 = (Datum) 0;
 else
 {
  HeapTupleHeader VAR_9;
  JsObject VAR_10;


  FUNC_2(VAR_6, &VAR_10);


  VAR_9 = FUNC_4(VAR_1->tupdesc, &VAR_1->record_io,
        VAR_5, VAR_4, &VAR_10);
  VAR_8 = FUNC_0(VAR_9);

  FUNC_1(&VAR_10);
 }






 if (VAR_2 != VAR_1->base_typid && VAR_2 != VAR_0)
  FUNC_3(VAR_8, VAR_7, VAR_2, &VAR_1->domain_info, VAR_4);

 return VAR_8;
}
