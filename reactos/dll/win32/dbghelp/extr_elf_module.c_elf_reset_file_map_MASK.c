
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int * target_copy; int * alternate; int shstrtab; } ;
struct TYPE_4__ {TYPE_1__ elf; } ;
struct image_file_map {TYPE_2__ u; } ;


 int VAR_0 ;

__attribute__((used)) static inline void FUNC_0(struct image_file_map* VAR_1)
{
    VAR_1->u.elf.fd = -1;
    VAR_1->u.elf.shstrtab = VAR_0;
    VAR_1->u.elf.alternate = ((void*)0);
    VAR_1->u.elf.target_copy = ((void*)0);
}
