
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned short type_offset; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ NDR_PARAM_OIF ;


 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (unsigned int*) ;

__attribute__((used)) static unsigned short FUNC_2( int VAR_0 )
{
    unsigned int VAR_1;
    const NDR_PARAM_OIF *VAR_2 = FUNC_1( &VAR_1 );

    FUNC_0( VAR_0 < VAR_1 );
    return VAR_2[VAR_0].u.type_offset;
}
