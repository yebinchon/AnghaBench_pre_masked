
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct str_list_entry_t {char* str; int entry; } ;
typedef int str_list_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (int) ;

__attribute__((used)) static str_list_t *FUNC_3(str_list_t *VAR_0, char *VAR_1)
{
    struct str_list_entry_t *VAR_2;

    if (!VAR_1) return VAR_0;
    if (!VAR_0)
    {
        VAR_0 = FUNC_2( sizeof(*VAR_0) );
        FUNC_1( VAR_0 );
    }
    VAR_2 = FUNC_2( sizeof(*VAR_2) );
    VAR_2->str = VAR_1;
    FUNC_0( VAR_0, &VAR_2->entry );
    return VAR_0;
}
