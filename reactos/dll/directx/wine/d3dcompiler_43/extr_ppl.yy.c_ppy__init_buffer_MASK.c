
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* YY_BUFFER_STATE ;
struct TYPE_5__ {int yy_fill_buffer; int yy_bs_lineno; scalar_t__ yy_is_interactive; scalar_t__ yy_bs_column; int * yy_input_file; } ;
typedef int FILE ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1 (YY_BUFFER_STATE VAR_2, FILE * VAR_3 )

{
 int VAR_4 = VAR_1;

 FUNC_0( VAR_2 );

 VAR_2->yy_input_file = VAR_3;
 VAR_2->yy_fill_buffer = 1;





    if (VAR_2 != VAR_0){
        VAR_2->yy_bs_lineno = 1;
        VAR_2->yy_bs_column = 0;
    }

        VAR_2->yy_is_interactive = 0;

 VAR_1 = VAR_4;
}
