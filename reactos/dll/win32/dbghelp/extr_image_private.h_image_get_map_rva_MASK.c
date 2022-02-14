
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct image_section_map {TYPE_1__* fmap; } ;
struct TYPE_2__ {int modtype; } ;
typedef int DWORD_PTR ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct image_section_map const*) ;
 int FUNC_2 (struct image_section_map const*) ;
 int FUNC_3 (struct image_section_map const*) ;

__attribute__((used)) static inline DWORD_PTR FUNC_4(const struct image_section_map* VAR_0)
{
    if (!VAR_0->fmap) return 0;
    switch (VAR_0->fmap->modtype)
    {

    case 130: return FUNC_1(VAR_0);
    case 129: return FUNC_2(VAR_0);

    case 128: return FUNC_3(VAR_0);
    default: FUNC_0(0); return 0;
    }
}
