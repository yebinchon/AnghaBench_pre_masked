
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {scalar_t__ (* pMoveTo ) (TYPE_2__*,int ,int ) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef int INT ;
typedef int BOOL ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static BOOL FUNC_4( PHYSDEV VAR_1, INT VAR_2, INT VAR_3 )
{
    PHYSDEV VAR_4 = FUNC_1( VAR_1 );
    PHYSDEV VAR_5 = FUNC_0( VAR_1, VAR_0 );

    return (VAR_4->funcs->pMoveTo( VAR_4, VAR_2, VAR_3 ) && VAR_5->funcs->pMoveTo( VAR_5, VAR_2, VAR_3 ));
}
