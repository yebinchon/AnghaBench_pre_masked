
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_2__* TupleDesc ;
struct TYPE_12__ {int * arg; int func; } ;
struct TYPE_9__ {int eoh_context; } ;
struct TYPE_11__ {int er_tupdesc_id; TYPE_2__* er_tupdesc; TYPE_7__ er_mcb; TYPE_1__ hdr; int er_typmod; int er_typeid; } ;
struct TYPE_10__ {scalar_t__ tdrefcount; int tdtypmod; int tdtypeid; } ;
typedef TYPE_3__ ExpandedRecordHeader ;


 int FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,TYPE_7__*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_2__* FUNC_3 (int ,int ) ;

TupleDesc
FUNC_4(ExpandedRecordHeader *VAR_1)
{
 TupleDesc VAR_2;


 if (VAR_1->er_tupdesc)
  return VAR_1->er_tupdesc;


 VAR_2 = FUNC_3(VAR_1->er_typeid, VAR_1->er_typmod);







 if (VAR_2->tdrefcount >= 0)
 {

  if (VAR_1->er_mcb.arg == ((void*)0))
  {
   VAR_1->er_mcb.func = VAR_0;
   VAR_1->er_mcb.arg = (void *) VAR_1;
   FUNC_1(VAR_1->hdr.eoh_context,
              &VAR_1->er_mcb);
  }


  VAR_1->er_tupdesc = VAR_2;
  VAR_2->tdrefcount++;


  FUNC_0(VAR_2);
 }
 else
 {

  VAR_1->er_tupdesc = VAR_2;
 }


 VAR_1->er_tupdesc_id = FUNC_2(VAR_2->tdtypeid,
                VAR_2->tdtypmod);

 return VAR_2;
}
