
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct assembly {int num_compat_contexts; int * compat_contexts; } ;
typedef int * PCOMPATIBILITY_CONTEXT_ELEMENT ;
typedef int COMPATIBILITY_CONTEXT_ELEMENT ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,int) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,int *,unsigned int) ;

__attribute__((used)) static PCOMPATIBILITY_CONTEXT_ELEMENT FUNC_3(struct assembly* VAR_1)
{
    void *VAR_2;
    if (VAR_1->num_compat_contexts)
    {
        unsigned int VAR_3 = VAR_1->num_compat_contexts + 1;
        VAR_2 = FUNC_2( FUNC_1(), VAR_0,
                                 VAR_1->compat_contexts,
                                 VAR_3 * sizeof(COMPATIBILITY_CONTEXT_ELEMENT) );
    }
    else
    {
        VAR_2 = FUNC_0( FUNC_1(), VAR_0, sizeof(COMPATIBILITY_CONTEXT_ELEMENT) );
    }
    if (!VAR_2) return ((void*)0);
    VAR_1->compat_contexts = VAR_2;
    return &VAR_1->compat_contexts[VAR_1->num_compat_contexts++];
}
