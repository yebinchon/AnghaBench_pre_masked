
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * structure; int * enumeration; int * iface; int * function; } ;
struct TYPE_6__ {TYPE_1__ details; } ;
typedef TYPE_2__ type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__ const*) ;

__attribute__((used)) static inline int FUNC_1(const type_t *VAR_2)
{
    switch (FUNC_0(VAR_2))
    {
    case 134:
        return (VAR_2->details.function != ((void*)0));
    case 133:
        return (VAR_2->details.iface != ((void*)0));
    case 135:
        return (VAR_2->details.enumeration != ((void*)0));
    case 129:
    case 136:
    case 130:
        return (VAR_2->details.structure != ((void*)0));
    case 128:
    case 139:
    case 141:
    case 132:
    case 137:
    case 131:
    case 140:
    case 138:
        return VAR_1;
    }
    return VAR_0;
}
