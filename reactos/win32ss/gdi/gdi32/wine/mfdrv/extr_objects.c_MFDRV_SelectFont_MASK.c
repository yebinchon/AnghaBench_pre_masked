
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int font ;
typedef int UINT ;
struct TYPE_6__ {int hdc; } ;
typedef TYPE_1__* PHYSDEV ;
typedef int LOGFONTW ;
typedef scalar_t__ INT16 ;
typedef int HFONT ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_4 (TYPE_1__*,scalar_t__) ;

HFONT FUNC_5( PHYSDEV VAR_1, HFONT VAR_2, UINT *VAR_3 )
{
    LOGFONTW VAR_4;
    INT16 VAR_5;

    *VAR_3 = VAR_0;
    VAR_5 = FUNC_3(VAR_1, VAR_2);
    if( VAR_5 < 0 )
    {
        if (!FUNC_1( VAR_2, sizeof(VAR_4), &VAR_4 ))
            return 0;
        VAR_5 = FUNC_2(VAR_1, VAR_2, &VAR_4);
        if( VAR_5 < 0 )
            return 0;
        FUNC_0(VAR_2, VAR_1->hdc);
    }
    return FUNC_4( VAR_1, VAR_5 ) ? VAR_2 : 0;
}
