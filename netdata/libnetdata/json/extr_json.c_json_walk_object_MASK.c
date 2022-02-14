
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {size_t end; size_t start; size_t size; int type; } ;
typedef TYPE_1__ jsmntok_t ;
struct TYPE_15__ {char* name; char* fullname; char* original_string; int (* callback_function ) (TYPE_2__*) ;int type; int * callback_data; } ;
typedef TYPE_2__ JSON_ENTRY ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 size_t FUNC_1 (char*,TYPE_1__*,size_t,size_t,TYPE_2__*) ;
 size_t FUNC_2 (char*,TYPE_1__*,size_t,TYPE_2__*) ;
 size_t FUNC_3 (char*,TYPE_1__*,size_t,TYPE_2__*) ;
 char* FUNC_4 (int) ;
 int FUNC_5 (TYPE_2__*,TYPE_2__*,int) ;
 int FUNC_6 (char*,char*,char*,char*,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int) ;

size_t FUNC_11(char *VAR_3, jsmntok_t *VAR_4, size_t VAR_5, size_t VAR_6, JSON_ENTRY *VAR_7)
{
    JSON_ENTRY VAR_8 = {
            .name = "",
            .fullname = "",
            .callback_data = ((void*)0),
            .callback_function = ((void*)0)
    };

    char VAR_9 = VAR_3[VAR_4[VAR_6].end];
    VAR_3[VAR_4[VAR_6].end] = '\0';
    VAR_8.original_string = &VAR_3[VAR_4[VAR_6].start];
    FUNC_5(&VAR_8, VAR_7, sizeof(JSON_ENTRY));
    VAR_8.type = VAR_2;
    VAR_8.callback_function = ((void*)0);
    if(VAR_7->callback_function) VAR_7->callback_function(&VAR_8);
    VAR_3[VAR_4[VAR_6].end] = VAR_9;

    int VAR_10 = 1;
    size_t VAR_11, VAR_12 = VAR_6, VAR_13 = VAR_4[VAR_6].size;

    VAR_6++;
    for(VAR_11 = 0; VAR_11 < VAR_13 ; VAR_11++) {
        switch(VAR_4[VAR_6].type) {
            case 129:
                VAR_6 += FUNC_2(VAR_3, VAR_4, VAR_6, &VAR_8);
                VAR_10 = 1;
                break;

            case 130:
                VAR_6 += FUNC_11(VAR_3, VAR_4, VAR_5 + 1, VAR_6, &VAR_8);
                VAR_10 = 1;
                break;

            case 131:
                VAR_6 += FUNC_1(VAR_3, VAR_4, VAR_5 + 1, VAR_6, &VAR_8);
                VAR_10 = 1;
                break;

            case 128:
            default:
                if(VAR_10) {
                    int VAR_14 = VAR_4[VAR_6].end - VAR_4[VAR_6].start;
                    if (FUNC_10(VAR_14>VAR_1)) VAR_14=VAR_1;
                    FUNC_8(VAR_8.name, &VAR_3[VAR_4[VAR_6].start], VAR_14);
                    VAR_8.name[VAR_14] = '\0';
                    VAR_14=FUNC_7(VAR_7->fullname) + FUNC_7(VAR_7->fullname[0]?".":"") + FUNC_7(VAR_8.name);
                    char *VAR_15 = FUNC_4((VAR_14+1)*sizeof(char));
                    FUNC_6(VAR_15,"%s%s%s", VAR_7->fullname, VAR_7->fullname[0]?".":"", VAR_8.name);
                    if (FUNC_10(VAR_14>VAR_0)) VAR_14=VAR_0;
                    FUNC_8(VAR_8.fullname, VAR_15, VAR_14);
                    FUNC_0(VAR_15);
                    VAR_6++;
                    VAR_10 = 0;
                }
                else {
                    VAR_6 += FUNC_3(VAR_3, VAR_4, VAR_6, &VAR_8);
                    VAR_10 = 1;
                }
                break;
        }
    }
    return VAR_6 - VAR_12;
}
