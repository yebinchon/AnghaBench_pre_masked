
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ address; scalar_t__ compressed; } ;
typedef TYPE_1__ dwarf2_section_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int ,void*) ;

__attribute__((used)) static inline void FUNC_2(dwarf2_section_t* VAR_0)
{
    if (VAR_0->compressed)
        FUNC_1(FUNC_0(), 0, (void*)VAR_0->address);
}
