
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; char const* c_name; } ;
typedef TYPE_1__ type_t ;
typedef enum name_type { ____Placeholder_name_type } name_type ;




 int FUNC_0 (int ) ;

const char *FUNC_1(const type_t *VAR_0, enum name_type VAR_1)
{
    switch(VAR_1) {
    case 128:
        return VAR_0->name;
    case 129:
        return VAR_0->c_name;
    }

    FUNC_0(0);
    return ((void*)0);
}
