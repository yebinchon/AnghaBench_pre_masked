
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ column_info ;



__attribute__((used)) static void FUNC_0( column_info **VAR_0, column_info *VAR_1, int VAR_2 )
{
    column_info *VAR_3 = ((void*)0), *VAR_4 = ((void*)0), *VAR_5, *VAR_6;
    int VAR_7 = 0;

    VAR_5 = ((void*)0);
    VAR_6 = *VAR_0;
    while( VAR_6 )
    {
        if( VAR_7++ == VAR_2 )
            VAR_5 = VAR_6;
        else if( !VAR_5 )
            VAR_4 = VAR_6;

        if( VAR_6->next == VAR_1 )
            VAR_3 = VAR_6;

        VAR_6 = VAR_6->next;
    }

    if( VAR_4 ) VAR_4->next = VAR_1;
    if( VAR_3 ) VAR_3->next = VAR_5;
    VAR_6 = VAR_1->next;
    VAR_1->next = VAR_5->next;
    VAR_5->next = VAR_6;
    if( VAR_2 == 0 )
      *VAR_0 = VAR_1;
}
