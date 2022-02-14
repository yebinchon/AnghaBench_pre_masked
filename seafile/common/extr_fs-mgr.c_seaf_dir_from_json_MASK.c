
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int json_t ;
struct TYPE_3__ {char const* text; } ;
typedef TYPE_1__ json_error_t ;
typedef int guint8 ;
typedef int SeafDir ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *,int,int **,int*) ;
 int * FUNC_4 (char const*,int *) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static SeafDir *
FUNC_6 (const char *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    guint8 *VAR_3;
    int VAR_4;
    json_t *VAR_5 = ((void*)0);
    json_error_t VAR_6;
    SeafDir *VAR_7;

    if (FUNC_3 (VAR_1, VAR_2, &VAR_3, &VAR_4) < 0) {
        FUNC_5 ("Failed to decompress dir object %s.\n", VAR_0);
        return ((void*)0);
    }

    VAR_5 = FUNC_2 ((const char *)VAR_3, VAR_4, 0, &VAR_6);
    FUNC_0 (VAR_3);
    if (!VAR_5) {
        FUNC_5 ("Failed to load seafdir json object: %s.\n", VAR_6.text);
        return ((void*)0);
    }

    VAR_7 = FUNC_4 (VAR_0, VAR_5);

    FUNC_1 (VAR_5);
    return VAR_7;
}
