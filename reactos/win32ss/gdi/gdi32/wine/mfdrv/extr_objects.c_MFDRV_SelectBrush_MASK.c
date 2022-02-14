
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct brush_pattern {int dummy; } ;
struct TYPE_6__ {int hdc; } ;
typedef TYPE_1__* PHYSDEV ;
typedef scalar_t__ INT16 ;
typedef int HBRUSH ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__) ;

HBRUSH FUNC_4( PHYSDEV VAR_0, HBRUSH VAR_1, const struct brush_pattern *VAR_2 )
{
    INT16 VAR_3;

    VAR_3 = FUNC_2(VAR_0, VAR_1);
    if( VAR_3 < 0 )
    {
        VAR_3 = FUNC_1( VAR_0, VAR_1 );
        if( VAR_3 < 0 )
            return 0;
        FUNC_0(VAR_1, VAR_0->hdc);
    }
    return FUNC_3( VAR_0, VAR_3 ) ? VAR_1 : 0;
}
