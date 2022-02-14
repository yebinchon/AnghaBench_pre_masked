
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GList ;


 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (int *,char const*) ;

GList*
FUNC_4 (GList *VAR_0, const char *VAR_1)
{
    FUNC_1 (VAR_1 != ((void*)0), VAR_0);

    if (FUNC_3(VAR_0, VAR_1))
        return VAR_0;

    VAR_0 = FUNC_0 (VAR_0, FUNC_2(VAR_1));
    return VAR_0;
}
