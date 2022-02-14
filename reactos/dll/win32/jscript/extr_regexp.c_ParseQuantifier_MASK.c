
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* UINT ;
struct TYPE_13__ {int* cp; int* cpend; int progLength; scalar_t__ treeDepth; TYPE_3__* result; } ;
struct TYPE_10__ {int min; int max; void* greedy; } ;
struct TYPE_11__ {TYPE_1__ range; } ;
struct TYPE_12__ {TYPE_2__ u; struct TYPE_12__* kid; } ;
typedef TYPE_3__ RENode ;
typedef int INT ;
typedef TYPE_4__ CompilerState ;
typedef void* BOOL ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_4__*,void*) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_4__*,int ,int ) ;
 int FUNC_3 (TYPE_4__*,int ,int,int ) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static BOOL
FUNC_4(CompilerState *VAR_7)
{
    RENode *VAR_8;
    VAR_8 = VAR_7->result;
    if (VAR_7->cp < VAR_7->cpend) {
        switch (*VAR_7->cp) {
          case '+':
            VAR_7->result = FUNC_0(VAR_7, VAR_3);
            if (!VAR_7->result)
                return VAR_0;
            VAR_7->result->u.range.min = 1;
            VAR_7->result->u.range.max = (UINT)-1;

            VAR_7->progLength += 4;
            goto quantifier;
          case '*':
            VAR_7->result = FUNC_0(VAR_7, VAR_3);
            if (!VAR_7->result)
                return VAR_0;
            VAR_7->result->u.range.min = 0;
            VAR_7->result->u.range.max = (UINT)-1;

            VAR_7->progLength += 4;
            goto quantifier;
          case '?':
            VAR_7->result = FUNC_0(VAR_7, VAR_3);
            if (!VAR_7->result)
                return VAR_0;
            VAR_7->result->u.range.min = 0;
            VAR_7->result->u.range.max = 1;

            VAR_7->progLength += 4;
            goto quantifier;
          case '{':
          {
            INT VAR_9;

            VAR_9 = FUNC_1(VAR_7, VAR_0);
            if (VAR_9 == 0)
                goto quantifier;
            if (VAR_9 == -1)
                return VAR_5;

            FUNC_3(VAR_7, VAR_2, VAR_9, VAR_6);
            return VAR_0;
          }
          default:;
        }
    }
    return VAR_5;

quantifier:
    if (VAR_7->treeDepth == VAR_4) {
        FUNC_2(VAR_7, VAR_2, VAR_1);
        return VAR_0;
    }

    ++VAR_7->treeDepth;
    ++VAR_7->cp;
    VAR_7->result->kid = VAR_8;
    if (VAR_7->cp < VAR_7->cpend && *VAR_7->cp == '?') {
        ++VAR_7->cp;
        VAR_7->result->u.range.greedy = VAR_0;
    } else {
        VAR_7->result->u.range.greedy = VAR_5;
    }
    return VAR_5;
}
