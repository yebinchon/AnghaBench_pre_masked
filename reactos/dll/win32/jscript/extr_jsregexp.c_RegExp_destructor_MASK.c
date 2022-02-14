
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int jsdisp_t ;
struct TYPE_4__ {int str; int last_index_val; scalar_t__ jsregexp; } ;
typedef TYPE_1__ RegExpInstance ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__) ;
 TYPE_1__* FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(jsdisp_t *VAR_0)
{
    RegExpInstance *VAR_1 = FUNC_4(VAR_0);

    if(VAR_1->jsregexp)
        FUNC_3(VAR_1->jsregexp);
    FUNC_2(VAR_1->last_index_val);
    FUNC_1(VAR_1->str);
    FUNC_0(VAR_1);
}
