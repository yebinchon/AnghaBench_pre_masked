
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int json_t ;
struct TYPE_3__ {int text; } ;
typedef TYPE_1__ json_error_t ;
typedef int guint8 ;
typedef int SeafFSObject ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int,int ,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int **,int*) ;
 scalar_t__ FUNC_5 (char const*,int *) ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char const*,int *) ;

SeafFSObject *
FUNC_8 (const char *VAR_2, uint8_t *VAR_3, int VAR_4)
{
    guint8 *VAR_5;
    int VAR_6;
    json_t *VAR_7;
    json_error_t VAR_8;
    int VAR_9;
    SeafFSObject *VAR_10;

    if (FUNC_4 (VAR_3, VAR_4, &VAR_5, &VAR_6) < 0) {
        FUNC_6 ("Failed to decompress fs object %s.\n", VAR_2);
        return ((void*)0);
    }

    VAR_7 = FUNC_2 ((const char *)VAR_5, VAR_6, 0, &VAR_8);
    FUNC_0 (VAR_5);
    if (!VAR_7) {
        FUNC_6 ("Failed to load fs json object: %s.\n", VAR_8.text);
        return ((void*)0);
    }

    VAR_9 = FUNC_3 (VAR_7, "type");

    if (VAR_9 == VAR_1)
        VAR_10 = (SeafFSObject *)FUNC_7 (VAR_2, VAR_7);
    else if (VAR_9 == VAR_0)
        VAR_10 = (SeafFSObject *)FUNC_5 (VAR_2, VAR_7);
    else {
        FUNC_6 ("Invalid fs type %d.\n", VAR_9);
        FUNC_1 (VAR_7);
        return ((void*)0);
    }

    FUNC_1 (VAR_7);

    return VAR_10;
}
