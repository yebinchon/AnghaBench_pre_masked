
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct image_section_map {scalar_t__ sidx; struct image_file_map* fmap; } ;
struct TYPE_4__ {scalar_t__ e_shnum; } ;
struct TYPE_6__ {int fd; struct image_file_map* alternate; int target_copy; int sect; TYPE_1__ elfhdr; } ;
struct TYPE_5__ {TYPE_3__ elf; } ;
struct image_file_map {TYPE_2__ u; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct image_section_map*) ;

__attribute__((used)) static void FUNC_4(struct image_file_map* VAR_0)
{
    while (VAR_0)
    {
        if (VAR_0->u.elf.fd != -1)
        {
            struct image_section_map VAR_1;
            VAR_1.fmap = VAR_0;
            for (VAR_1.sidx = 0; VAR_1.sidx < VAR_0->u.elf.elfhdr.e_shnum; VAR_1.sidx++)
            {
                FUNC_3(&VAR_1);
            }
            FUNC_1(FUNC_0(), 0, VAR_0->u.elf.sect);
            FUNC_2(VAR_0->u.elf.fd);
        }
        FUNC_1(FUNC_0(), 0, VAR_0->u.elf.target_copy);
        VAR_0 = VAR_0->u.elf.alternate;
    }
}
