
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int gboolean ;
typedef int GList ;
typedef int GDir ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,int ,int *) ;
 char* FUNC_2 (int *) ;
 int FUNC_3 (char const*,char const*,int *) ;

__attribute__((used)) static gboolean
FUNC_4 (const char *VAR_2, GList *VAR_3)
{
    GDir *VAR_4;
    const char *VAR_5;
    gboolean VAR_6 = VAR_1;

    VAR_4 = FUNC_1 (VAR_2, 0, ((void*)0));
    if (!VAR_4) {
        return VAR_0;
    }

    while ((VAR_5 = FUNC_2(VAR_4)) != ((void*)0)) {
        if (!FUNC_3(VAR_2, VAR_5, VAR_3)) {
            VAR_6 = VAR_0;
            break;
        }
    }
    FUNC_0 (VAR_4);

    return VAR_6;
}
