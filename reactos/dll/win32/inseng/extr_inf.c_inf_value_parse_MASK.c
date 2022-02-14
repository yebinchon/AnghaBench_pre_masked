
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_value {char* key; char* value; int entry; struct inf_section* section; } ;
struct inf_section {int values; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct inf_value* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 char* FUNC_2 (char*,char) ;
 char* FUNC_3 (char*,int *,int ) ;

__attribute__((used)) static HRESULT FUNC_4(struct inf_section *VAR_4, char *VAR_5)
{
    struct inf_value *VAR_6;
    char *VAR_7, *VAR_8, *VAR_9;

    VAR_9 = FUNC_2(VAR_5, '=');
    if (!VAR_9) return VAR_2;

    *VAR_9 = 0;
    VAR_7 = VAR_5;
    VAR_8 = VAR_9 + 1;

    VAR_7 = FUNC_3(VAR_7, ((void*)0), VAR_1);
    VAR_8 = FUNC_3(VAR_8, ((void*)0), VAR_3);

    VAR_6 = FUNC_0(sizeof(*VAR_6));
    if (!VAR_6) return VAR_0;

    VAR_6->key = VAR_7;
    VAR_6->value = VAR_8;
    VAR_6->section = VAR_4;

    FUNC_1(&VAR_4->values, &VAR_6->entry);
    return VAR_2;
}
