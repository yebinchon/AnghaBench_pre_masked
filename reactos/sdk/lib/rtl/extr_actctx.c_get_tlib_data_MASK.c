
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tlibredirect_data {int dummy; } ;
struct guid_index {int data_offset; } ;
struct TYPE_3__ {scalar_t__ tlib_section; } ;
typedef int BYTE ;
typedef TYPE_1__ ACTIVATION_CONTEXT ;



__attribute__((used)) static inline struct tlibredirect_data *FUNC_0(ACTIVATION_CONTEXT *VAR_0, struct guid_index *VAR_1)
{
    return (struct tlibredirect_data*)((BYTE*)VAR_0->tlib_section + VAR_1->data_offset);
}
