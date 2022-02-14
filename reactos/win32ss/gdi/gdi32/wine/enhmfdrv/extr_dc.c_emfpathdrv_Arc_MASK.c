
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {TYPE_1__* funcs; } ;
struct TYPE_10__ {scalar_t__ (* pArc ) (TYPE_2__*,int ,int ,int ,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_2__* PHYSDEV ;
typedef int INT ;
typedef int BOOL ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static BOOL FUNC_4( PHYSDEV VAR_1, INT VAR_2, INT VAR_3, INT VAR_4, INT VAR_5,
                            INT VAR_6, INT VAR_7, INT VAR_8, INT VAR_9 )
{
    PHYSDEV VAR_10 = FUNC_1( VAR_1 );
    PHYSDEV VAR_11 = FUNC_0( VAR_1, VAR_0 );

    return (VAR_10->funcs->pArc( VAR_10, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 ) &&
            VAR_11->funcs->pArc( VAR_11, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 ));
}
