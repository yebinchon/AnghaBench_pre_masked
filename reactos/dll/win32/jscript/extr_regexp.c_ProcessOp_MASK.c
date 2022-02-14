
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_21__ {int flags; int progLength; int treeDepth; } ;
struct TYPE_17__ {int index; } ;
struct TYPE_16__ {int ch1; int ch2; } ;
struct TYPE_15__ {int chr; } ;
struct TYPE_18__ {TYPE_3__ ucclass; TYPE_6__* kid2; TYPE_2__ altprereq; TYPE_1__ flat; } ;
struct TYPE_20__ {struct TYPE_20__* next; TYPE_4__ u; struct TYPE_20__* kid; void* op; } ;
struct TYPE_19__ {int op; int errPos; } ;
typedef TYPE_5__ REOpData ;
typedef TYPE_6__ RENode ;
typedef int INT ;
typedef TYPE_7__ CompilerState ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__* FUNC_0 (TYPE_7__*,int const) ;
 int VAR_4 ;

 void* VAR_5 ;
 void* VAR_6 ;


 void* VAR_7 ;

 void* VAR_8 ;


 int FUNC_1 (TYPE_7__*,int ,int ) ;
 int FUNC_2 (TYPE_7__*,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static BOOL
FUNC_3(CompilerState *VAR_11, REOpData *VAR_12, RENode **VAR_13,
          INT VAR_14)
{
    RENode *VAR_15;

    switch (VAR_12->op) {
      case 133:
        VAR_15 = FUNC_0(VAR_11, 133);
        if (!VAR_15)
            return VAR_0;
        VAR_15->kid = VAR_13[VAR_14 - 2];
        VAR_15->u.kid2 = VAR_13[VAR_14 - 1];
        VAR_13[VAR_14 - 2] = VAR_15;

        if (VAR_11->treeDepth == VAR_9) {
            FUNC_1(VAR_11, VAR_3, VAR_2);
            return VAR_0;
        }
        ++VAR_11->treeDepth;





        if (((RENode *) VAR_15->kid)->op == VAR_8 &&
            ((RENode *) VAR_15->u.kid2)->op == VAR_8 &&
            (VAR_11->flags & VAR_4) == 0) {
            VAR_15->op = VAR_5;
            VAR_15->u.altprereq.ch1 = ((RENode *) VAR_15->kid)->u.flat.chr;
            VAR_15->u.altprereq.ch2 = ((RENode *) VAR_15->u.kid2)->u.flat.chr;


            VAR_11->progLength += 13;
        }
        else
        if (((RENode *) VAR_15->kid)->op == VAR_7 &&
            ((RENode *) VAR_15->kid)->u.ucclass.index < 256 &&
            ((RENode *) VAR_15->u.kid2)->op == VAR_8 &&
            (VAR_11->flags & VAR_4) == 0) {
            VAR_15->op = VAR_6;
            VAR_15->u.altprereq.ch1 = ((RENode *) VAR_15->u.kid2)->u.flat.chr;
            VAR_15->u.altprereq.ch2 = ((RENode *) VAR_15->kid)->u.ucclass.index;


            VAR_11->progLength += 13;
        }
        else
        if (((RENode *) VAR_15->kid)->op == VAR_8 &&
            ((RENode *) VAR_15->u.kid2)->op == VAR_7 &&
            ((RENode *) VAR_15->u.kid2)->u.ucclass.index < 256 &&
            (VAR_11->flags & VAR_4) == 0) {
            VAR_15->op = VAR_6;
            VAR_15->u.altprereq.ch1 = ((RENode *) VAR_15->kid)->u.flat.chr;
            VAR_15->u.altprereq.ch2 =
                ((RENode *) VAR_15->u.kid2)->u.ucclass.index;


            VAR_11->progLength += 13;
        }
        else {

            VAR_11->progLength += 7;
        }
        break;

      case 130:
        VAR_15 = VAR_13[VAR_14 - 2];
        while (VAR_15->next)
            VAR_15 = VAR_15->next;
        VAR_15->next = VAR_13[VAR_14 - 1];
        break;

      case 132:
      case 131:
      case 128:
      case 129:

        FUNC_2(VAR_11, VAR_3, VAR_1,
                                VAR_12->errPos);
        return VAR_0;

      default:;
    }
    return VAR_10;
}
