
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_section {char* name; int entry; int values; struct inf_file* file; } ;
struct inf_file {int sections; } ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct inf_section* FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char*,char**,int ) ;

__attribute__((used)) static HRESULT FUNC_5(struct inf_file *VAR_3, char *VAR_4, char *VAR_5, struct inf_section **VAR_6)
{
    struct inf_section *VAR_7;
    char *VAR_8;
    char *VAR_9;

    if (*VAR_4 != '[')
        return VAR_2;

    VAR_4++;

    VAR_8 = FUNC_3(VAR_4, ';');
    if (VAR_8)
    {
        *VAR_8 = 0;
        VAR_4 = FUNC_4(VAR_4, &VAR_5, VAR_1);
    }

    if (*VAR_5 != ']')
        return VAR_2;

    *VAR_5 = 0;
    VAR_9 = FUNC_4(VAR_4, ((void*)0), VAR_1);
    if (!VAR_9) return VAR_2;

    VAR_7 = FUNC_0(sizeof(*VAR_7));
    if (!VAR_7) return VAR_0;

    VAR_7->name = VAR_9;
    VAR_7->file = VAR_3;
    FUNC_2(&VAR_7->values);

    FUNC_1(&VAR_3->sections, &VAR_7->entry);

    *VAR_6 = VAR_7;
    return VAR_2;
}
