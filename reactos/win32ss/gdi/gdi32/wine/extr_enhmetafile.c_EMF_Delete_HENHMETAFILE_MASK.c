
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* emh; scalar_t__ on_disk; } ;
typedef int HENHMETAFILE ;
typedef TYPE_1__ ENHMETAFILEOBJ ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4( HENHMETAFILE VAR_1 )
{
    ENHMETAFILEOBJ *VAR_2 = FUNC_3( VAR_1 );

    if(!VAR_2) return VAR_0;

    if(VAR_2->on_disk)
        FUNC_2( VAR_2->emh );
    else
        FUNC_1( FUNC_0(), 0, VAR_2->emh );
    return FUNC_1( FUNC_0(), 0, VAR_2 );
}
