
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int disp; int * jsdisp; } ;
struct TYPE_5__ {int flags; TYPE_1__ u; } ;
typedef TYPE_2__ vdisp_t ;
typedef int jsdisp_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline void FUNC_1(vdisp_t *VAR_2, jsdisp_t *VAR_3)
{
    VAR_2->u.jsdisp = VAR_3;
    VAR_2->flags = VAR_1 | VAR_0;
    FUNC_0(VAR_2->u.disp);
}
