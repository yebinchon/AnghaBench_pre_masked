
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint64 ;
typedef int int32 ;
struct TYPE_25__ {TYPE_2__* func; scalar_t__* datums; void* eval_processed; int readonly_func; } ;
struct TYPE_24__ {scalar_t__ strict; TYPE_1__* target; scalar_t__ into; int params; int query; } ;
struct TYPE_23__ {int nulls; int values; int types; int nargs; } ;
struct TYPE_22__ {int tupdesc; int ** vals; } ;
struct TYPE_21__ {scalar_t__ print_strict_params; } ;
struct TYPE_20__ {size_t dno; } ;
typedef TYPE_3__ SPITupleTable ;
typedef TYPE_4__ PreparedParamsData ;
typedef int PLpgSQL_variable ;
typedef TYPE_5__ PLpgSQL_stmt_dynexecute ;
typedef TYPE_6__ PLpgSQL_execstate ;
typedef int Oid ;
typedef int MemoryContext ;
typedef int Datum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_6 ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (char*,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 void* VAR_7 ;
 int FUNC_5 (int) ;
 TYPE_3__* VAR_8 ;
 char* FUNC_6 (TYPE_6__*,int ,int ) ;
 int FUNC_7 (int ,char*,char*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*,int ,int*,int *,int *) ;
 TYPE_4__* FUNC_15 (TYPE_6__*,int ) ;
 int FUNC_16 (TYPE_6__*,int *,int *,int ) ;
 char* FUNC_17 (TYPE_6__*,TYPE_4__*) ;
 int FUNC_18 (TYPE_6__*) ;

__attribute__((used)) static int
FUNC_19(PLpgSQL_execstate *VAR_9,
      PLpgSQL_stmt_dynexecute *VAR_10)
{
 Datum VAR_11;
 bool VAR_12;
 Oid VAR_13;
 int32 VAR_14;
 char *VAR_15;
 int VAR_16;
 PreparedParamsData *VAR_17 = ((void*)0);
 MemoryContext VAR_18 = FUNC_18(VAR_9);





 VAR_11 = FUNC_14(VAR_9, VAR_10->query, &VAR_12, &VAR_13, &VAR_14);
 if (VAR_12)
  FUNC_8(VAR_5,
    (FUNC_9(VAR_2),
     FUNC_12("query string argument of EXECUTE is null")));


 VAR_15 = FUNC_6(VAR_9, VAR_11, VAR_13);


 VAR_15 = FUNC_1(VAR_18, VAR_15);

 FUNC_13(VAR_9);




 if (VAR_10->params)
 {
  VAR_17 = FUNC_15(VAR_9, VAR_10->params);
  VAR_16 = FUNC_3(VAR_15,
           VAR_17->nargs, VAR_17->types,
           VAR_17->values, VAR_17->nulls,
           VAR_9->readonly_func, 0);
 }
 else
  VAR_16 = FUNC_2(VAR_15, VAR_9->readonly_func, 0);

 switch (VAR_16)
 {
  case 132:
  case 135:
  case 130:
  case 137:
  case 134:
  case 129:
  case 136:
  case 128:
  case 133:
   break;

  case 0:





   break;

  case 131:
   FUNC_8(VAR_5,
     (FUNC_9(VAR_0),
      FUNC_12("EXECUTE of SELECT ... INTO is not implemented"),
      FUNC_11("You might want to use EXECUTE ... INTO or EXECUTE CREATE TABLE ... AS instead.")));
   break;


  case 139:
   FUNC_8(VAR_5,
     (FUNC_9(VAR_0),
      FUNC_12("cannot COPY to/from client in PL/pgSQL")));
   break;

  case 138:
   FUNC_8(VAR_5,
     (FUNC_9(VAR_0),
      FUNC_12("EXECUTE of transaction commands is not implemented")));
   break;

  default:
   FUNC_7(VAR_5, "SPI_execute failed executing query \"%s\": %s",
     VAR_15, FUNC_5(VAR_16));
   break;
 }


 VAR_9->eval_processed = VAR_7;


 if (VAR_10->into)
 {
  SPITupleTable *VAR_19 = VAR_8;
  uint64 VAR_20 = VAR_7;
  PLpgSQL_variable *VAR_21;


  if (VAR_19 == ((void*)0))
   FUNC_8(VAR_5,
     (FUNC_9(VAR_3),
      FUNC_12("INTO used with a command that cannot return data")));


  VAR_21 = (PLpgSQL_variable *) VAR_9->datums[VAR_10->target->dno];






  if (VAR_20 == 0)
  {
   if (VAR_10->strict)
   {
    char *VAR_22;

    if (VAR_9->func->print_strict_params)
     VAR_22 = FUNC_17(VAR_9, VAR_17);
    else
     VAR_22 = ((void*)0);

    FUNC_8(VAR_5,
      (FUNC_9(VAR_1),
       FUNC_12("query returned no rows"),
       VAR_22 ? FUNC_10("parameters: %s", VAR_22) : 0));
   }

   FUNC_16(VAR_9, VAR_21, ((void*)0), VAR_19->tupdesc);
  }
  else
  {
   if (VAR_20 > 1 && VAR_10->strict)
   {
    char *VAR_23;

    if (VAR_9->func->print_strict_params)
     VAR_23 = FUNC_17(VAR_9, VAR_17);
    else
     VAR_23 = ((void*)0);

    FUNC_8(VAR_5,
      (FUNC_9(VAR_4),
       FUNC_12("query returned more than one row"),
       VAR_23 ? FUNC_10("parameters: %s", VAR_23) : 0));
   }


   FUNC_16(VAR_9, VAR_21, VAR_19->vals[0], VAR_19->tupdesc);
  }

  FUNC_13(VAR_9);
 }
 else
 {





 }


 FUNC_4(VAR_8);
 FUNC_0(VAR_18);

 return VAR_6;
}
