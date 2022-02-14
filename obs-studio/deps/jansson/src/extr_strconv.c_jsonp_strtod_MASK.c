
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* length; int value; } ;
typedef TYPE_1__ strbuffer_t ;


 scalar_t__ VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 double FUNC_1 (int ,char**) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(strbuffer_t *VAR_3, double *VAR_4)
{
    double VAR_5;
    char *VAR_6;





    VAR_2 = 0;
    VAR_5 = FUNC_1(VAR_3->value, &VAR_6);
    FUNC_0(VAR_6 == VAR_3->value + VAR_3->length);

    if((VAR_5 == VAR_1 || VAR_5 == -VAR_1) && VAR_2 == VAR_0) {

        return -1;
    }

    *VAR_4 = VAR_5;
    return 0;
}
