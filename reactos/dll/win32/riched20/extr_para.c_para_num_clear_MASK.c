
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct para_num {int * text; int * style; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2( struct para_num *VAR_0 )
{
    if (VAR_0->style)
    {
        FUNC_1( VAR_0->style );
        VAR_0->style = ((void*)0);
    }
    FUNC_0( VAR_0->text );
    VAR_0->text = ((void*)0);
}
