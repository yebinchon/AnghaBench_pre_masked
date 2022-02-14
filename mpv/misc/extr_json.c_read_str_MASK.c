
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* string; } ;
struct mpv_node {TYPE_1__ u; int format; } ;
struct TYPE_7__ {char* start; int member_0; } ;
typedef TYPE_2__ bstr ;


 int VAR_0 ;
 TYPE_2__ FUNC_0 (char*) ;
 int FUNC_1 (char**,char) ;
 int FUNC_2 (void*,TYPE_2__*,TYPE_2__*) ;

__attribute__((used)) static int FUNC_3(void *VAR_1, struct mpv_node *VAR_2, char **VAR_3)
{
    if (!FUNC_1(VAR_3, '"'))
        return -1;
    char *VAR_4 = *VAR_3;
    char *VAR_5 = VAR_4;
    bool VAR_6 = 0;
    while (VAR_5[0] && VAR_5[0] != '"') {
        if (VAR_5[0] == '\\') {
            VAR_6 = 1;

            if (VAR_5[1] == '"' || VAR_5[1] == '\\')
                VAR_5++;
        }
        VAR_5++;
    }
    if (VAR_5[0] != '"')
        return -1;


    VAR_5[0] = '\0';
    *VAR_3 = VAR_5 + 1;
    if (VAR_6) {
        bstr VAR_7 = {0};
        bstr VAR_8 = FUNC_0(VAR_4);
        if (!FUNC_2(VAR_1, &VAR_7, &VAR_8))
            return -1;
        VAR_4 = VAR_7.start;
    }
    VAR_2->format = VAR_0;
    VAR_2->u.string = VAR_4;
    return 0;
}
