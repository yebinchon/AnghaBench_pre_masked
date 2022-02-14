
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ word_size; int data; } ;
typedef TYPE_1__ dwarf2_traverse_context_t ;


 unsigned long FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static unsigned long FUNC_1(dwarf2_traverse_context_t* VAR_0)
{
    unsigned long VAR_1 = FUNC_0(VAR_0->data, VAR_0->word_size);
    VAR_0->data += VAR_0->word_size;
    return VAR_1;
}
