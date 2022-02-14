
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct location {int kind; scalar_t__ offset; } ;
struct symt_hierarchy_point {struct location loc; } ;
struct TYPE_5__ {int name; } ;
struct symt_function {TYPE_1__ hash_elt; int vchildren; } ;
struct symt {scalar_t__ tag; } ;
struct process {int handle; } ;
struct TYPE_8__ {TYPE_3__* dwarf2_info; } ;
struct module_format {TYPE_4__ u; } ;
typedef enum location_error { ____Placeholder_location_error } location_error ;
typedef int dwarf2_traverse_context_t ;
struct TYPE_6__ {scalar_t__ address; } ;
struct TYPE_7__ {TYPE_2__ debug_loc; } ;
typedef int DWORD_PTR ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,struct location*,int ,int *) ;
 int FUNC_2 (struct module_format const*,scalar_t__,int ,int *) ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 struct symt** FUNC_3 (int *,unsigned int) ;
 unsigned int FUNC_4 (int *) ;

__attribute__((used)) static enum location_error FUNC_5(struct process* VAR_5,
                                             const struct module_format* VAR_6,
                                             const struct symt_function* VAR_7,
                                             DWORD_PTR VAR_8, struct location* VAR_9)
{
    struct symt** VAR_10 = ((void*)0);
    struct location* VAR_11;
    dwarf2_traverse_context_t VAR_12;
    enum location_error VAR_13;
    unsigned int VAR_14;

    for (VAR_14=0; VAR_14<FUNC_4(&VAR_7->vchildren); VAR_14++)
    {
        VAR_10 = FUNC_3(&VAR_7->vchildren, VAR_14);
        if ((*VAR_10)->tag == VAR_0)
        {
            VAR_11 = &((struct symt_hierarchy_point*)*VAR_10)->loc;


            switch (VAR_11->kind)
            {
            case 128:
            case 129:
                *VAR_9 = *VAR_11;
                break;
            case 130:
                FUNC_0("Searching loclist for %s\n", VAR_7->hash_elt.name);
                if (!FUNC_2(VAR_6,
                                           VAR_6->u.dwarf2_info->debug_loc.address + VAR_11->offset,
                                           VAR_8, &VAR_12))
                    return VAR_2;
                if ((VAR_13 = FUNC_1(&VAR_12, VAR_9, VAR_5->handle, ((void*)0))) < 0) return VAR_13;
                if (VAR_9->kind >= VAR_4)
                {
                    FUNC_0("Couldn't compute runtime frame location\n");
                    return VAR_3;
                }
                break;
            default:
                FUNC_0("Unsupported frame kind %d\n", VAR_11->kind);
                return VAR_1;
            }
            return 0;
        }
    }
    FUNC_0("Couldn't find Custom function point, whilst location list offset is searched\n");
    return VAR_1;
}
