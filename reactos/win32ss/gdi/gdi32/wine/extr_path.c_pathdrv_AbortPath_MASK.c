
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* pDeleteDC ) (int ) ;} ;
typedef int PHYSDEV ;
typedef int DC ;
typedef int BOOL ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int * FUNC_1 (int ) ;
 TYPE_1__ VAR_1 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static BOOL FUNC_4( PHYSDEV VAR_2 )
{
    DC *VAR_3 = FUNC_1( VAR_2 );
    FUNC_0("pathdrv_AbortPath dev %p\n",VAR_2);
    VAR_1.pDeleteDC( FUNC_2( VAR_3, &VAR_1 ));
    return VAR_0;
}
