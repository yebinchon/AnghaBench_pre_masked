
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ y; scalar_t__ x; } ;
struct TYPE_8__ {TYPE_1__ ptLButtonDown; } ;
struct TYPE_7__ {scalar_t__ y; scalar_t__ x; } ;
typedef TYPE_2__ POINT ;
typedef TYPE_3__ HEADER_INFO ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static BOOL
FUNC_2(const HEADER_INFO *VAR_2, const POINT *VAR_3)
{



    return (FUNC_1(VAR_2->ptLButtonDown.x - VAR_3->x)>FUNC_0(VAR_0) ||
            FUNC_1(VAR_2->ptLButtonDown.y - VAR_3->y)>FUNC_0(VAR_1));
}
