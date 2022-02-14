
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int TupleDesc ;
struct TYPE_18__ {int relnatts; } ;
struct TYPE_17__ {int atttypid; int atttypmod; int attalign; int attstorage; int attbyval; int attndims; int attlen; int attname; } ;
struct TYPE_16__ {int attnum; int attstattarget; int attcacheoff; int attislocal; int attcollation; int atttypid; int atttypmod; int attrelid; int attstorage; int attalign; int attbyval; int attlen; int attname; int attndims; } ;
struct TYPE_15__ {int opckeytype; scalar_t__ opcintype; } ;
struct TYPE_14__ {int typstorage; int typalign; int typbyval; int typlen; } ;
struct TYPE_13__ {int amkeytype; } ;
struct TYPE_12__ {int ii_NumIndexAttrs; int ii_NumIndexKeyAttrs; int* ii_IndexAttrNumbers; int * ii_Expressions; } ;
typedef int Relation ;
typedef int Oid ;
typedef int Node ;
typedef int ListCell ;
typedef int List ;
typedef TYPE_1__ IndexInfo ;
typedef TYPE_2__ IndexAmRoutine ;
typedef int HeapTuple ;
typedef TYPE_3__* Form_pg_type ;
typedef TYPE_4__* Form_pg_opclass ;
typedef TYPE_5__* Form_pg_attribute ;
typedef TYPE_6__ FormData_pg_attribute ;
typedef int AttrNumber ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int FUNC_2 (int ,int,int,int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 TYPE_2__* FUNC_5 (int,int) ;
 int FUNC_6 (int ) ;
 int VAR_5 ;
 int FUNC_7 (TYPE_5__*,int ,int ) ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 TYPE_8__* FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int VAR_7 ;
 void* FUNC_15 (int ,int) ;
 int FUNC_16 (int ,char*,...) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int *) ;
 int * FUNC_21 (int *) ;
 int * FUNC_22 (int *,int *) ;
 int FUNC_23 (int *,int *) ;
 int FUNC_24 (int *,char const*) ;
 int FUNC_25 (TYPE_2__*) ;

__attribute__((used)) static TupleDesc
FUNC_26(Relation VAR_8,
       IndexInfo *VAR_9,
       List *VAR_10,
       Oid VAR_11,
       Oid *VAR_12,
       Oid *VAR_13)
{
 int VAR_14 = VAR_9->ii_NumIndexAttrs;
 int VAR_15 = VAR_9->ii_NumIndexKeyAttrs;
 ListCell *VAR_16 = FUNC_21(VAR_10);
 ListCell *VAR_17 = FUNC_21(VAR_9->ii_Expressions);
 IndexAmRoutine *VAR_18;
 TupleDesc VAR_19;
 TupleDesc VAR_20;
 int VAR_21;
 int VAR_22;


 VAR_18 = FUNC_5(VAR_11, 0);


 VAR_19 = FUNC_11(VAR_8);
 VAR_21 = FUNC_12(VAR_8)->relnatts;




 VAR_20 = FUNC_3(VAR_14);




 for (VAR_22 = 0; VAR_22 < VAR_14; VAR_22++)
 {
  AttrNumber VAR_23 = VAR_9->ii_IndexAttrNumbers[VAR_22];
  Form_pg_attribute VAR_24 = FUNC_15(VAR_20, VAR_22);
  HeapTuple VAR_25;
  Form_pg_type VAR_26;
  Form_pg_opclass VAR_27;
  Oid VAR_28;

  FUNC_7(VAR_24, 0, VAR_2);
  VAR_24->attnum = VAR_22 + 1;
  VAR_24->attstattarget = -1;
  VAR_24->attcacheoff = -1;
  VAR_24->attislocal = 1;
  VAR_24->attcollation = (VAR_22 < VAR_15) ?
   VAR_12[VAR_22] : VAR_5;






  if (VAR_23 != 0)
  {

   const FormData_pg_attribute *VAR_29;

   FUNC_0(VAR_23 > 0);

   if (VAR_23 > VAR_21)
    FUNC_16(VAR_4, "invalid column number %d", VAR_23);
   VAR_29 = FUNC_15(VAR_19,
         FUNC_1(VAR_23));

   FUNC_23(&VAR_24->attname, &VAR_29->attname);
   VAR_24->atttypid = VAR_29->atttypid;
   VAR_24->attlen = VAR_29->attlen;
   VAR_24->attndims = VAR_29->attndims;
   VAR_24->atttypmod = VAR_29->atttypmod;
   VAR_24->attbyval = VAR_29->attbyval;
   VAR_24->attstorage = VAR_29->attstorage;
   VAR_24->attalign = VAR_29->attalign;
  }
  else
  {

   Node *VAR_30;

   if (VAR_17 == ((void*)0))
    FUNC_16(VAR_4, "too few entries in indexprs list");
   VAR_30 = (Node *) FUNC_20(VAR_17);
   VAR_17 = FUNC_22(VAR_9->ii_Expressions, VAR_17);




   VAR_28 = FUNC_17(VAR_30);
   VAR_25 = FUNC_14(VAR_7, FUNC_9(VAR_28));
   if (!FUNC_6(VAR_25))
    FUNC_16(VAR_4, "cache lookup failed for type %u", VAR_28);
   VAR_26 = (Form_pg_type) FUNC_4(VAR_25);




   VAR_24->atttypid = VAR_28;
   VAR_24->attlen = VAR_26->typlen;
   VAR_24->attbyval = VAR_26->typbyval;
   VAR_24->attstorage = VAR_26->typstorage;
   VAR_24->attalign = VAR_26->typalign;
   VAR_24->atttypmod = FUNC_18(VAR_30);

   FUNC_13(VAR_25);
   FUNC_2(FUNC_8(VAR_24->attname),
          VAR_24->atttypid, VAR_24->attcollation,
          VAR_6, 0);
  }






  VAR_24->attrelid = VAR_5;




  if (VAR_16 == ((void*)0))
   FUNC_16(VAR_4, "too few entries in colnames list");
  FUNC_24(&VAR_24->attname, (const char *) FUNC_20(VAR_16));
  VAR_16 = FUNC_22(VAR_10, VAR_16);






  VAR_28 = VAR_18->amkeytype;





  if (VAR_22 < VAR_9->ii_NumIndexKeyAttrs)
  {
   VAR_25 = FUNC_14(VAR_3, FUNC_9(VAR_13[VAR_22]));
   if (!FUNC_6(VAR_25))
    FUNC_16(VAR_4, "cache lookup failed for opclass %u",
      VAR_13[VAR_22]);
   VAR_27 = (Form_pg_opclass) FUNC_4(VAR_25);
   if (FUNC_10(VAR_27->opckeytype))
    VAR_28 = VAR_27->opckeytype;






   if (VAR_28 == VAR_1 && VAR_27->opcintype == VAR_0)
   {
    VAR_28 = FUNC_19(VAR_24->atttypid);
    if (!FUNC_10(VAR_28))
     FUNC_16(VAR_4, "could not get element type of array type %u",
       VAR_24->atttypid);
   }

   FUNC_13(VAR_25);
  }





  if (FUNC_10(VAR_28) && VAR_28 != VAR_24->atttypid)
  {
   VAR_25 = FUNC_14(VAR_7, FUNC_9(VAR_28));
   if (!FUNC_6(VAR_25))
    FUNC_16(VAR_4, "cache lookup failed for type %u", VAR_28);
   VAR_26 = (Form_pg_type) FUNC_4(VAR_25);

   VAR_24->atttypid = VAR_28;
   VAR_24->atttypmod = -1;
   VAR_24->attlen = VAR_26->typlen;
   VAR_24->attbyval = VAR_26->typbyval;
   VAR_24->attalign = VAR_26->typalign;
   VAR_24->attstorage = VAR_26->typstorage;

   FUNC_13(VAR_25);
  }
 }

 FUNC_25(VAR_18);

 return VAR_20;
}
