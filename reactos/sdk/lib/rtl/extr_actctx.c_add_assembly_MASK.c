
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct assembly {int type; } ;
typedef enum assembly_type { ____Placeholder_assembly_type } assembly_type ;
struct TYPE_4__ {int num_assemblies; int allocated_assemblies; struct assembly* assemblies; } ;
typedef TYPE_1__ ACTIVATION_CONTEXT ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,struct assembly*,unsigned int) ;

__attribute__((used)) static struct assembly *FUNC_4(ACTIVATION_CONTEXT *VAR_1, enum assembly_type VAR_2)
{
    struct assembly *VAR_3;

    FUNC_0("add_assembly() actctx %p, activeframe ??\n", VAR_1);

    if (VAR_1->num_assemblies == VAR_1->allocated_assemblies)
    {
        void *VAR_4;
        unsigned int VAR_5;
        if (VAR_1->assemblies)
        {
            VAR_5 = VAR_1->allocated_assemblies * 2;
            VAR_4 = FUNC_3( FUNC_2(), VAR_0,
                                     VAR_1->assemblies, VAR_5 * sizeof(*VAR_3) );
        }
        else
        {
            VAR_5 = 4;
            VAR_4 = FUNC_1( FUNC_2(), VAR_0, VAR_5 * sizeof(*VAR_3) );
        }
        if (!VAR_4) return ((void*)0);
        VAR_1->assemblies = VAR_4;
        VAR_1->allocated_assemblies = VAR_5;
    }

    VAR_3 = &VAR_1->assemblies[VAR_1->num_assemblies++];
    VAR_3->type = VAR_2;
    return VAR_3;
}
