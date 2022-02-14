
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {size_t end; size_t start; } ;
typedef TYPE_2__ jsmntok_t ;
struct TYPE_7__ {char* string; } ;
struct TYPE_9__ {char* original_string; int (* callback_function ) (TYPE_3__*) ;TYPE_1__ data; int type; } ;
typedef TYPE_3__ JSON_ENTRY ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;

size_t FUNC_1(char *VAR_1, jsmntok_t *VAR_2, size_t VAR_3, JSON_ENTRY *VAR_4)
{
    char VAR_5 = VAR_1[VAR_2[VAR_3].end];
    VAR_1[VAR_2[VAR_3].end] = '\0';
    VAR_4->original_string = &VAR_1[VAR_2[VAR_3].start];

    VAR_4->type = VAR_0;
    VAR_4->data.string = VAR_4->original_string;
    if(VAR_4->callback_function) VAR_4->callback_function(VAR_4);
    VAR_1[VAR_2[VAR_3].end] = VAR_5;
    return 1;
}
