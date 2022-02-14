
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int calculated_number ;
struct TYPE_6__ {scalar_t__ parameters; int (* eval ) (int *,TYPE_1__*,int*) ;} ;
struct TYPE_5__ {scalar_t__ count; size_t operator; } ;
typedef TYPE_1__ EVAL_NODE ;
typedef int EVAL_EXPRESSION ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*,int*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static inline calculated_number FUNC_2(EVAL_EXPRESSION *VAR_2, EVAL_NODE *VAR_3, int *VAR_4) {
    if(FUNC_1(VAR_3->count != VAR_1[VAR_3->operator].parameters)) {
        *VAR_4 = VAR_0;
        return 0;
    }

    calculated_number VAR_5 = VAR_1[VAR_3->operator].eval(VAR_2, VAR_3, VAR_4);

    return VAR_5;
}
