
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int elements_count; struct hlsl_type* type; } ;
struct TYPE_4__ {TYPE_1__ array; } ;
struct hlsl_type {TYPE_2__ e; int modifiers; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hlsl_type* FUNC_0 (int *,int ,int ,int,int) ;

struct hlsl_type *FUNC_1(struct hlsl_type *VAR_2, unsigned int VAR_3)
{
    struct hlsl_type *VAR_4 = FUNC_0(((void*)0), VAR_0, VAR_1, 1, 1);

    if (!VAR_4)
        return ((void*)0);

    VAR_4->modifiers = VAR_2->modifiers;
    VAR_4->e.array.elements_count = VAR_3;
    VAR_4->e.array.type = VAR_2;
    return VAR_4;
}
