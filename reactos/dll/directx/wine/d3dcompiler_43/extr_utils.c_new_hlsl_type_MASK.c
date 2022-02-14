
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hlsl_type {char const* name; int type; int base_type; unsigned int dimx; unsigned int dimy; int entry; } ;
typedef enum hlsl_type_class { ____Placeholder_hlsl_type_class } hlsl_type_class ;
typedef enum hlsl_base_type { ____Placeholder_hlsl_base_type } hlsl_base_type ;
struct TYPE_2__ {int types; } ;


 int FUNC_0 (char*) ;
 struct hlsl_type* FUNC_1 (int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *,int *) ;

struct hlsl_type *FUNC_3(const char *VAR_1, enum hlsl_type_class VAR_2,
        enum hlsl_base_type VAR_3, unsigned VAR_4, unsigned VAR_5)
{
    struct hlsl_type *VAR_6;

    VAR_6 = FUNC_1(sizeof(*VAR_6));
    if (!VAR_6)
    {
        FUNC_0("Out of memory\n");
        return ((void*)0);
    }
    VAR_6->name = VAR_1;
    VAR_6->type = VAR_2;
    VAR_6->base_type = VAR_3;
    VAR_6->dimx = VAR_4;
    VAR_6->dimy = VAR_5;

    FUNC_2(&VAR_0.types, &VAR_6->entry);

    return VAR_6;
}
