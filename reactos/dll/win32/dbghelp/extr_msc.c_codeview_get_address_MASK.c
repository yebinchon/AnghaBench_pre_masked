
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct msc_debug_info {int nsect; TYPE_2__* module; TYPE_3__* sectp; } ;
struct TYPE_6__ {unsigned int VirtualAddress; } ;
struct TYPE_4__ {unsigned long BaseOfImage; } ;
struct TYPE_5__ {TYPE_1__ module; } ;
typedef TYPE_3__ IMAGE_SECTION_HEADER ;


 unsigned long FUNC_0 (struct msc_debug_info const*,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_1(const struct msc_debug_info* VAR_0,
                                          unsigned VAR_1, unsigned VAR_2)
{
    int VAR_3 = VAR_0->nsect;
    const IMAGE_SECTION_HEADER* VAR_4 = VAR_0->sectp;

    if (!VAR_1 || VAR_1 > VAR_3) return 0;
    return VAR_0->module->module.BaseOfImage +
        FUNC_0(VAR_0, VAR_4[VAR_1-1].VirtualAddress + VAR_2);
}
