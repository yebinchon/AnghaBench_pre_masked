
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int * hkey; int key_name; } ;
typedef int WCHAR ;
typedef scalar_t__ LONG ;
typedef int HKEY ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int *,int ,int *,int ,int ,int *,int **,int *) ;
 int FUNC_1 (struct parser*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int **) ;

__attribute__((used)) static LONG FUNC_6(struct parser *VAR_4, WCHAR *VAR_5)
{
    HKEY VAR_6;
    WCHAR *VAR_7;
    LONG VAR_8;

    FUNC_1(VAR_4);


    if (!VAR_5 || !(VAR_6 = FUNC_5(VAR_5, &VAR_7)))
        return VAR_0;

    VAR_8 = FUNC_0(VAR_6, VAR_7, 0, ((void*)0), VAR_3,
                          VAR_2, ((void*)0), &VAR_4->hkey, ((void*)0));

    if (VAR_8 == VAR_1)
    {
        VAR_4->key_name = FUNC_2((FUNC_4(VAR_5) + 1) * sizeof(WCHAR));
        FUNC_3(VAR_4->key_name, VAR_5);
    }
    else
        VAR_4->hkey = ((void*)0);

    return VAR_8;
}
