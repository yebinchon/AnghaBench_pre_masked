
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct image_section_map {size_t sidx; TYPE_3__* fmap; } ;
struct TYPE_6__ {size_t e_shnum; } ;
struct elf_file_map {char const* target_copy; TYPE_5__* sect; int fd; TYPE_1__ elfhdr; } ;
struct TYPE_9__ {scalar_t__ sh_type; size_t sh_offset; size_t sh_size; } ;
struct TYPE_10__ {char const* mapped; TYPE_4__ shdr; } ;
struct TYPE_7__ {struct elf_file_map elf; } ;
struct TYPE_8__ {scalar_t__ modtype; TYPE_2__ u; } ;


 scalar_t__ VAR_0 ;
 char const* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 char const* FUNC_1 (int *,size_t,int ,int ,int ,size_t) ;
 size_t FUNC_2 (int ) ;

const char* FUNC_3(struct image_section_map* VAR_6)
{
    struct elf_file_map* VAR_7 = &VAR_6->fmap->u.elf;
    size_t VAR_8, VAR_9, VAR_10 = FUNC_2( VAR_5 );

    FUNC_0(VAR_6->fmap->modtype == VAR_0);
    if (VAR_6->sidx < 0 || VAR_6->sidx >= VAR_6->fmap->u.elf.elfhdr.e_shnum ||
        VAR_7->sect[VAR_6->sidx].shdr.sh_type == VAR_4)
        return VAR_1;

    if (VAR_7->target_copy)
    {
        return VAR_7->target_copy + VAR_7->sect[VAR_6->sidx].shdr.sh_offset;
    }

    VAR_8 = VAR_7->sect[VAR_6->sidx].shdr.sh_offset & ~(VAR_10 - 1);
    VAR_9 = ((VAR_7->sect[VAR_6->sidx].shdr.sh_offset +
             VAR_7->sect[VAR_6->sidx].shdr.sh_size + VAR_10 - 1) & ~(VAR_10 - 1)) - VAR_8;
    VAR_7->sect[VAR_6->sidx].mapped = FUNC_1(((void*)0), VAR_9, VAR_3, VAR_2,
                                        VAR_7->fd, VAR_8);
    if (VAR_7->sect[VAR_6->sidx].mapped == VAR_1) return VAR_1;
    return VAR_7->sect[VAR_6->sidx].mapped + (VAR_7->sect[VAR_6->sidx].shdr.sh_offset & (VAR_10 - 1));
}
