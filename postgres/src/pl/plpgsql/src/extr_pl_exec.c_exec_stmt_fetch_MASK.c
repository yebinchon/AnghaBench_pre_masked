
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ uint64 ;
struct TYPE_19__ {scalar_t__ eval_processed; scalar_t__* datums; } ;
struct TYPE_18__ {long how_many; size_t curvar; int direction; TYPE_1__* target; int is_move; scalar_t__ expr; } ;
struct TYPE_17__ {int value; int refname; scalar_t__ isnull; } ;
struct TYPE_16__ {int tupdesc; int ** vals; } ;
struct TYPE_15__ {size_t dno; } ;
typedef TYPE_2__ SPITupleTable ;
typedef int * Portal ;
typedef int PLpgSQL_variable ;
typedef TYPE_3__ PLpgSQL_var ;
typedef TYPE_4__ PLpgSQL_stmt_fetch ;
typedef TYPE_5__ PLpgSQL_execstate ;
typedef int MemoryContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (TYPE_2__*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *,int ,long) ;
 int FUNC_4 (int *,int ,long) ;
 TYPE_2__* VAR_5 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (TYPE_5__*) ;
 long FUNC_10 (TYPE_5__*,scalar_t__,int*) ;
 int FUNC_11 (TYPE_5__*,int *,int *,int ) ;
 int FUNC_12 (TYPE_5__*,int) ;
 int FUNC_13 (TYPE_5__*) ;

__attribute__((used)) static int
FUNC_14(PLpgSQL_execstate *VAR_6, PLpgSQL_stmt_fetch *VAR_7)
{
 PLpgSQL_var *VAR_8;
 long VAR_9 = VAR_7->how_many;
 SPITupleTable *VAR_10;
 Portal VAR_11;
 char *VAR_12;
 uint64 VAR_13;
 MemoryContext VAR_14;





 VAR_8 = (PLpgSQL_var *) (VAR_6->datums[VAR_7->curvar]);
 if (VAR_8->isnull)
  FUNC_6(VAR_2,
    (FUNC_7(VAR_0),
     FUNC_8("cursor variable \"%s\" is null", VAR_8->refname)));


 VAR_14 = FUNC_0(FUNC_13(VAR_6));
 VAR_12 = FUNC_5(VAR_8->value);
 FUNC_0(VAR_14);

 VAR_11 = FUNC_1(VAR_12);
 if (VAR_11 == ((void*)0))
  FUNC_6(VAR_2,
    (FUNC_7(VAR_1),
     FUNC_8("cursor \"%s\" does not exist", VAR_12)));


 if (VAR_7->expr)
 {
  bool VAR_15;


  VAR_9 = FUNC_10(VAR_6, VAR_7->expr, &VAR_15);

  if (VAR_15)
   FUNC_6(VAR_2,
     (FUNC_7(VAR_0),
      FUNC_8("relative or absolute cursor position is null")));

  FUNC_9(VAR_6);
 }

 if (!VAR_7->is_move)
 {
  PLpgSQL_variable *VAR_16;





  FUNC_3(VAR_11, VAR_7->direction, VAR_9);
  VAR_10 = VAR_5;
  VAR_13 = VAR_4;





  VAR_16 = (PLpgSQL_variable *) VAR_6->datums[VAR_7->target->dno];
  if (VAR_13 == 0)
   FUNC_11(VAR_6, VAR_16, ((void*)0), VAR_10->tupdesc);
  else
   FUNC_11(VAR_6, VAR_16, VAR_10->vals[0], VAR_10->tupdesc);

  FUNC_9(VAR_6);
  FUNC_2(VAR_10);
 }
 else
 {

  FUNC_4(VAR_11, VAR_7->direction, VAR_9);
  VAR_13 = VAR_4;
 }


 VAR_6->eval_processed = VAR_13;
 FUNC_12(VAR_6, VAR_13 != 0);

 return VAR_3;
}
