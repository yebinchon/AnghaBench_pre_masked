
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ gboolean ;
typedef int dents ;
struct TYPE_12__ {struct TYPE_12__* next; TYPE_1__* data; } ;
struct TYPE_11__ {TYPE_3__* entries; } ;
struct TYPE_10__ {char* name; } ;
typedef TYPE_1__ SeafDirent ;
typedef TYPE_2__ SeafDir ;
typedef TYPE_3__ GList ;
typedef int DiffOptions ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,TYPE_1__**,char const*,int *) ;
 int FUNC_1 (int,TYPE_1__**,char const*,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__**,int ,int) ;
 scalar_t__ FUNC_4 (char*,char*) ;

__attribute__((used)) static int
FUNC_5 (int VAR_2, SeafDir *VAR_3[],
                      const char *VAR_4, DiffOptions *VAR_5)
{
    GList *VAR_6[3];
    SeafDirent *VAR_7[3];
    int VAR_8;
    SeafDirent *VAR_9;
    char *VAR_10;
    gboolean VAR_11;
    int VAR_12 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
        if (VAR_3[VAR_8])
            VAR_6[VAR_8] = VAR_3[VAR_8]->entries;
        else
            VAR_6[VAR_8] = ((void*)0);
    }

    while (1) {
        VAR_10 = ((void*)0);
        FUNC_3 (VAR_7, 0, sizeof(VAR_7[0])*VAR_2);
        VAR_11 = VAR_1;


        for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
            if (VAR_6[VAR_8] != ((void*)0)) {
                VAR_11 = VAR_0;
                VAR_9 = VAR_6[VAR_8]->data;
                if (!VAR_10)
                    VAR_10 = VAR_9->name;
                else if (FUNC_4(VAR_9->name, VAR_10) > 0)
                    VAR_10 = VAR_9->name;
            }
        }

        if (VAR_11)
            break;




        for (VAR_8 = 0; VAR_8 < VAR_2; ++VAR_8) {
            if (VAR_6[VAR_8] != ((void*)0)) {
                VAR_9 = VAR_6[VAR_8]->data;
                if (FUNC_4(VAR_10, VAR_9->name) == 0) {
                    VAR_7[VAR_8] = VAR_9;
                    VAR_6[VAR_8] = VAR_6[VAR_8]->next;
                }
            }
        }

        if (VAR_2 == 2 && VAR_7[0] && VAR_7[1] && FUNC_2(VAR_7[0], VAR_7[1]))
            continue;

        if (VAR_2 == 3 && VAR_7[0] && VAR_7[1] && VAR_7[2] &&
            FUNC_2(VAR_7[0], VAR_7[1]) && FUNC_2(VAR_7[0], VAR_7[2]))
            continue;


        VAR_12 = FUNC_1 (VAR_2, VAR_7, VAR_4, VAR_5);
        if (VAR_12 < 0)
            return VAR_12;


        VAR_12 = FUNC_0 (VAR_2, VAR_7, VAR_4, VAR_5);
        if (VAR_12 < 0)
            return VAR_12;
    }

    return VAR_12;
}
