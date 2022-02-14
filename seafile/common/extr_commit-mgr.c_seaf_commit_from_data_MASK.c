
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int gsize ;
typedef int SeafCommit ;


 int FUNC_0 (char*,int) ;
 int * FUNC_1 (char const*,int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,int,int ,TYPE_1__*) ;
 int FUNC_4 (char*,int ) ;

SeafCommit *
FUNC_5 (const char *VAR_0, char *VAR_1, gsize VAR_2)
{
    json_t *VAR_3;
    SeafCommit *VAR_4;
    json_error_t VAR_5;

    VAR_3 = FUNC_3 (VAR_1, VAR_2, 0, &VAR_5);
    if (!VAR_3) {

        if (VAR_1[VAR_2-1] == 0)
            FUNC_0 (VAR_1, VAR_2 - 1);
        else
            FUNC_0 (VAR_1, VAR_2);

        VAR_3 = FUNC_3 (VAR_1, VAR_2, 0, &VAR_5);
        if (!VAR_3) {
            FUNC_4 ("Failed to load commit json: %s.\n", VAR_5.text);
            return ((void*)0);
        }
    }

    VAR_4 = FUNC_1 (VAR_0, VAR_3);

    FUNC_2 (VAR_3);

    return VAR_4;
}
