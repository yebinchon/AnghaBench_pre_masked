
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fd; } ;
struct TYPE_6__ {TYPE_1__ elf; } ;
struct image_file_map {TYPE_2__ u; } ;
struct TYPE_7__ {scalar_t__ load_addr; int handle; } ;
struct TYPE_8__ {TYPE_3__ process; } ;
struct elf_map_file_data {int kind; TYPE_4__ u; } ;
typedef scalar_t__ off_t ;
typedef size_t SIZE_T ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,void*,void*,size_t,size_t*) ;
 int FUNC_1 (int ) ;


 size_t FUNC_2 (int ,void*,size_t,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_3(struct image_file_map* VAR_1, struct elf_map_file_data* VAR_2,
                              void* VAR_3, size_t VAR_4, off_t VAR_5)
{
    SIZE_T VAR_6;

    switch (VAR_2->kind)
    {
    case 129:
        return FUNC_2(VAR_1->u.elf.fd, VAR_3, VAR_4, VAR_5) == VAR_4;
    case 128:
        return FUNC_0(VAR_2->u.process.handle,
                                 (void*)((unsigned long)VAR_2->u.process.load_addr + (unsigned long)VAR_5),
                                 VAR_3, VAR_4, &VAR_6) && VAR_6 == VAR_4;
    default:
        FUNC_1(0);
        return VAR_0;
    }
}
