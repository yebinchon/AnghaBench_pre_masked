
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* style; } ;
struct TYPE_5__ {int dwMask; int dwEffects; } ;
struct TYPE_6__ {TYPE_1__ fmt; } ;
typedef TYPE_3__ ME_Run ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0( ME_Run *VAR_2 )
{
    return (VAR_2->style->fmt.dwMask & VAR_1) && (VAR_2->style->fmt.dwEffects & VAR_0);
}
