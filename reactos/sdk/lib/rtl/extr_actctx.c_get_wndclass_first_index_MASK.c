
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct string_index {int dummy; } ;
struct TYPE_5__ {TYPE_1__* wndclass_section; } ;
struct TYPE_4__ {int index_offset; } ;
typedef int BYTE ;
typedef TYPE_2__ ACTIVATION_CONTEXT ;



__attribute__((used)) static inline struct string_index *FUNC_0(ACTIVATION_CONTEXT *VAR_0)
{
    return (struct string_index*)((BYTE*)VAR_0->wndclass_section + VAR_0->wndclass_section->index_offset);
}
