
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


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char const*,int,int ,TYPE_1__*) ;
 int FUNC_3 (int *,char*) ;
 scalar_t__ FUNC_4 (int *,int,int **,int*) ;
 int FUNC_5 (char*,char const*) ;

__attribute__((used)) static int
FUNC_6 (const char *VAR_1, uint8_t *VAR_2, int VAR_3)
{
    guint8 *VAR_4;
    int VAR_5;
    json_t *VAR_6;
    json_error_t VAR_7;
    int VAR_8;

    if (FUNC_4 (VAR_2, VAR_3, &VAR_4, &VAR_5) < 0) {
        FUNC_5 ("Failed to decompress fs object %s.\n", VAR_1);
        return VAR_0;
    }

    VAR_6 = FUNC_2 ((const char *)VAR_4, VAR_5, 0, &VAR_7);
    FUNC_0 (VAR_4);
    if (!VAR_6) {
        FUNC_5 ("Failed to load fs json object: %s.\n", VAR_7.text);
        return VAR_0;
    }

    VAR_8 = FUNC_3 (VAR_6, "type");

    FUNC_1 (VAR_6);
    return VAR_8;
}
