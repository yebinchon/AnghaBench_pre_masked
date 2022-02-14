
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t guint ;
typedef int gboolean ;
typedef int GList ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char*,char const*,char const*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**) ;
 char** FUNC_3 (char const*,char*,int ) ;
 size_t FUNC_4 (char**) ;
 scalar_t__ FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (int *,char*,int *) ;

__attribute__((used)) static gboolean
FUNC_7 (const char *VAR_2, const char *VAR_3, GList *VAR_4)
{
    char **VAR_5;
    guint VAR_6;
    guint VAR_7;
    gboolean VAR_8 = VAR_0;

    VAR_5 = FUNC_3 (VAR_3, "/", 0);
    VAR_7 = FUNC_4 (VAR_5);
    for (VAR_6 = 0; VAR_6 < VAR_7; ++VAR_6) {

        if (FUNC_6 (((void*)0), VAR_5[VAR_6], VAR_4)) {
            VAR_8 = VAR_1;
            goto out;
        }
    }

    char *VAR_9 = FUNC_0 ("/", VAR_2, VAR_3, ((void*)0));
    if (FUNC_5 (VAR_4, VAR_9))
        VAR_8 = VAR_1;
    FUNC_1 (VAR_9);

out:
    FUNC_2 (VAR_5);
    return VAR_8;
}
