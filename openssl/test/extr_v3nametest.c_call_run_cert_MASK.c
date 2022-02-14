
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_name_fn {int (* fn ) (int *,char const* const) ;int name; } ;
typedef int X509 ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 struct set_name_fn* VAR_0 ;
 char** VAR_1 ;
 int FUNC_5 (int *,char const* const,struct set_name_fn const*) ;
 int FUNC_6 (int *,char const* const) ;

__attribute__((used)) static int FUNC_7(int VAR_2)
{
    int VAR_3 = 0;
    const struct set_name_fn *VAR_4 = &VAR_0[VAR_2];
    X509 *VAR_5;
    const char *const *VAR_6;

    FUNC_0("%s", VAR_4->name);
    for (VAR_6 = VAR_1; *VAR_6 != ((void*)0); VAR_6++) {
        if (!FUNC_1(VAR_5 = FUNC_4())
             || !FUNC_2(VAR_4->fn(VAR_5, *VAR_6))
             || !FUNC_5(VAR_5, *VAR_6, VAR_4))
            VAR_3 = 1;
        FUNC_3(VAR_5);
    }
    return VAR_3 == 0;
}
