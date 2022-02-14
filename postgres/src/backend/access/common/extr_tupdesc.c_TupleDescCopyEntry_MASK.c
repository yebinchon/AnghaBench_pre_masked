
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_11__ {int attnum; int attcacheoff; int attnotnull; int atthasdef; int atthasmissing; char attidentity; char attgenerated; } ;
struct TYPE_10__ {int natts; } ;
typedef TYPE_2__* Form_pg_attribute ;
typedef int AttrNumber ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_2__* FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int ) ;

void
FUNC_4(TupleDesc VAR_1, AttrNumber VAR_2,
       TupleDesc VAR_3, AttrNumber VAR_4)
{
 Form_pg_attribute VAR_5 = FUNC_2(VAR_1, VAR_2 - 1);
 Form_pg_attribute VAR_6 = FUNC_2(VAR_3, VAR_4 - 1);




 FUNC_0(FUNC_1(VAR_3));
 FUNC_0(FUNC_1(VAR_1));
 FUNC_0(VAR_4 >= 1);
 FUNC_0(VAR_4 <= VAR_3->natts);
 FUNC_0(VAR_2 >= 1);
 FUNC_0(VAR_2 <= VAR_1->natts);

 FUNC_3(VAR_5, VAR_6, VAR_0);
 VAR_5->attnum = VAR_2;
 VAR_5->attcacheoff = -1;


 VAR_5->attnotnull = 0;
 VAR_5->atthasdef = 0;
 VAR_5->atthasmissing = 0;
 VAR_5->attidentity = '\0';
 VAR_5->attgenerated = '\0';
}
