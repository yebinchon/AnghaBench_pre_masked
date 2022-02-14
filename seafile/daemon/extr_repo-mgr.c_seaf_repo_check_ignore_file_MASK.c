
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int gboolean ;
struct TYPE_6__ {scalar_t__ data; struct TYPE_6__* next; } ;
struct TYPE_5__ {int st_mode; } ;
typedef TYPE_1__ SeafStat ;
typedef int GPatternSpec ;
typedef TYPE_2__ GList ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (char*) ;
 char* FUNC_5 (char const*,char*,int *) ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char*,TYPE_1__*) ;

gboolean
FUNC_8 (GList *VAR_2, const char *VAR_3)
{
    char *VAR_4;
    SeafStat VAR_5;
    GPatternSpec *VAR_6;
    GList *VAR_7;

    VAR_4 = FUNC_6(VAR_3);

    int VAR_8 = FUNC_7(VAR_4, &VAR_5);
    if (VAR_8 == 0 && FUNC_0(VAR_5.st_mode)) {
        FUNC_1 (VAR_4);
        VAR_4 = FUNC_5 (VAR_3, "/", ((void*)0));
    }

    for (VAR_7 = VAR_2; VAR_7 != ((void*)0); VAR_7 = VAR_7->next) {
        char *VAR_9 = (char *)VAR_7->data;

        VAR_6 = FUNC_4(VAR_9);
        if (FUNC_2(VAR_6, VAR_4)) {
            FUNC_1 (VAR_4);
            FUNC_3(VAR_6);
            return VAR_1;
        }
        FUNC_3(VAR_6);
    }

    FUNC_1 (VAR_4);
    return VAR_0;
}
