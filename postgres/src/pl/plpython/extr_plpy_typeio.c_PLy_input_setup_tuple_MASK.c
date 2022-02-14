
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef TYPE_3__* TupleDesc ;
struct TYPE_16__ {scalar_t__ atttypid; scalar_t__ atttypmod; scalar_t__ attisdropped; } ;
struct TYPE_12__ {int natts; TYPE_4__* atts; TYPE_3__* recdesc; } ;
struct TYPE_13__ {TYPE_1__ tuple; } ;
struct TYPE_15__ {scalar_t__ func; scalar_t__ typoid; scalar_t__ typmod; int mcxt; TYPE_2__ u; } ;
struct TYPE_14__ {int natts; } ;
typedef int PLyProcedure ;
typedef TYPE_4__ PLyDatumToOb ;
typedef TYPE_5__* Form_pg_attribute ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_4__*,int ,scalar_t__,scalar_t__,int *) ;
 scalar_t__ VAR_1 ;
 TYPE_5__* FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (TYPE_4__*) ;

void
FUNC_5(PLyDatumToOb *VAR_2, TupleDesc VAR_3, PLyProcedure *VAR_4)
{
 int VAR_5;


 FUNC_0(VAR_2->func == VAR_0);


 if (VAR_2->typoid == VAR_1 && VAR_2->typmod < 0)
  VAR_2->u.tuple.recdesc = VAR_3;


 if (VAR_2->u.tuple.natts != VAR_3->natts)
 {
  if (VAR_2->u.tuple.atts)
   FUNC_4(VAR_2->u.tuple.atts);
  VAR_2->u.tuple.natts = VAR_3->natts;
  VAR_2->u.tuple.atts = (PLyDatumToOb *)
   FUNC_1(VAR_2->mcxt,
           VAR_3->natts * sizeof(PLyDatumToOb));
 }


 for (VAR_5 = 0; VAR_5 < VAR_3->natts; VAR_5++)
 {
  Form_pg_attribute VAR_6 = FUNC_3(VAR_3, VAR_5);
  PLyDatumToOb *VAR_7 = &VAR_2->u.tuple.atts[VAR_5];

  if (VAR_6->attisdropped)
   continue;

  if (VAR_7->typoid == VAR_6->atttypid && VAR_7->typmod == VAR_6->atttypmod)
   continue;

  FUNC_2(VAR_7, VAR_2->mcxt,
        VAR_6->atttypid, VAR_6->atttypmod,
        VAR_4);
 }
}
