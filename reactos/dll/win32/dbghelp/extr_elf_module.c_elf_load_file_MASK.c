
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct process {int dummy; } ;
struct TYPE_5__ {int elf_start; } ;
struct TYPE_6__ {TYPE_1__ elf; } ;
struct image_file_map {TYPE_2__ u; } ;
struct TYPE_8__ {int const* filename; } ;
struct TYPE_7__ {TYPE_4__ file; } ;
struct elf_map_file_data {TYPE_3__ u; int kind; } ;
struct elf_info {int dummy; } ;
typedef int WCHAR ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int ,unsigned long) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (struct process*,int const*,struct image_file_map*,unsigned long,unsigned long,struct elf_info*) ;
 int FUNC_4 (struct elf_map_file_data*,struct image_file_map*) ;
 int FUNC_5 (struct image_file_map*) ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_6(struct process* VAR_2, const WCHAR* VAR_3,
                          unsigned long VAR_4, unsigned long VAR_5,
                          struct elf_info* VAR_6)
{
    BOOL VAR_7 = VAR_0;
    struct image_file_map VAR_8;
    struct elf_map_file_data VAR_9;

    FUNC_1("Processing elf file '%s' at %08lx\n", FUNC_2(VAR_3), VAR_4);

    VAR_9.kind = VAR_1;
    VAR_9.u.file.filename = VAR_3;
    if (!FUNC_4(&VAR_9, &VAR_8)) return VAR_7;





    if (!VAR_8.u.elf.elf_start && !VAR_4)
        FUNC_0("Relocatable ELF %s, but no load address. Loading at 0x0000000\n",
            FUNC_2(VAR_3));

    VAR_7 = FUNC_3(VAR_2, VAR_3, &VAR_8, VAR_4, VAR_5, VAR_6);

    FUNC_5(&VAR_8);

    return VAR_7;
}
