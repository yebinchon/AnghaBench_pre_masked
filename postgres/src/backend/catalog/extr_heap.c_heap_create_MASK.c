
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int TupleDesc ;
typedef int TransactionId ;
struct TYPE_8__ {int rd_node; TYPE_1__* rd_rel; } ;
struct TYPE_7__ {int relkind; } ;
typedef TYPE_2__* Relation ;
typedef scalar_t__ Oid ;
typedef int MultiXactId ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (scalar_t__) ;


 int FUNC_5 (char) ;
 TYPE_2__* FUNC_6 (char const*,scalar_t__,int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,int,char,char) ;
 int FUNC_7 (int ,char) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int ,char const*) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (TYPE_2__*,int *,char,int *,int *) ;

Relation
FUNC_15(const char *VAR_6,
   Oid VAR_7,
   Oid VAR_8,
   Oid VAR_9,
   Oid VAR_10,
   Oid VAR_11,
   TupleDesc VAR_12,
   char VAR_13,
   char VAR_14,
   bool VAR_15,
   bool VAR_16,
   bool VAR_17,
   TransactionId *VAR_18,
   MultiXactId *VAR_19)
{
 bool VAR_20;
 Relation VAR_21;


 FUNC_0(FUNC_4(VAR_9));
 if (!VAR_17 &&
  ((FUNC_1(VAR_7) && VAR_13 != 135) ||
   FUNC_3(VAR_7)) &&
  FUNC_2())
  FUNC_9(VAR_1,
    (FUNC_10(VAR_0),
     FUNC_12("permission denied to create \"%s.%s\"",
      FUNC_13(VAR_7), VAR_6),
     FUNC_11("System catalog modifications are currently disallowed.")));

 *VAR_18 = VAR_4;
 *VAR_19 = VAR_2;


 switch (VAR_13)
 {
  case 128:
  case 137:
  case 136:
   VAR_8 = VAR_3;
   break;

  case 130:





   VAR_8 = VAR_3;
   break;
  default:
   break;
 }






 if (!FUNC_5(VAR_13) || FUNC_4(VAR_10))
  VAR_20 = 0;
 else
 {
  VAR_20 = 1;
  VAR_10 = VAR_9;
 }
 if (VAR_8 == VAR_5)
  VAR_8 = VAR_3;




 VAR_21 = FUNC_6(VAR_6,
          VAR_7,
          VAR_12,
          VAR_9,
          VAR_11,
          VAR_10,
          VAR_8,
          VAR_15,
          VAR_16,
          VAR_14,
          VAR_13);
 if (VAR_20)
 {
  FUNC_8(VAR_21);

  switch (VAR_21->rd_rel->relkind)
  {
   case 128:
   case 137:
   case 136:
   case 132:
   case 133:
    FUNC_0(0);
    break;

   case 135:
   case 130:
    FUNC_7(VAR_21->rd_node, VAR_14);
    break;

   case 131:
   case 129:
   case 134:
    FUNC_14(VAR_21, &VAR_21->rd_node,
            VAR_14,
            VAR_18, VAR_19);
    break;
  }
 }

 return VAR_21;
}
