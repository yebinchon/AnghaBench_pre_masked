
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct parser {int * hkey; int * key_name; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct parser *VAR_0)
{
    if (VAR_0->hkey)
    {
        FUNC_1(VAR_0->key_name);
        VAR_0->key_name = ((void*)0);

        FUNC_0(VAR_0->hkey);
        VAR_0->hkey = ((void*)0);
    }
}
