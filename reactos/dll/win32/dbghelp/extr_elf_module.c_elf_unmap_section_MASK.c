
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct image_section_map {size_t sidx; TYPE_2__* fmap; } ;
struct TYPE_8__ {size_t e_shnum; } ;
struct elf_file_map {TYPE_5__* sect; int target_copy; TYPE_3__ elfhdr; } ;
struct TYPE_9__ {size_t sh_offset; size_t sh_size; } ;
struct TYPE_10__ {scalar_t__ mapped; TYPE_4__ shdr; } ;
struct TYPE_6__ {struct elf_file_map elf; } ;
struct TYPE_7__ {TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,size_t) ;
 size_t FUNC_2 (int ) ;

void FUNC_3(struct image_section_map* VAR_2)
{
    struct elf_file_map* VAR_3 = &VAR_2->fmap->u.elf;

    if (VAR_2->sidx >= 0 && VAR_2->sidx < VAR_3->elfhdr.e_shnum && !VAR_3->target_copy &&
        VAR_3->sect[VAR_2->sidx].mapped != VAR_0)
    {
        size_t VAR_4 = FUNC_2( VAR_1 );
        size_t VAR_5 = VAR_3->sect[VAR_2->sidx].shdr.sh_offset & ~(VAR_4 - 1);
        size_t VAR_6 = ((VAR_3->sect[VAR_2->sidx].shdr.sh_offset +
                 VAR_3->sect[VAR_2->sidx].shdr.sh_size + VAR_4 - 1) & ~(VAR_4 - 1)) - VAR_5;
        if (FUNC_1((char*)VAR_3->sect[VAR_2->sidx].mapped, VAR_6) < 0)
            FUNC_0("Couldn't unmap the section\n");
        VAR_3->sect[VAR_2->sidx].mapped = VAR_0;
    }
}
