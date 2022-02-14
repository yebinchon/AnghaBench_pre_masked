
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct image_section_map {int sidx; struct image_file_map* fmap; } ;
struct TYPE_4__ {int e_shstrndx; } ;
struct TYPE_5__ {struct image_file_map* alternate; int shstrtab; TYPE_1__ elfhdr; } ;
struct TYPE_6__ {TYPE_2__ elf; } ;
struct image_file_map {TYPE_3__ u; } ;


 int VAR_0 ;
 int FUNC_0 (struct image_section_map*) ;

__attribute__((used)) static void FUNC_1(struct image_file_map* VAR_1)
{
    struct image_section_map VAR_2;

    while (VAR_1)
    {
        VAR_2.fmap = VAR_1;
        VAR_2.sidx = VAR_1->u.elf.elfhdr.e_shstrndx;
        FUNC_0(&VAR_2);
        VAR_1->u.elf.shstrtab = VAR_0;
        VAR_1 = VAR_1->u.elf.alternate;
    }
}
