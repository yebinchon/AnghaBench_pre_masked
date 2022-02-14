
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_15__ {int num_defval; int num_check; TYPE_3__* check; TYPE_3__* missing; TYPE_3__* defval; int has_generated_stored; int has_not_null; } ;
typedef TYPE_2__ TupleConstr ;
struct TYPE_16__ {int ccnoinherit; int ccvalid; void* ccbin; void* ccname; int attlen; int attbyval; int am_value; scalar_t__ am_present; void* adbin; } ;
struct TYPE_14__ {int natts; int tdtypmod; int tdtypeid; TYPE_2__* constr; } ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int FormData_pg_attribute ;
typedef TYPE_3__ ConstrCheck ;
typedef TYPE_3__ AttrMissing ;
typedef TYPE_3__ AttrDefault ;


 TYPE_1__* FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (TYPE_3__*,TYPE_3__*,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 void* FUNC_6 (void*) ;

TupleDesc
FUNC_7(TupleDesc VAR_0)
{
 TupleDesc VAR_1;
 TupleConstr *VAR_2 = VAR_0->constr;
 int VAR_3;

 VAR_1 = FUNC_0(VAR_0->natts);


 FUNC_3(FUNC_1(VAR_1, 0),
     FUNC_1(VAR_0, 0),
     VAR_1->natts * sizeof(FormData_pg_attribute));


 if (VAR_2)
 {
  TupleConstr *VAR_4 = (TupleConstr *) FUNC_5(sizeof(TupleConstr));

  VAR_4->has_not_null = VAR_2->has_not_null;
  VAR_4->has_generated_stored = VAR_2->has_generated_stored;

  if ((VAR_4->num_defval = VAR_2->num_defval) > 0)
  {
   VAR_4->defval = (AttrDefault *) FUNC_4(VAR_4->num_defval * sizeof(AttrDefault));
   FUNC_3(VAR_4->defval, VAR_2->defval, VAR_4->num_defval * sizeof(AttrDefault));
   for (VAR_3 = VAR_4->num_defval - 1; VAR_3 >= 0; VAR_3--)
   {
    if (VAR_2->defval[VAR_3].adbin)
     VAR_4->defval[VAR_3].adbin = FUNC_6(VAR_2->defval[VAR_3].adbin);
   }
  }

  if (VAR_2->missing)
  {
   VAR_4->missing = (AttrMissing *) FUNC_4(VAR_0->natts * sizeof(AttrMissing));
   FUNC_3(VAR_4->missing, VAR_2->missing, VAR_0->natts * sizeof(AttrMissing));
   for (VAR_3 = VAR_0->natts - 1; VAR_3 >= 0; VAR_3--)
   {
    if (VAR_2->missing[VAR_3].am_present)
    {
     Form_pg_attribute VAR_5 = FUNC_1(VAR_0, VAR_3);

     VAR_4->missing[VAR_3].am_value = FUNC_2(VAR_2->missing[VAR_3].am_value,
               VAR_5->attbyval,
               VAR_5->attlen);
    }
   }
  }

  if ((VAR_4->num_check = VAR_2->num_check) > 0)
  {
   VAR_4->check = (ConstrCheck *) FUNC_4(VAR_4->num_check * sizeof(ConstrCheck));
   FUNC_3(VAR_4->check, VAR_2->check, VAR_4->num_check * sizeof(ConstrCheck));
   for (VAR_3 = VAR_4->num_check - 1; VAR_3 >= 0; VAR_3--)
   {
    if (VAR_2->check[VAR_3].ccname)
     VAR_4->check[VAR_3].ccname = FUNC_6(VAR_2->check[VAR_3].ccname);
    if (VAR_2->check[VAR_3].ccbin)
     VAR_4->check[VAR_3].ccbin = FUNC_6(VAR_2->check[VAR_3].ccbin);
    VAR_4->check[VAR_3].ccvalid = VAR_2->check[VAR_3].ccvalid;
    VAR_4->check[VAR_3].ccnoinherit = VAR_2->check[VAR_3].ccnoinherit;
   }
  }

  VAR_1->constr = VAR_4;
 }


 VAR_1->tdtypeid = VAR_0->tdtypeid;
 VAR_1->tdtypmod = VAR_0->tdtypmod;

 return VAR_1;
}
