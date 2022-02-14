
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_14__ {int domain_info; int record_io; int tupdesc; } ;
struct TYPE_13__ {int t_data; int t_tableOid; int t_self; int t_len; } ;
struct TYPE_9__ {TYPE_6__ composite; } ;
struct TYPE_10__ {scalar_t__ typcat; TYPE_1__ io; } ;
struct TYPE_12__ {int fn_mcxt; TYPE_2__ c; int argtype; } ;
struct TYPE_11__ {int tuple_store; int rec; TYPE_4__* cache; } ;
typedef TYPE_3__ PopulateRecordsetState ;
typedef TYPE_4__ PopulateRecordCache ;
typedef int JsObject ;
typedef int HeapTupleHeader ;
typedef TYPE_5__ HeapTupleData ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int,int ,int *,int ) ;
 int FUNC_4 (int ,int *,int ,int ,int *) ;
 int FUNC_5 (int ,TYPE_5__*) ;
 int FUNC_6 (TYPE_6__*,int ) ;

__attribute__((used)) static void
FUNC_7(PopulateRecordsetState *VAR_2, JsObject *VAR_3)
{
 PopulateRecordCache *VAR_4 = VAR_2->cache;
 HeapTupleHeader VAR_5;
 HeapTupleData VAR_6;


 FUNC_6(&VAR_4->c.io.composite, VAR_4->fn_mcxt);


 VAR_5 = FUNC_4(VAR_4->c.io.composite.tupdesc,
         &VAR_4->c.io.composite.record_io,
         VAR_2->rec,
         VAR_4->fn_mcxt,
         VAR_3);


 if (VAR_4->c.typcat == VAR_1)
  FUNC_3(FUNC_0(VAR_5), 0,
      VAR_4->argtype,
      &VAR_4->c.io.composite.domain_info,
      VAR_4->fn_mcxt);


 VAR_6.t_len = FUNC_1(VAR_5);
 FUNC_2(&(VAR_6.t_self));
 VAR_6.t_tableOid = VAR_0;
 VAR_6.t_data = VAR_5;

 FUNC_5(VAR_2->tuple_store, &VAR_6);
}
