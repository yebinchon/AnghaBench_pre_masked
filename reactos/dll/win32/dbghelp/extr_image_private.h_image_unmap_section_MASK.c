
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image_section_map {TYPE_1__* fmap; } ;
struct TYPE_2__ {int modtype; } ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct image_section_map*) ;
 int FUNC_2 (struct image_section_map*) ;
 int FUNC_3 (struct image_section_map*) ;

__attribute__((used)) static inline void FUNC_4(struct image_section_map* VAR_0)
{
    if (!VAR_0->fmap) return;
    switch (VAR_0->fmap->modtype)
    {

    case 130: FUNC_1(VAR_0); break;
    case 129: FUNC_2(VAR_0); break;

    case 128: FUNC_3(VAR_0); break;
    default: FUNC_0(0); return;
    }
}
