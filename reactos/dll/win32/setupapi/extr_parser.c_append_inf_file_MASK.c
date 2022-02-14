
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inf_file {struct inf_file* next; } ;


 struct inf_file* FUNC_0 (void**,struct inf_file*,int *) ;

__attribute__((used)) static void FUNC_1( struct inf_file *VAR_0, struct inf_file *VAR_1 )
{
    struct inf_file **VAR_2 = &VAR_0->next;
    VAR_1->next = ((void*)0);

    for (;;)
    {
        struct inf_file *VAR_3 = FUNC_0( (void **)VAR_2, VAR_1, ((void*)0) );
        if (!VAR_3) return;
        VAR_2 = &VAR_3->next;
    }
}
