
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int calc_number_t ;
struct TYPE_4__ {unsigned int operation; int base; int number; } ;
typedef TYPE_1__ calc_node_t ;
struct TYPE_5__ {unsigned int last_operator; int base; scalar_t__ sci_in; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;
 int VAR_6 ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(calc_number_t *VAR_7, unsigned int VAR_8)
{
    calc_node_t VAR_9;

    if (FUNC_1() && VAR_8 == VAR_0) {


        if (VAR_5.sci_in)
            return 1;
        return 0;
    }

    if (VAR_8 == VAR_3)
        VAR_6 = VAR_4;

    VAR_9.number = *VAR_7;
    VAR_9.base = VAR_5.base;
    VAR_9.operation = VAR_8;

    FUNC_2(&VAR_9);

    if (VAR_8 == VAR_1)
        return 0;

    if (VAR_8 != VAR_2) {
        VAR_5.last_operator = VAR_8;
        FUNC_0(VAR_7);
    }
    return 1;
}
