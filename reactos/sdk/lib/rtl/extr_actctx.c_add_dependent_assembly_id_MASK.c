
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int revision; int build; int minor; int major; } ;
struct assembly_identity {TYPE_3__ version; int arch; int name; } ;
struct actctx_loader {unsigned int num_dependencies; int allocated_dependencies; struct assembly_identity* dependencies; TYPE_2__* actctx; } ;
struct TYPE_5__ {unsigned int num_assemblies; TYPE_1__* assemblies; } ;
struct TYPE_4__ {struct assembly_identity id; } ;
typedef int BOOL ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ,int ,struct assembly_identity*,unsigned int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (struct assembly_identity*,struct assembly_identity*) ;

__attribute__((used)) static BOOL FUNC_5(struct actctx_loader* VAR_2,
                                      struct assembly_identity* VAR_3)
{
    unsigned int VAR_4;



    for (VAR_4 = 0; VAR_4 < VAR_2->actctx->num_assemblies; VAR_4++)
        if (FUNC_4( VAR_3, &VAR_2->actctx->assemblies[VAR_4].id ))
        {
            FUNC_0( "reusing existing assembly for %S arch %S version %u.%u.%u.%u\n",
                   VAR_3->name, VAR_3->arch, VAR_3->version.major, VAR_3->version.minor,
                   VAR_3->version.build, VAR_3->version.revision );
            return VAR_1;
        }

    for (VAR_4 = 0; VAR_4 < VAR_2->num_dependencies; VAR_4++)
        if (FUNC_4( VAR_3, &VAR_2->dependencies[VAR_4] ))
        {
            FUNC_0( "reusing existing dependency for %S arch %S version %u.%u.%u.%u\n",
                   VAR_3->name, VAR_3->arch, VAR_3->version.major, VAR_3->version.minor,
                   VAR_3->version.build, VAR_3->version.revision );
            return VAR_1;
        }

    if (VAR_2->num_dependencies == VAR_2->allocated_dependencies)
    {
        void *VAR_5;
        unsigned int VAR_6;
        if (VAR_2->dependencies)
        {
            VAR_6 = VAR_2->allocated_dependencies * 2;
            VAR_5 = FUNC_3(FUNC_2(), 0, VAR_2->dependencies,
                                    VAR_6 * sizeof(VAR_2->dependencies[0]));
        }
        else
        {
            VAR_6 = 4;
            VAR_5 = FUNC_1(FUNC_2(), 0, VAR_6 * sizeof(VAR_2->dependencies[0]));
        }
        if (!VAR_5) return VAR_0;
        VAR_2->dependencies = VAR_5;
        VAR_2->allocated_dependencies = VAR_6;
    }
    VAR_2->dependencies[VAR_2->num_dependencies++] = *VAR_3;

    return VAR_1;
}
