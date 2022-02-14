
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ context; } ;
struct TYPE_7__ {int op; scalar_t__ lockingClause; scalar_t__ limitCount; scalar_t__ limitOffset; scalar_t__ sortClause; scalar_t__ rarg; scalar_t__ larg; int all; } ;
typedef TYPE_1__ SelectStmt ;
typedef scalar_t__ RecursionContext ;
typedef int Node ;
typedef TYPE_2__ CteState ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;




 int FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int (*) (int *,TYPE_2__*),void*) ;

__attribute__((used)) static void
FUNC_3(SelectStmt *VAR_4, CteState *VAR_5)
{
 RecursionContext VAR_6 = VAR_5->context;

 if (VAR_6 != VAR_3)
 {

  FUNC_2((Node *) VAR_4,
           FUNC_0,
           (void *) VAR_5);
 }
 else
 {
  switch (VAR_4->op)
  {
   case 129:
   case 128:
    FUNC_2((Node *) VAR_4,
             FUNC_0,
             (void *) VAR_5);
    break;
   case 130:
    if (VAR_4->all)
     VAR_5->context = VAR_2;
    FUNC_0((Node *) VAR_4->larg,
              VAR_5);
    FUNC_0((Node *) VAR_4->rarg,
              VAR_5);
    VAR_5->context = VAR_6;
    FUNC_0((Node *) VAR_4->sortClause,
              VAR_5);
    FUNC_0((Node *) VAR_4->limitOffset,
              VAR_5);
    FUNC_0((Node *) VAR_4->limitCount,
              VAR_5);
    FUNC_0((Node *) VAR_4->lockingClause,
              VAR_5);

    break;
   case 131:
    if (VAR_4->all)
     VAR_5->context = VAR_1;
    FUNC_0((Node *) VAR_4->larg,
              VAR_5);
    VAR_5->context = VAR_1;
    FUNC_0((Node *) VAR_4->rarg,
              VAR_5);
    VAR_5->context = VAR_6;
    FUNC_0((Node *) VAR_4->sortClause,
              VAR_5);
    FUNC_0((Node *) VAR_4->limitOffset,
              VAR_5);
    FUNC_0((Node *) VAR_4->limitCount,
              VAR_5);
    FUNC_0((Node *) VAR_4->lockingClause,
              VAR_5);

    break;
   default:
    FUNC_1(VAR_0, "unrecognized set op: %d",
      (int) VAR_4->op);
  }
 }
}
