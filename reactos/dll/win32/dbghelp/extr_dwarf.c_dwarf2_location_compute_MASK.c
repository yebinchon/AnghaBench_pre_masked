
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int name; } ;
struct symt_function {TYPE_3__* container; TYPE_1__ hash_elt; } ;
struct symt_compiland {scalar_t__ address; } ;
struct TYPE_11__ {scalar_t__ InstructionOffset; } ;
struct process {int handle; TYPE_2__ ctx_frame; } ;
struct TYPE_15__ {TYPE_5__* dwarf2_info; } ;
struct module_format {TYPE_6__ u; } ;
struct location {int kind; int reg; scalar_t__ offset; } ;
struct TYPE_16__ {int word_size; int const* data; int end_data; } ;
typedef TYPE_7__ dwarf2_traverse_context_t ;
struct TYPE_13__ {scalar_t__ address; } ;
struct TYPE_14__ {int word_size; TYPE_4__ debug_loc; } ;
struct TYPE_12__ {scalar_t__ tag; } ;
typedef scalar_t__ DWORD_PTR ;
typedef int BYTE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_7__*,struct location*,int ,struct location*) ;
 int FUNC_2 (struct module_format const*,scalar_t__,scalar_t__,TYPE_7__*) ;
 int FUNC_3 (struct process*,struct module_format const*,struct symt_function const*,scalar_t__,struct location*) ;


 int VAR_1 ;
 int VAR_2 ;



__attribute__((used)) static void FUNC_4(struct process* VAR_3,
                                    const struct module_format* VAR_4,
                                    const struct symt_function* VAR_5,
                                    struct location* VAR_6)
{
    struct location VAR_7;
    DWORD_PTR VAR_8;
    int VAR_9;
    dwarf2_traverse_context_t VAR_10;

    if (!VAR_5->container || VAR_5->container->tag != VAR_0)
    {
        FUNC_0("We'd expect function %s's container to exist and be a compiland\n", VAR_5->hash_elt.name);
        VAR_9 = VAR_1;
    }
    else
    {

        VAR_8 = VAR_3->ctx_frame.InstructionOffset - ((struct symt_compiland*)VAR_5->container)->address;

        if ((VAR_9 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_8, &VAR_7)) == 0)
        {
            switch (VAR_6->kind)
            {
            case 130:

                if (FUNC_2(VAR_4,
                                          VAR_4->u.dwarf2_info->debug_loc.address + VAR_6->offset,
                                          VAR_8, &VAR_10))
                    goto do_compute;
                VAR_9 = VAR_2;
                break;
            case 131:

                {
                    unsigned* VAR_11 = (unsigned*)VAR_6->offset;

                    VAR_10.data = (const BYTE*)(VAR_11 + 1);
                    VAR_10.end_data = VAR_10.data + *VAR_11;
                    VAR_10.word_size = VAR_4->u.dwarf2_info->word_size;
                }
            do_compute:

                VAR_9 = FUNC_1(&VAR_10, VAR_6, VAR_3->handle, &VAR_7);
                break;
            case 129:
            case 128:

                break;
            default:
                FUNC_0("Unsupported local kind %d\n", VAR_6->kind);
                VAR_9 = VAR_1;
            }
        }
    }
    if (VAR_9 < 0)
    {
        VAR_6->kind = 129;
        VAR_6->reg = VAR_9;
    }
}
