
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pszVal; } ;
struct TYPE_5__ {scalar_t__ vt; TYPE_1__ u; } ;
typedef TYPE_2__ PROPVARIANT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1( PROPVARIANT *VAR_2 )
{
    if (VAR_2->vt == VAR_1 )
        FUNC_0( VAR_2->u.pszVal );
    VAR_2->vt = VAR_0;
}
