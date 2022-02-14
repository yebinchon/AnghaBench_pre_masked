
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int options; scalar_t__ type; } ;
typedef TYPE_1__ RRDVAR ;
typedef int RRDHOST ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, void *VAR_3) {
    RRDVAR *VAR_4 = (RRDVAR *)VAR_2;
    RRDHOST *VAR_5 = (RRDHOST *)VAR_3;

    if(FUNC_1(VAR_4->options & VAR_0 && VAR_4->type == VAR_1)) {
        FUNC_0(VAR_5, VAR_4);


        return 1;
    }


    return 0;
}
