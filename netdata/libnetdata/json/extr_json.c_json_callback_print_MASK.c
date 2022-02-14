
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* string; int boolean; int number; int items; } ;
struct TYPE_5__ {int type; int (* callback_function ) (TYPE_2__*) ;TYPE_1__ data; int name; } ;
typedef TYPE_2__ JSON_ENTRY ;
typedef int BUFFER ;
 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,char*,int ) ;

int FUNC_7(JSON_ENTRY *VAR_0)
{
    BUFFER *VAR_1=FUNC_0(300);

    FUNC_2(VAR_1,"%s = ", VAR_0->name);
    char VAR_2[50];
    switch(VAR_0->type) {
        case 129:
            VAR_0->callback_function = FUNC_7;
            FUNC_3(VAR_1,"OBJECT");
            break;

        case 133:
            VAR_0->callback_function = FUNC_7;
            FUNC_6(VAR_2,"ARRAY[%lu]", VAR_0->data.items);
            FUNC_3(VAR_1, VAR_2);
            break;

        case 128:
            FUNC_3(VAR_1, VAR_0->data.string);
            break;

        case 130:
            FUNC_6(VAR_2,"%Lf", VAR_0->data.number);
            FUNC_3(VAR_1,VAR_2);

            break;

        case 132:
            FUNC_3(VAR_1, VAR_0->data.boolean?"TRUE":"FALSE");
            break;

        case 131:
            FUNC_3(VAR_1,"NULL");
            break;
    }
    FUNC_5("JSON: %s", FUNC_4(VAR_1));
    FUNC_1(VAR_1);
    return 0;
}
