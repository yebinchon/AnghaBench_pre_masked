
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ error; int error_msg; int result; scalar_t__ nodes; } ;
typedef int EVAL_NODE ;
typedef TYPE_1__ EVAL_EXPRESSION ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,scalar_t__,int ) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int *,scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(EVAL_EXPRESSION *VAR_5) {
    VAR_5->error = VAR_0;

    FUNC_0(VAR_5->error_msg);
    VAR_5->result = FUNC_4(VAR_5, (EVAL_NODE *)VAR_5->nodes, &VAR_5->error);

    if(FUNC_8(FUNC_7(VAR_5->result))) {
        if(VAR_5->error == VAR_0)
            VAR_5->error = VAR_3;
    }
    else if(FUNC_8(FUNC_6(VAR_5->result))) {
        if(VAR_5->error == VAR_0)
            VAR_5->error = VAR_2;
    }
    else if(FUNC_8(VAR_5->error == VAR_1)) {


        VAR_5->error = VAR_0;
    }

    if(VAR_5->error != VAR_0) {
        VAR_5->result = VAR_4;

        if(FUNC_3(VAR_5->error_msg))
            FUNC_2(VAR_5->error_msg, "; ");

        FUNC_1(VAR_5->error_msg, "failed to evaluate expression with error %d (%s)", VAR_5->error, FUNC_5(VAR_5->error));
        return 0;
    }

    return 1;
}
