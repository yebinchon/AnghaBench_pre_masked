
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* TupleDesc ;
struct TYPE_12__ {scalar_t__ has_not_null; scalar_t__ has_generated_stored; int num_defval; int num_check; TYPE_4__* check; TYPE_5__* missing; TYPE_6__* defval; } ;
typedef TYPE_2__ TupleConstr ;
struct TYPE_16__ {scalar_t__ adnum; int adbin; } ;
struct TYPE_15__ {scalar_t__ am_present; int am_value; } ;
struct TYPE_14__ {scalar_t__ ccvalid; scalar_t__ ccnoinherit; int ccbin; int ccname; } ;
struct TYPE_13__ {scalar_t__ atttypid; scalar_t__ attstattarget; scalar_t__ attlen; scalar_t__ attndims; scalar_t__ atttypmod; scalar_t__ attbyval; scalar_t__ attstorage; scalar_t__ attalign; scalar_t__ attnotnull; scalar_t__ atthasdef; scalar_t__ attidentity; scalar_t__ attgenerated; scalar_t__ attisdropped; scalar_t__ attislocal; scalar_t__ attinhcount; scalar_t__ attcollation; int attname; } ;
struct TYPE_11__ {int natts; scalar_t__ tdtypeid; TYPE_2__* constr; } ;
typedef TYPE_3__* Form_pg_attribute ;
typedef TYPE_4__ ConstrCheck ;
typedef TYPE_5__ AttrMissing ;
typedef TYPE_6__ AttrDefault ;


 int FUNC_0 (int ) ;
 TYPE_3__* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ) ;

bool
FUNC_4(TupleDesc VAR_0, TupleDesc VAR_1)
{
 int VAR_2,
    VAR_3,
    VAR_4;

 if (VAR_0->natts != VAR_1->natts)
  return 0;
 if (VAR_0->tdtypeid != VAR_1->tdtypeid)
  return 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->natts; VAR_2++)
 {
  Form_pg_attribute VAR_5 = FUNC_1(VAR_0, VAR_2);
  Form_pg_attribute VAR_6 = FUNC_1(VAR_1, VAR_2);
  if (FUNC_3(FUNC_0(VAR_5->attname), FUNC_0(VAR_6->attname)) != 0)
   return 0;
  if (VAR_5->atttypid != VAR_6->atttypid)
   return 0;
  if (VAR_5->attstattarget != VAR_6->attstattarget)
   return 0;
  if (VAR_5->attlen != VAR_6->attlen)
   return 0;
  if (VAR_5->attndims != VAR_6->attndims)
   return 0;
  if (VAR_5->atttypmod != VAR_6->atttypmod)
   return 0;
  if (VAR_5->attbyval != VAR_6->attbyval)
   return 0;
  if (VAR_5->attstorage != VAR_6->attstorage)
   return 0;
  if (VAR_5->attalign != VAR_6->attalign)
   return 0;
  if (VAR_5->attnotnull != VAR_6->attnotnull)
   return 0;
  if (VAR_5->atthasdef != VAR_6->atthasdef)
   return 0;
  if (VAR_5->attidentity != VAR_6->attidentity)
   return 0;
  if (VAR_5->attgenerated != VAR_6->attgenerated)
   return 0;
  if (VAR_5->attisdropped != VAR_6->attisdropped)
   return 0;
  if (VAR_5->attislocal != VAR_6->attislocal)
   return 0;
  if (VAR_5->attinhcount != VAR_6->attinhcount)
   return 0;
  if (VAR_5->attcollation != VAR_6->attcollation)
   return 0;

 }

 if (VAR_0->constr != ((void*)0))
 {
  TupleConstr *VAR_7 = VAR_0->constr;
  TupleConstr *VAR_8 = VAR_1->constr;

  if (VAR_8 == ((void*)0))
   return 0;
  if (VAR_7->has_not_null != VAR_8->has_not_null)
   return 0;
  if (VAR_7->has_generated_stored != VAR_8->has_generated_stored)
   return 0;
  VAR_4 = VAR_7->num_defval;
  if (VAR_4 != (int) VAR_8->num_defval)
   return 0;
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
  {
   AttrDefault *VAR_9 = VAR_7->defval + VAR_2;
   AttrDefault *VAR_10 = VAR_8->defval;






   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_10++, VAR_3++)
   {
    if (VAR_9->adnum == VAR_10->adnum)
     break;
   }
   if (VAR_3 >= VAR_4)
    return 0;
   if (FUNC_3(VAR_9->adbin, VAR_10->adbin) != 0)
    return 0;
  }
  if (VAR_7->missing)
  {
   if (!VAR_8->missing)
    return 0;
   for (VAR_2 = 0; VAR_2 < VAR_0->natts; VAR_2++)
   {
    AttrMissing *VAR_11 = VAR_7->missing + VAR_2;
    AttrMissing *VAR_12 = VAR_8->missing + VAR_2;

    if (VAR_11->am_present != VAR_12->am_present)
     return 0;
    if (VAR_11->am_present)
    {
     Form_pg_attribute VAR_13 = FUNC_1(VAR_0, VAR_2);

     if (!FUNC_2(VAR_11->am_value, VAR_12->am_value,
           VAR_13->attbyval, VAR_13->attlen))
      return 0;
    }
   }
  }
  else if (VAR_8->missing)
   return 0;
  VAR_4 = VAR_7->num_check;
  if (VAR_4 != (int) VAR_8->num_check)
   return 0;
  for (VAR_2 = 0; VAR_2 < VAR_4; VAR_2++)
  {
   ConstrCheck *VAR_14 = VAR_7->check + VAR_2;
   ConstrCheck *VAR_15 = VAR_8->check;






   for (VAR_3 = 0; VAR_3 < VAR_4; VAR_15++, VAR_3++)
   {
    if (FUNC_3(VAR_14->ccname, VAR_15->ccname) == 0 &&
     FUNC_3(VAR_14->ccbin, VAR_15->ccbin) == 0 &&
     VAR_14->ccvalid == VAR_15->ccvalid &&
     VAR_14->ccnoinherit == VAR_15->ccnoinherit)
     break;
   }
   if (VAR_3 >= VAR_4)
    return 0;
  }
 }
 else if (VAR_1->constr != ((void*)0))
  return 0;
 return 1;
}
