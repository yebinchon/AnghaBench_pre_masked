
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int json_t ;
struct TYPE_3__ {char* data; struct TYPE_3__* next; } ;
typedef TYPE_1__ GList ;


 int VAR_0 ;
 int * FUNC_0 () ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static char *
FUNC_6 (GList *VAR_1)
{
    json_t *VAR_2 = FUNC_0();
    GList *VAR_3;
    char *VAR_4;

    for (VAR_3 = VAR_1; VAR_3; VAR_3 = VAR_3->next) {
        VAR_4 = VAR_3->data;
        FUNC_1 (VAR_2, FUNC_4(VAR_4));
    }

    char *VAR_5 = FUNC_3 (VAR_2, VAR_0);
    if (!VAR_5) {
        FUNC_5 ("Failed to dump json.\n");
        FUNC_2 (VAR_2);
        return ((void*)0);
    }

    FUNC_2 (VAR_2);
    return VAR_5;
}
