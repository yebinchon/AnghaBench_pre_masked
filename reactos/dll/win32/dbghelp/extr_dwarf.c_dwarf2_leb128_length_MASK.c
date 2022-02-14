
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* data; } ;
typedef TYPE_1__ dwarf2_traverse_context_t ;



__attribute__((used)) static unsigned FUNC_0(const dwarf2_traverse_context_t* VAR_0)
{
    unsigned VAR_1;
    for (VAR_1 = 0; VAR_0->data[VAR_1] & 0x80; VAR_1++);
    return VAR_1 + 1;
}
