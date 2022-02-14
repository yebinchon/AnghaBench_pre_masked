
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int n_members; TYPE_1__** members; } ;
struct TYPE_7__ {scalar_t__ amprocnum; scalar_t__ amprocrighttype; scalar_t__ amproc; } ;
struct TYPE_6__ {int tuple; } ;
typedef int ParseState ;
typedef scalar_t__ Oid ;
typedef int Node ;
typedef int * HeapTuple ;
typedef TYPE_2__* Form_pg_amproc ;
typedef TYPE_3__ CatCList ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_5 (int,scalar_t__*,scalar_t__*,int ) ;
 int FUNC_6 (int *,int *,char const*) ;
 int * FUNC_7 (int *,int *,scalar_t__,char const*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,int ,...) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (int *,int ) ;
 int * FUNC_16 (int *,int *,int ) ;

__attribute__((used)) static Node *
FUNC_17(ParseState *VAR_14, int VAR_15,
      Oid VAR_16, Oid VAR_17, Oid *VAR_18,
      Node *VAR_19)
{
 const char *VAR_20 = ((void*)0);
 Node *VAR_21;

 *VAR_18 = VAR_12;


 if (VAR_19 == ((void*)0))
  return ((void*)0);

 if (VAR_15 & VAR_10)
 {

  VAR_21 = FUNC_16(VAR_14, VAR_19, VAR_7);




  VAR_20 = "ROWS";
  VAR_21 = FUNC_7(VAR_14, VAR_21, VAR_11, VAR_20);
 }
 else if (VAR_15 & VAR_9)
 {





  Oid VAR_22;
  Oid VAR_23;
  int VAR_24 = 0;
  int VAR_25 = 0;
  Oid VAR_26 = VAR_12;
  Oid VAR_27 = VAR_12;
  CatCList *VAR_28;
  int VAR_29;


  VAR_21 = FUNC_16(VAR_14, VAR_19, VAR_6);
  VAR_22 = FUNC_13(VAR_21);







  VAR_23 = (VAR_22 != VAR_13) ? VAR_22 : VAR_17;


  VAR_28 = FUNC_4(VAR_0,
            FUNC_2(VAR_16),
            FUNC_2(VAR_17));
  for (VAR_29 = 0; VAR_29 < VAR_28->n_members; VAR_29++)
  {
   HeapTuple VAR_30 = &VAR_28->members[VAR_29]->tuple;
   Form_pg_amproc VAR_31 = (Form_pg_amproc) FUNC_1(VAR_30);


   if (VAR_31->amprocnum != VAR_1)
    continue;
   VAR_24++;


   if (!FUNC_5(1, &VAR_22, &VAR_31->amprocrighttype,
         VAR_2))
    continue;
   VAR_25++;


   if (VAR_26 != VAR_23)
   {
    VAR_26 = VAR_31->amprocrighttype;
    VAR_27 = VAR_31->amproc;
   }
  }
  FUNC_3(VAR_28);






  if (VAR_24 == 0)
   FUNC_8(VAR_4,
     (FUNC_9(VAR_3),
      FUNC_11("RANGE with offset PRECEDING/FOLLOWING is not supported for column type %s",
       FUNC_14(VAR_17)),
      FUNC_15(VAR_14, FUNC_12(VAR_21))));
  if (VAR_25 == 0)
   FUNC_8(VAR_4,
     (FUNC_9(VAR_3),
      FUNC_11("RANGE with offset PRECEDING/FOLLOWING is not supported for column type %s and offset type %s",
       FUNC_14(VAR_17),
       FUNC_14(VAR_22)),
      FUNC_10("Cast the offset value to an appropriate type."),
      FUNC_15(VAR_14, FUNC_12(VAR_21))));
  if (VAR_25 != 1 && VAR_26 != VAR_23)
   FUNC_8(VAR_4,
     (FUNC_9(VAR_3),
      FUNC_11("RANGE with offset PRECEDING/FOLLOWING has multiple interpretations for column type %s and offset type %s",
       FUNC_14(VAR_17),
       FUNC_14(VAR_22)),
      FUNC_10("Cast the offset value to the exact intended type."),
      FUNC_15(VAR_14, FUNC_12(VAR_21))));


  VAR_20 = "RANGE";
  VAR_21 = FUNC_7(VAR_14, VAR_21,
            VAR_26, VAR_20);
  *VAR_18 = VAR_27;
 }
 else if (VAR_15 & VAR_8)
 {

  VAR_21 = FUNC_16(VAR_14, VAR_19, VAR_5);




  VAR_20 = "GROUPS";
  VAR_21 = FUNC_7(VAR_14, VAR_21, VAR_11, VAR_20);
 }
 else
 {
  FUNC_0(0);
  VAR_21 = ((void*)0);
 }


 FUNC_6(VAR_14, VAR_21, VAR_20);

 return VAR_21;
}
