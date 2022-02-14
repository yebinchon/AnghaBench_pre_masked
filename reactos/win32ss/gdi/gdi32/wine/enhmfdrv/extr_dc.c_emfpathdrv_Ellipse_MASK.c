
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {scalar_t__ (* pEllipse ) (TYPE_2__*,int ,int ,int ,int ) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef int INT ;
typedef int BOOL ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_4( PHYSDEV VAR_1, INT VAR_2, INT VAR_3, INT VAR_4, INT VAR_5 )
{
    PHYSDEV VAR_6 = FUNC_1( VAR_1 );
    PHYSDEV VAR_7 = FUNC_0( VAR_1, VAR_0 );

    return (VAR_6->funcs->pEllipse( VAR_6, VAR_2, VAR_3, VAR_4, VAR_5 ) &&
            VAR_7->funcs->pEllipse( VAR_7, VAR_2, VAR_3, VAR_4, VAR_5 ));
}
