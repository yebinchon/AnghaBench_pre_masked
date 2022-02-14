
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct entity_array {int num; int allocated; struct entity* base; } ;
struct entity {int kind; } ;
typedef int DWORD ;


 int VAR_0 ;
 void* FUNC_0 (int ,int ,unsigned int) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,struct entity*,unsigned int) ;

__attribute__((used)) static struct entity* FUNC_3(struct entity_array *VAR_1, DWORD VAR_2)
{
    struct entity* VAR_3;

    if (VAR_1->num == VAR_1->allocated)
    {
        void *VAR_4;
        unsigned int VAR_5;
        if (VAR_1->base)
        {
            VAR_5 = VAR_1->allocated * 2;
            VAR_4 = FUNC_2( FUNC_1(), VAR_0,
                                     VAR_1->base, VAR_5 * sizeof(*VAR_1->base) );
        }
        else
        {
            VAR_5 = 4;
            VAR_4 = FUNC_0( FUNC_1(), VAR_0, VAR_5 * sizeof(*VAR_1->base) );
        }
        if (!VAR_4) return ((void*)0);
        VAR_1->base = VAR_4;
        VAR_1->allocated = VAR_5;
    }
    VAR_3 = &VAR_1->base[VAR_1->num++];
    VAR_3->kind = VAR_2;
    return VAR_3;
}
