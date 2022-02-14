
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int js_State ;
struct TYPE_5__ {TYPE_1__* mpctx; } ;
struct TYPE_4__ {int global; } ;
typedef int FILE ;


 int FUNC_0 (TYPE_2__*,char*,char const*) ;
 int FUNC_1 (void*,int *) ;
 int * FUNC_2 (char const*,char*) ;
 int FUNC_3 (char const*,int,int,int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 int FUNC_5 (int *,char*,char const*) ;
 char* FUNC_6 (int *,int) ;
 char* FUNC_7 (void*,int ,char const*) ;
 int FUNC_8 (char const*) ;
 char const* FUNC_9 (char const*,char const*) ;

__attribute__((used)) static void FUNC_10(js_State *VAR_0, void *VAR_1)
{
    static const char *VAR_2 = "file://";
    const char *VAR_3 = FUNC_6(VAR_0, 1);
    const char *VAR_4 = FUNC_6(VAR_0, 2);
    if (FUNC_9(VAR_3, VAR_2) != VAR_3)
        FUNC_5(VAR_0, "File name must be prefixed with '%s'", VAR_2);
    VAR_3 += FUNC_8(VAR_2);
    VAR_3 = FUNC_7(VAR_1, FUNC_4(VAR_0)->mpctx->global, VAR_3);
    FUNC_0(FUNC_4(VAR_0), "Writing file '%s'\n", VAR_3);

    FILE *VAR_5 = FUNC_2(VAR_3, "wb");
    if (!VAR_5)
        FUNC_5(VAR_0, "Cannot open file for writing: '%s'", VAR_3);
    FUNC_1(VAR_1, VAR_5);

    int VAR_6 = FUNC_8(VAR_4);
    int VAR_7 = FUNC_3(VAR_4, 1, VAR_6, VAR_5);
    if (VAR_6 != VAR_7)
        FUNC_5(VAR_0, "Cannot write to file: '%s'", VAR_3);
}
