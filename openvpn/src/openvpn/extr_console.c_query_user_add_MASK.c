
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* prompt; size_t prompt_len; char* response; size_t response_len; int echo; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

void
FUNC_1(char *VAR_2, size_t VAR_3,
               char *VAR_4, size_t VAR_5,
               bool VAR_6)
{
    int VAR_7;




    FUNC_0( VAR_3 > 0 && VAR_2 != ((void*)0) && VAR_5 > 0 && VAR_4 != ((void*)0) );


    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
    {
        if (VAR_1[VAR_7].prompt == ((void*)0))
        {
            break;
        }
    }
    FUNC_0( VAR_7 < VAR_0 );


    VAR_1[VAR_7].prompt = VAR_2;
    VAR_1[VAR_7].prompt_len = VAR_3;
    VAR_1[VAR_7].response = VAR_4;
    VAR_1[VAR_7].response_len = VAR_5;
    VAR_1[VAR_7].echo = VAR_6;
}
