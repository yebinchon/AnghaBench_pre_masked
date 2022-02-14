
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int int32 ;
typedef TYPE_1__* TupleDesc ;
struct TYPE_10__ {int attstattarget; int attcacheoff; int attnum; int attndims; int attnotnull; int atthasdef; int atthasmissing; char attidentity; char attgenerated; int attisdropped; int attislocal; int attcollation; int attstorage; int attalign; int attbyval; int attlen; int atttypid; scalar_t__ attinhcount; int atttypmod; int attname; scalar_t__ attrelid; } ;
struct TYPE_9__ {int typcollation; int typstorage; int typalign; int typbyval; int typlen; } ;
struct TYPE_8__ {int natts; } ;
typedef int Oid ;
typedef int HeapTuple ;
typedef TYPE_2__* Form_pg_type ;
typedef TYPE_3__* Form_pg_attribute ;
typedef int AttrNumber ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*,int ,int ) ;
 int VAR_1 ;
 char const* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_2 ;
 TYPE_3__* FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (int ,char*,int ) ;
 int FUNC_11 (int *,char const*) ;

void
FUNC_12(TupleDesc VAR_3,
       AttrNumber VAR_4,
       const char *VAR_5,
       Oid VAR_6,
       int32 VAR_7,
       int VAR_8)
{
 HeapTuple VAR_9;
 Form_pg_type VAR_10;
 Form_pg_attribute VAR_11;




 FUNC_0(FUNC_6(VAR_3));
 FUNC_0(VAR_4 >= 1);
 FUNC_0(VAR_4 <= VAR_3->natts);




 VAR_11 = FUNC_9(VAR_3, VAR_4 - 1);

 VAR_11->attrelid = 0;






 if (VAR_5 == ((void*)0))
  FUNC_3(FUNC_4(VAR_11->attname), 0, VAR_1);
 else if (VAR_5 != FUNC_4(VAR_11->attname))
  FUNC_11(&(VAR_11->attname), VAR_5);

 VAR_11->attstattarget = -1;
 VAR_11->attcacheoff = -1;
 VAR_11->atttypmod = VAR_7;

 VAR_11->attnum = VAR_4;
 VAR_11->attndims = VAR_8;

 VAR_11->attnotnull = 0;
 VAR_11->atthasdef = 0;
 VAR_11->atthasmissing = 0;
 VAR_11->attidentity = '\0';
 VAR_11->attgenerated = '\0';
 VAR_11->attisdropped = 0;
 VAR_11->attislocal = 1;
 VAR_11->attinhcount = 0;


 VAR_9 = FUNC_8(VAR_2, FUNC_5(VAR_6));
 if (!FUNC_2(VAR_9))
  FUNC_10(VAR_0, "cache lookup failed for type %u", VAR_6);
 VAR_10 = (Form_pg_type) FUNC_1(VAR_9);

 VAR_11->atttypid = VAR_6;
 VAR_11->attlen = VAR_10->typlen;
 VAR_11->attbyval = VAR_10->typbyval;
 VAR_11->attalign = VAR_10->typalign;
 VAR_11->attstorage = VAR_10->typstorage;
 VAR_11->attcollation = VAR_10->typcollation;

 FUNC_7(VAR_9);
}
