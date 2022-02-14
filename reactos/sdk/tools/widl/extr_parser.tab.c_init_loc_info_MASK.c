
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* input_name; int near_text; int line_number; } ;
typedef TYPE_1__ loc_info_t ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(loc_info_t *VAR_3)
{
    VAR_3->input_name = VAR_0 ? VAR_0 : "stdin";
    VAR_3->line_number = VAR_1;
    VAR_3->near_text = VAR_2;
}
