
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_7__ {int attlen; int atttypmod; scalar_t__ atttypid; int attname; } ;
struct TYPE_6__ {int natts; } ;
typedef int StringInfoData ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int DestReceiver ;


 int FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int *,char) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int ) ;

void
FUNC_7(DestReceiver *VAR_0, int VAR_1, TupleDesc VAR_2)
{
 StringInfoData VAR_3;
 int VAR_4;

 FUNC_2(&VAR_3, 'T');
 FUNC_4(&VAR_3, VAR_2->natts);

 for (VAR_4 = 0; VAR_4 < VAR_2->natts; ++VAR_4)
 {
  Form_pg_attribute VAR_5 = FUNC_1(VAR_2, VAR_4);

  FUNC_6(&VAR_3, FUNC_0(VAR_5->attname));
  FUNC_5(&VAR_3, 0);
  FUNC_4(&VAR_3, 0);
  FUNC_5(&VAR_3, (int) VAR_5->atttypid);
  FUNC_4(&VAR_3, VAR_5->attlen);
  FUNC_5(&VAR_3, VAR_5->atttypmod);
  FUNC_4(&VAR_3, 0);
 }

 FUNC_3(&VAR_3);
}
