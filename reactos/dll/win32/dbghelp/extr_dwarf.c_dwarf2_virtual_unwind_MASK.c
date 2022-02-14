
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_13__ ;
typedef struct TYPE_16__ TYPE_10__ ;


struct module_pair {TYPE_10__* effective; int pcs; int requested; } ;
struct TYPE_23__ {TYPE_4__* dwarf2_info; } ;
struct module_format {TYPE_5__ u; } ;
struct TYPE_18__ {scalar_t__* rules; } ;
struct frame_info {scalar_t__ ip; size_t retaddr_reg; TYPE_15__ state; int lsda_encoding; scalar_t__ aug_z_format; int data_align; int code_align; } ;
struct cpu_stack_walk {int hProcess; } ;
typedef int info ;
struct TYPE_24__ {unsigned char* data; unsigned char* end_data; int word_size; } ;
typedef TYPE_6__ dwarf2_traverse_context_t ;
typedef scalar_t__ ULONG_PTR ;
struct TYPE_21__ {unsigned char* address; int size; } ;
struct TYPE_20__ {unsigned char* address; int size; scalar_t__ rva; } ;
struct TYPE_22__ {int word_size; TYPE_3__ debug_frame; TYPE_2__ eh_frame; } ;
struct TYPE_19__ {scalar_t__ BaseOfImage; } ;
struct TYPE_17__ {int (* map_dwarf_register ) (size_t,int ) ;int (* fetch_regname ) (int ) ;} ;
struct TYPE_16__ {scalar_t__ reloc_delta; TYPE_1__ module; struct module_format** format_info; } ;
typedef scalar_t__ DWORD_PTR ;
typedef int CONTEXT ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,scalar_t__,...) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_10__*,struct cpu_stack_walk*,int *,TYPE_15__*,scalar_t__*) ;
 TYPE_13__* VAR_5 ;
 int FUNC_2 (scalar_t__,TYPE_10__*,scalar_t__,TYPE_6__*,TYPE_6__*,struct frame_info*,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (TYPE_6__*,scalar_t__,struct frame_info*) ;
 int FUNC_6 (struct frame_info*,int ,int) ;
 int FUNC_7 (int ,scalar_t__,int ) ;
 int FUNC_8 (struct module_pair*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (size_t,int ) ;

BOOL FUNC_12(struct cpu_stack_walk* VAR_6, ULONG_PTR VAR_7, CONTEXT* VAR_8, ULONG_PTR* VAR_9)
{
    struct module_pair VAR_10;
    struct frame_info VAR_11;
    dwarf2_traverse_context_t VAR_12, VAR_13;
    struct module_format* VAR_14;
    const unsigned char* VAR_15;
    DWORD_PTR VAR_16;

    if (!(VAR_10.pcs = FUNC_9(VAR_6->hProcess)) ||
        !(VAR_10.requested = FUNC_7(VAR_10.pcs, VAR_7, VAR_1)) ||
        !FUNC_8(&VAR_10))
        return VAR_2;
    VAR_14 = VAR_10.effective->format_info[VAR_0];
    if (!VAR_14) return VAR_2;
    FUNC_6(&VAR_11, 0, sizeof(VAR_11));
    VAR_13.data = VAR_14->u.dwarf2_info->eh_frame.address;
    VAR_13.end_data = VAR_13.data + VAR_14->u.dwarf2_info->eh_frame.size;
    VAR_13.word_size = VAR_14->u.dwarf2_info->word_size;




    VAR_16 = VAR_10.effective->module.BaseOfImage + VAR_14->u.dwarf2_info->eh_frame.rva -
        (DWORD_PTR)VAR_14->u.dwarf2_info->eh_frame.address;
    if (!FUNC_2(VAR_7, VAR_10.effective, VAR_16, &VAR_13, &VAR_12, &VAR_11, VAR_4))
    {
        VAR_13.data = VAR_14->u.dwarf2_info->debug_frame.address;
        VAR_13.end_data = VAR_13.data + VAR_14->u.dwarf2_info->debug_frame.size;
        VAR_13.word_size = VAR_14->u.dwarf2_info->word_size;
        VAR_16 = VAR_10.effective->reloc_delta;
        if (!FUNC_2(VAR_7, VAR_10.effective, VAR_16, &VAR_13, &VAR_12, &VAR_11, VAR_2))
        {
            FUNC_0("Couldn't find information for %lx\n", VAR_7);
            return VAR_2;
        }
    }

    FUNC_0("function %lx/%lx code_align %lu data_align %ld retaddr %s\n",
          VAR_7, VAR_11.ip, VAR_11.code_align, VAR_11.data_align,
          VAR_5->fetch_regname(VAR_5->map_dwarf_register(VAR_11.retaddr_reg, VAR_4)));


    if (VAR_7 == VAR_11.ip) return VAR_2;
    FUNC_5(&VAR_12, VAR_7, &VAR_11);

    if (VAR_11.aug_z_format)
    {
        ULONG_PTR VAR_17 = FUNC_3(&VAR_13);
        VAR_15 = VAR_13.data + VAR_17;
    }
    else VAR_15 = ((void*)0);
    FUNC_4(&VAR_13, VAR_11.lsda_encoding);
    if (VAR_15) VAR_13.data = VAR_15;

    FUNC_5(&VAR_13, VAR_7, &VAR_11);


    if (VAR_11.state.rules[VAR_11.retaddr_reg] == VAR_3) return VAR_2;

    FUNC_1(VAR_10.effective, VAR_6, VAR_8, &VAR_11.state, VAR_9);

    return VAR_4;
}
