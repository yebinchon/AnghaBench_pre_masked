
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int status; int name; } ;
struct TYPE_4__ {TYPE_2__* data; struct TYPE_4__* next; } ;
typedef int GString ;
typedef TYPE_1__ GList ;
typedef TYPE_2__ DiffEntry ;
 int VAR_0 ;
 int FUNC_0 (int *,char*,char*,...) ;
 char* FUNC_1 (int *,int ) ;
 int * FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;

char *
FUNC_4 (GList *VAR_1)
{
    GList *VAR_2;
    DiffEntry *VAR_3;
    char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
    char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
    char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    int VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;
    int VAR_13 = 0, VAR_14 = 0, VAR_15 = 0;
    GString *VAR_16;

    if (VAR_1 == ((void*)0))
        return ((void*)0);

    for (VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next) {
        VAR_3 = VAR_2->data;
        switch (VAR_3->status) {
        case 134:
            if (VAR_10 == 0)
                VAR_4 = FUNC_3(VAR_3->name);
            VAR_10++;
            break;
        case 133:
            if (VAR_11 == 0)
                VAR_5 = FUNC_3(VAR_3->name);
            VAR_11++;
            break;
        case 128:
            if (VAR_12 == 0)
                VAR_6 = FUNC_3(VAR_3->name);
            VAR_12++;
            break;
        case 130:
            if (VAR_15 == 0)
                VAR_7 = FUNC_3(VAR_3->name);
            VAR_15++;
            break;
        case 129:
            if (VAR_10 == 0)
                VAR_4 = FUNC_3(VAR_3->name);
            VAR_10++;
            break;
        case 132:
            if (VAR_13 == 0)
                VAR_8 = FUNC_3(VAR_3->name);
            VAR_13++;
            break;
        case 131:
            if (VAR_14 == 0)
                VAR_9 = FUNC_3(VAR_3->name);
            VAR_14++;
            break;
        }
    }

    VAR_16 = FUNC_2 ("");

    if (VAR_10 == 1)
        FUNC_0 (VAR_16, "Added or modified \"%s\".\n", VAR_4);
    else if (VAR_10 > 1)
        FUNC_0 (VAR_16, "Added or modified \"%s\" and %d more files.\n",
                                VAR_4, VAR_10 - 1);

    if (VAR_11 == 1)
        FUNC_0 (VAR_16, "Deleted \"%s\".\n", VAR_5);
    else if (VAR_11 > 1)
        FUNC_0 (VAR_16, "Deleted \"%s\" and %d more files.\n",
                                VAR_5, VAR_11 - 1);

    if (VAR_12 == 1)
        FUNC_0 (VAR_16, "Renamed \"%s\".\n", VAR_6);
    else if (VAR_12 > 1)
        FUNC_0 (VAR_16, "Renamed \"%s\" and %d more files.\n",
                                VAR_6, VAR_12 - 1);

    if (VAR_15 == 1)
        FUNC_0 (VAR_16, "Renamed directory \"%s\".\n", VAR_7);
    else if (VAR_15 > 1)
        FUNC_0 (VAR_16, "Renamed \"%s\" and %d more directories.\n",
                                VAR_7, VAR_15 - 1);

    if (VAR_13 == 1)
        FUNC_0 (VAR_16, "Added directory \"%s\".\n", VAR_8);
    else if (VAR_13 > 1)
        FUNC_0 (VAR_16, "Added \"%s\" and %d more directories.\n",
                                VAR_8, VAR_13 - 1);

    if (VAR_14 == 1)
        FUNC_0 (VAR_16, "Removed directory \"%s\".\n", VAR_9);
    else if (VAR_14 > 1)
        FUNC_0 (VAR_16, "Removed \"%s\" and %d more directories.\n",
                                VAR_9, VAR_14 - 1);

    return FUNC_1 (VAR_16, VAR_0);
}
