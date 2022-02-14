
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t end; size_t start; } ;
typedef TYPE_2__ jsmntok_t ;
struct TYPE_7__ {int boolean; int number; } ;
struct TYPE_9__ {char* original_string; int (* callback_function ) (TYPE_3__*) ;void* type; TYPE_1__ data; } ;
typedef TYPE_3__ JSON_ENTRY ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int*,int *) ;
 int FUNC_1 (TYPE_3__*) ;

size_t FUNC_2(char *VAR_3, jsmntok_t *VAR_4, size_t VAR_5, JSON_ENTRY *VAR_6)
{
    char VAR_7 = VAR_3[VAR_4[VAR_5].end];
    VAR_3[VAR_4[VAR_5].end] = '\0';
    VAR_6->original_string = &VAR_3[VAR_4[VAR_5].start];

    switch(VAR_6->original_string[0]) {
        case '0': case '1': case '2': case '3': case '4': case '5': case '6': case '7':
        case '8': case '9': case '-': case '.':
            VAR_6->type = VAR_2;
            VAR_6->data.number = FUNC_0(VAR_6->original_string, ((void*)0));
            break;

        case 't': case 'T':
            VAR_6->type = VAR_0;
            VAR_6->data.boolean = 1;
            break;

        case 'f': case 'F':
            VAR_6->type = VAR_0;
            VAR_6->data.boolean = 0;
            break;

        case 'n': case 'N':
        default:
            VAR_6->type = VAR_1;
            break;
    }
    if(VAR_6->callback_function) VAR_6->callback_function(VAR_6);
    VAR_3[VAR_4[VAR_5].end] = VAR_7;
    return 1;
}
