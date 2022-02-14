
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct assembly_version {int revision; int build; int minor; int major; } ;
struct actctx_loader {unsigned int num_dependencies; TYPE_1__* dependencies; } ;
struct TYPE_2__ {int name; struct assembly_version version; int delayed; int optional; } ;
typedef scalar_t__ NTSTATUS ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct actctx_loader*,TYPE_1__*) ;

__attribute__((used)) static NTSTATUS FUNC_2(struct actctx_loader* VAR_2)
{
    NTSTATUS VAR_3 = VAR_0;
    unsigned int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_2->num_dependencies; VAR_4++)
    {
        if (FUNC_1(VAR_2, &VAR_2->dependencies[VAR_4]) != VAR_0)
        {
            if (!VAR_2->dependencies[VAR_4].optional && !VAR_2->dependencies[VAR_4].delayed)
            {
                const struct assembly_version *VAR_5 = &VAR_2->dependencies[VAR_4].version;
                FUNC_0( "Could not find dependent assembly %S (%u.%u.%u.%u)\n",
                    VAR_2->dependencies[VAR_4].name,
                    VAR_5->major, VAR_5->minor, VAR_5->build, VAR_5->revision );
                VAR_3 = VAR_1;
                break;
            }
        }
    }

    return VAR_3;
}
