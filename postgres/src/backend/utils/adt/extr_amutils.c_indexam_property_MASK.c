
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ relkind; scalar_t__ relam; int relnatts; } ;
struct TYPE_6__ {scalar_t__ indexrelid; int indnatts; int indnkeyatts; } ;
struct TYPE_5__ {int amcaninclude; int amcanorder; int amsearcharray; int amsearchnulls; int amclusterable; int amcanbackward; int amcanunique; int amcanmulticol; int amgettuple; int amgetbitmap; int amcanreturn; int amcanorderbyop; scalar_t__ (* amproperty ) (scalar_t__,int,int,char const*,int*,int*) ;} ;
typedef int Relation ;
typedef scalar_t__ Oid ;
typedef TYPE_1__ IndexAmRoutine ;
typedef int IndexAMProperty ;
typedef int HeapTuple ;
typedef int FunctionCallInfo ;
typedef TYPE_2__* Form_pg_index ;
typedef TYPE_3__* Form_pg_class ;
typedef int Datum ;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (scalar_t__,int ) ;
 int FUNC_13 (char const*) ;
 scalar_t__ FUNC_14 (scalar_t__,int,int,char const*,int*,int*) ;
 int FUNC_15 (int ,int,int,int ,int ,int*) ;

__attribute__((used)) static Datum
FUNC_16(FunctionCallInfo VAR_7,
     const char *VAR_8,
     Oid VAR_9, Oid VAR_10, int VAR_11)
{
 bool VAR_12 = 0;
 bool VAR_13 = 0;
 int VAR_14 = 0;
 IndexAMProperty VAR_15;
 IndexAmRoutine *VAR_16;


 VAR_15 = FUNC_13(VAR_8);


 if (FUNC_5(VAR_10))
 {
  HeapTuple VAR_17;
  Form_pg_class VAR_18;

  FUNC_0(!FUNC_5(VAR_9));
  VAR_17 = FUNC_9(VAR_6, FUNC_4(VAR_10));
  if (!FUNC_3(VAR_17))
   FUNC_7();
  VAR_18 = (Form_pg_class) FUNC_1(VAR_17);
  if (VAR_18->relkind != VAR_4 &&
   VAR_18->relkind != VAR_5)
  {
   FUNC_8(VAR_17);
   FUNC_7();
  }
  VAR_9 = VAR_18->relam;
  VAR_14 = VAR_18->relnatts;
  FUNC_8(VAR_17);
 }







 if (VAR_11 < 0 || VAR_11 > VAR_14)
  FUNC_7();




 VAR_16 = FUNC_2(VAR_9, 1);
 if (VAR_16 == ((void*)0))
  FUNC_7();





 if (VAR_16->amproperty &&
  VAR_16->amproperty(VAR_10, VAR_11, VAR_15, VAR_8,
       &VAR_12, &VAR_13))
 {
  if (VAR_13)
   FUNC_7();
  FUNC_6(VAR_12);
 }

 if (VAR_11 > 0)
 {
  HeapTuple VAR_19;
  Form_pg_index VAR_20;
  bool VAR_21 = 1;






  VAR_19 = FUNC_9(VAR_1, FUNC_4(VAR_10));
  if (!FUNC_3(VAR_19))
   FUNC_7();
  VAR_20 = (Form_pg_index) FUNC_1(VAR_19);

  FUNC_0(VAR_10 == VAR_20->indexrelid);
  FUNC_0(VAR_11 > 0 && VAR_11 <= VAR_20->indnatts);

  VAR_13 = 1;






  if (VAR_16->amcaninclude
   && VAR_11 > VAR_20->indnkeyatts)
   VAR_21 = 0;

  switch (VAR_15)
  {
   case 145:
    if (VAR_21 &&
     FUNC_15(VAR_19, VAR_11, VAR_16->amcanorder,
           VAR_2, 0, &VAR_12))
     VAR_13 = 0;
    break;

   case 136:
    if (VAR_21 &&
     FUNC_15(VAR_19, VAR_11, VAR_16->amcanorder,
           VAR_2, VAR_2, &VAR_12))
     VAR_13 = 0;
    break;

   case 133:
    if (VAR_21 &&
     FUNC_15(VAR_19, VAR_11, VAR_16->amcanorder,
           VAR_3, VAR_3, &VAR_12))
     VAR_13 = 0;
    break;

   case 132:
    if (VAR_21 &&
     FUNC_15(VAR_19, VAR_11, VAR_16->amcanorder,
           VAR_3, 0, &VAR_12))
     VAR_13 = 0;
    break;

   case 131:




    VAR_12 = VAR_21 ? VAR_16->amcanorder : 0;
    VAR_13 = 0;
    break;

   case 135:
    if (!VAR_21 || !VAR_16->amcanorderbyop)
    {
     VAR_12 = 0;
     VAR_13 = 0;
    }
    break;

   case 130:



    VAR_13 = 0;
    VAR_12 = 0;

    if (VAR_16->amcanreturn)
    {





     Relation VAR_22 = FUNC_12(VAR_10, VAR_0);

     VAR_12 = FUNC_10(VAR_22, VAR_11);
     FUNC_11(VAR_22, VAR_0);
    }
    break;

   case 129:
    if (VAR_21)
    {
     VAR_12 = VAR_16->amsearcharray;
     VAR_13 = 0;
    }
    break;

   case 128:
    if (VAR_21)
    {
     VAR_12 = VAR_16->amsearchnulls;
     VAR_13 = 0;
    }
    break;

   default:
    break;
  }

  FUNC_8(VAR_19);

  if (!VAR_13)
   FUNC_6(VAR_12);
  FUNC_7();
 }

 if (FUNC_5(VAR_10))
 {





  switch (VAR_15)
  {
   case 137:
    FUNC_6(VAR_16->amclusterable);

   case 134:
    FUNC_6(VAR_16->amgettuple ? 1 : 0);

   case 143:
    FUNC_6(VAR_16->amgetbitmap ? 1 : 0);

   case 144:
    FUNC_6(VAR_16->amcanbackward);

   default:
    FUNC_7();
  }
 }





 switch (VAR_15)
 {
  case 139:
   FUNC_6(VAR_16->amcanorder);

  case 138:
   FUNC_6(VAR_16->amcanunique);

  case 140:
   FUNC_6(VAR_16->amcanmulticol);

  case 142:
   FUNC_6(VAR_16->amgettuple ? 1 : 0);

  case 141:
   FUNC_6(VAR_16->amcaninclude);

  default:
   FUNC_7();
 }
}
