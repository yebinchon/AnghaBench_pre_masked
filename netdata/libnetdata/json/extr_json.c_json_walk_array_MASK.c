
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {size_t end; size_t start; size_t size; int type; } ;
typedef TYPE_2__ jsmntok_t ;
struct TYPE_15__ {size_t items; } ;
struct TYPE_17__ {char* original_string; char* name; char* fullname; size_t pos; int (* callback_function ) (TYPE_3__*) ;TYPE_1__ data; int type; } ;
typedef TYPE_3__ JSON_ENTRY ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*,char*) ;
 size_t FUNC_1 (char*,TYPE_2__*,size_t,size_t,TYPE_3__*) ;
 size_t FUNC_2 (char*,TYPE_2__*,size_t,TYPE_3__*) ;
 size_t FUNC_3 (char*,TYPE_2__*,size_t,TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,int) ;
 int FUNC_5 (char*,int,char*,char*,size_t) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (TYPE_3__*) ;

size_t FUNC_8(char *VAR_3, jsmntok_t *VAR_4, size_t VAR_5, size_t VAR_6, JSON_ENTRY *VAR_7)
{
    JSON_ENTRY VAR_8;

    char VAR_9 = VAR_3[VAR_4[VAR_6].end];
    VAR_3[VAR_4[VAR_6].end] = '\0';
    VAR_8.original_string = &VAR_3[VAR_4[VAR_6].start];

    FUNC_4(&VAR_8, VAR_7, sizeof(JSON_ENTRY));
    VAR_8.type = VAR_0;
    VAR_8.data.items = VAR_4[VAR_6].size;
    VAR_8.callback_function = ((void*)0);
    VAR_8.name[0]='\0';
    VAR_8.fullname[0]='\0';
    if(VAR_7->callback_function) VAR_7->callback_function(&VAR_8);
    VAR_3[VAR_4[VAR_6].end] = VAR_9;

    size_t VAR_10, VAR_11 = VAR_6, VAR_12 = VAR_4[VAR_6].size;

    VAR_6++;
    for(VAR_10 = 0; VAR_10 < VAR_12 ; VAR_10++) {
        VAR_8.pos = VAR_10;
        if (FUNC_6(VAR_7->name) > VAR_2 - 24 || FUNC_6(VAR_7->fullname) > VAR_1 -24) {
            FUNC_0("JSON: JSON walk_array ignoring element with name:%s fullname:%s",VAR_7->name, VAR_7->fullname);
            continue;
        }
        FUNC_5(VAR_8.name, VAR_2, "%s[%lu]", VAR_7->name, VAR_10);
        FUNC_5(VAR_8.fullname, VAR_1, "%s[%lu]", VAR_7->fullname, VAR_10);

        switch(VAR_4[VAR_6].type) {
            case 129:
                VAR_6 += FUNC_2(VAR_3, VAR_4, VAR_6, &VAR_8);
                break;

            case 130:
                VAR_6 += FUNC_1(VAR_3, VAR_4, VAR_5 + 1, VAR_6, &VAR_8);
                break;

            case 131:
                VAR_6 += FUNC_8(VAR_3, VAR_4, VAR_5 + 1, VAR_6, &VAR_8);
                break;

            case 128:
                VAR_6 += FUNC_3(VAR_3, VAR_4, VAR_6, &VAR_8);
                break;
        }
    }
    return VAR_6 - VAR_11;
}
