
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct image_section_map {size_t sidx; TYPE_4__* fmap; } ;
struct TYPE_11__ {scalar_t__ sh_addr; } ;
struct TYPE_12__ {TYPE_5__ shdr; } ;
struct TYPE_7__ {size_t e_shnum; } ;
struct TYPE_8__ {scalar_t__ elf_start; TYPE_6__* sect; TYPE_1__ elfhdr; } ;
struct TYPE_9__ {TYPE_2__ elf; } ;
struct TYPE_10__ {TYPE_3__ u; } ;
typedef scalar_t__ DWORD_PTR ;



DWORD_PTR FUNC_0(const struct image_section_map* VAR_0)
{
    if (VAR_0->sidx < 0 || VAR_0->sidx >= VAR_0->fmap->u.elf.elfhdr.e_shnum)
        return 0;
    return VAR_0->fmap->u.elf.sect[VAR_0->sidx].shdr.sh_addr - VAR_0->fmap->u.elf.elf_start;
}
