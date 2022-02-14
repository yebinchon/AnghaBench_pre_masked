
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_14__ ;
typedef struct TYPE_20__ TYPE_13__ ;
typedef struct TYPE_19__ TYPE_12__ ;
typedef struct TYPE_18__ TYPE_11__ ;
typedef struct TYPE_17__ TYPE_10__ ;


struct process {int handle; } ;
struct TYPE_18__ {struct elf_module_info* elf_info; } ;
struct module_format {TYPE_11__ u; int * loc_compute; int remove; TYPE_14__* module; } ;
struct image_section_map {size_t sidx; TYPE_8__* fmap; } ;
struct TYPE_30__ {unsigned long elf_start; int fd; int elf_size; TYPE_2__* sect; } ;
struct TYPE_17__ {TYPE_9__ elf; } ;
struct image_file_map {TYPE_10__ u; } ;
struct elf_module_info {unsigned long elf_addr; int elf_mark; scalar_t__ elf_loader; struct image_file_map file_map; } ;
struct elf_info {int flags; int * module_name; TYPE_14__* module; int dbg_hdr_addr; } ;
typedef int dyn ;
typedef int WCHAR ;
struct TYPE_27__ {TYPE_5__* sect; } ;
struct TYPE_28__ {TYPE_6__ elf; } ;
struct TYPE_29__ {TYPE_7__ u; } ;
struct TYPE_25__ {unsigned long sh_addr; } ;
struct TYPE_26__ {TYPE_4__ shdr; } ;
struct TYPE_24__ {int d_ptr; } ;
struct TYPE_22__ {scalar_t__ sh_addr; } ;
struct TYPE_23__ {TYPE_1__ shdr; } ;
struct TYPE_19__ {unsigned long BaseOfImage; int SymType; } ;
struct TYPE_21__ {unsigned long reloc_delta; TYPE_12__ module; struct module_format** format_info; } ;
struct TYPE_20__ {scalar_t__ d_tag; TYPE_3__ d_un; } ;
typedef TYPE_13__ Elf_Dyn ;
typedef int BOOL ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 () ;
 void* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,struct module_format*) ;
 int FUNC_3 (int ,char*,TYPE_13__*,int,unsigned long*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (char*,unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;
 int VAR_11 ;
 int FUNC_5 (char*,unsigned long) ;
 int FUNC_6 (int ) ;
 int VAR_12 ;
 unsigned long FUNC_7 (int const*) ;
 int FUNC_8 (struct image_file_map*) ;
 scalar_t__ FUNC_9 (struct image_file_map*,char*,int ,struct image_section_map*) ;
 unsigned long FUNC_10 (struct image_section_map*) ;
 int FUNC_11 (TYPE_14__*) ;
 int VAR_13 ;
 int FUNC_12 (struct image_file_map*) ;
 int FUNC_13 (int const*) ;
 TYPE_14__* FUNC_14 (struct process*,int const*,int ,int ,unsigned long,int ,int ,int ) ;
 int FUNC_15 (int *,int const*) ;

__attribute__((used)) static BOOL FUNC_16(struct process* VAR_14, const WCHAR* VAR_15,
                                    struct image_file_map* VAR_16, unsigned long VAR_17,
                                    unsigned long VAR_18, struct elf_info* VAR_19)
{
    BOOL VAR_20 = VAR_7;

    if (VAR_19->flags & VAR_4)
    {
        struct image_section_map VAR_21;

        if (FUNC_9(VAR_16, ".dynamic", VAR_8, &VAR_21))
        {
            Elf_Dyn VAR_22;
            char* VAR_23 = (char*)VAR_16->u.elf.sect[VAR_21.sidx].shdr.sh_addr;
            unsigned long VAR_24;

            if (VAR_17) VAR_23 += VAR_17 - VAR_16->u.elf.elf_start;

            do
            {
                if (!FUNC_3(VAR_14->handle, VAR_23, &VAR_22, sizeof(VAR_22), &VAR_24) ||
                    VAR_24 != sizeof(VAR_22))
                    return VAR_20;
                if (VAR_22.d_tag == VAR_2)
                {
                    VAR_19->dbg_hdr_addr = VAR_22.d_un.d_ptr;
                    if (VAR_17 == 0 && VAR_18 == 0)

                        VAR_18 = VAR_21.fmap->u.elf.sect[VAR_21.sidx].shdr.sh_addr;
                    break;
                }
                VAR_23 += sizeof(VAR_22);
            } while (VAR_22.d_tag != VAR_3);
            if (VAR_22.d_tag == VAR_3) return VAR_20;
 }
        FUNC_8(VAR_16);
    }

    if (VAR_19->flags & VAR_5)
    {
        struct elf_module_info *VAR_25;
        struct module_format* VAR_26;
        struct image_section_map VAR_27;
        unsigned long VAR_28 = VAR_17;

        if (FUNC_9(VAR_16, ".dynamic", VAR_8, &VAR_27))
        {
            unsigned long VAR_29 = FUNC_10(&VAR_27);

            FUNC_4("For module %s, got ELF (start=%lx dyn=%lx), link_map (start=%lx dyn=%lx)\n",
                  FUNC_7(VAR_15), (unsigned long)VAR_16->u.elf.elf_start, VAR_29,
                  VAR_17, VAR_18);
            if (VAR_18 && VAR_17 + VAR_29 != VAR_18)
            {
                FUNC_5("\thave to relocate: %lx\n", VAR_18 - VAR_29);
                VAR_28 = VAR_18 - VAR_29;
            }
 } else FUNC_5("For module %s, no .dynamic section\n", FUNC_7(VAR_15));
        FUNC_8(VAR_16);

        VAR_26 = FUNC_1(FUNC_0(), 0,
                          sizeof(struct module_format) + sizeof(struct elf_module_info));
        if (!VAR_26) return VAR_7;
        VAR_19->module = FUNC_14(VAR_14, VAR_15, VAR_1, VAR_7, VAR_28,
                                      VAR_16->u.elf.elf_size, 0, FUNC_6(VAR_16->u.elf.fd));
        if (!VAR_19->module)
        {
            FUNC_2(FUNC_0(), 0, VAR_26);
            return VAR_7;
        }
        VAR_19->module->reloc_delta = VAR_19->module->module.BaseOfImage - VAR_16->u.elf.elf_start;
        VAR_25 = (void*)(VAR_26 + 1);
        VAR_19->module->format_info[VAR_0] = VAR_26;
        VAR_26->module = VAR_19->module;
        VAR_26->remove = VAR_13;
        VAR_26->loc_compute = ((void*)0);
        VAR_26->u.elf_info = VAR_25;

        VAR_25->elf_addr = VAR_17;

        VAR_25->file_map = *VAR_16;
        FUNC_12(VAR_16);
        if (VAR_12 & VAR_9)
        {
            VAR_19->module->module.SymType = VAR_10;
            VAR_20 = VAR_11;
        }
        else VAR_20 = FUNC_11(VAR_19->module);

        VAR_25->elf_mark = 1;
        VAR_25->elf_loader = 0;
    } else VAR_20 = VAR_11;

    if (VAR_19->flags & VAR_6)
    {
        WCHAR* VAR_30;
        VAR_30 = FUNC_1(FUNC_0(), 0, (FUNC_13(VAR_15) + 1) * sizeof(WCHAR));
        if (VAR_30)
        {
            FUNC_15(VAR_30, VAR_15);
            VAR_19->module_name = VAR_30;
        }
        else VAR_20 = VAR_7;
    }

    return VAR_20;
}
