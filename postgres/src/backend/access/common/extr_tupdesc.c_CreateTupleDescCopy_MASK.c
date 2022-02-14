
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_11__ {int attnotnull; int atthasdef; int atthasmissing; char attidentity; char attgenerated; } ;
struct TYPE_10__ {int natts; int tdtypmod; int tdtypeid; } ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int FormData_pg_attribute ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,int) ;

TupleDesc
FUNC_3(TupleDesc VAR_0)
{
 TupleDesc VAR_1;
 int VAR_2;

 VAR_1 = FUNC_0(VAR_0->natts);


 FUNC_2(FUNC_1(VAR_1, 0),
     FUNC_1(VAR_0, 0),
     VAR_1->natts * sizeof(FormData_pg_attribute));





 for (VAR_2 = 0; VAR_2 < VAR_1->natts; VAR_2++)
 {
  Form_pg_attribute VAR_3 = FUNC_1(VAR_1, VAR_2);

  VAR_3->attnotnull = 0;
  VAR_3->atthasdef = 0;
  VAR_3->atthasmissing = 0;
  VAR_3->attidentity = '\0';
  VAR_3->attgenerated = '\0';
 }


 VAR_1->tdtypeid = VAR_0->tdtypeid;
 VAR_1->tdtypmod = VAR_0->tdtypmod;

 return VAR_1;
}
