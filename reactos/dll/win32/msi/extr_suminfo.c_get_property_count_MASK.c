
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_3__ {scalar_t__ vt; } ;
typedef TYPE_1__ PROPVARIANT ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static UINT FUNC_0( const PROPVARIANT *VAR_2 )
{
    UINT VAR_3, VAR_4 = 0;

    if( !VAR_2 )
        return VAR_4;
    for( VAR_3 = 0; VAR_3 < VAR_0; VAR_3++ )
        if( VAR_2[VAR_3].vt != VAR_1 )
            VAR_4++;
    return VAR_4;
}
