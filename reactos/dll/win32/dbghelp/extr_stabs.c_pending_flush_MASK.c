
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct symt_function {scalar_t__ address; } ;
struct symt_block {int dummy; } ;
struct pending_list {unsigned int num; TYPE_4__* objs; } ;
struct module {int type; } ;
struct TYPE_6__ {scalar_t__ offset; int line_num; int source_idx; scalar_t__ load_offset; } ;
struct TYPE_5__ {int name; int type; int loc; int kind; } ;
struct TYPE_7__ {TYPE_2__ line; TYPE_1__ var; } ;
struct TYPE_8__ {int tag; TYPE_3__ u; } ;


 int VAR_0 ;
 int FUNC_0 (char*,unsigned int) ;


 int FUNC_1 (struct module*,struct symt_function*,int ,int ,scalar_t__) ;
 int FUNC_2 (struct module*,struct symt_function*,int ,int *,struct symt_block*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct pending_list* VAR_1, struct module* VAR_2,
                          struct symt_function* VAR_3, struct symt_block* VAR_4)
{
    unsigned int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_1->num; VAR_5++)
    {
        switch (VAR_1->objs[VAR_5].tag)
        {
        case 128:
            FUNC_2(VAR_2, VAR_3,
                                VAR_1->objs[VAR_5].u.var.kind, &VAR_1->objs[VAR_5].u.var.loc,
                                VAR_4, VAR_1->objs[VAR_5].u.var.type, VAR_1->objs[VAR_5].u.var.name);
            break;
        case 129:
            if (VAR_2->type == VAR_0)
                VAR_1->objs[VAR_5].u.line.offset -= VAR_3->address - VAR_1->objs[VAR_5].u.line.load_offset;
            FUNC_1(VAR_2, VAR_3, VAR_1->objs[VAR_5].u.line.source_idx,
                               VAR_1->objs[VAR_5].u.line.line_num, VAR_1->objs[VAR_5].u.line.offset);
            break;
        default:
            FUNC_0("Unknown pending object tag %u\n", (unsigned)VAR_1->objs[VAR_5].tag);
            break;
        }
    }
    VAR_1->num = 0;
}
