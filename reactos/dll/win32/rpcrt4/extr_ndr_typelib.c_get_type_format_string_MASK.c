
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* pStubDesc; } ;
struct TYPE_6__ {size_t type_offset; } ;
struct TYPE_8__ {TYPE_1__ u; } ;
struct TYPE_7__ {unsigned char const* pFormatTypes; } ;
typedef TYPE_3__ NDR_PARAM_OIF ;


 TYPE_3__* FUNC_0 (unsigned int*) ;
 TYPE_4__* FUNC_1 () ;

__attribute__((used)) static const unsigned char *FUNC_2( size_t *VAR_0 )
{
    unsigned int VAR_1;
    const NDR_PARAM_OIF *VAR_2 = FUNC_0( &VAR_1 );

    *VAR_0 = VAR_2[VAR_1 - 1].u.type_offset;
    return FUNC_1()->pStubDesc->pFormatTypes;
}
