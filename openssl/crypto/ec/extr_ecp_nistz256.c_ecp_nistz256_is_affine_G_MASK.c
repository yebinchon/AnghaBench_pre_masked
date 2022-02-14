
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Z; int Y; int X; } ;
typedef TYPE_1__ EC_POINT ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(const EC_POINT *VAR_3)
{
    return (FUNC_0(VAR_3->X) == VAR_0) &&
        (FUNC_0(VAR_3->Y) == VAR_0) &&
        FUNC_2(FUNC_1(VAR_3->X), VAR_1) &&
        FUNC_2(FUNC_1(VAR_3->Y), VAR_2) &&
        FUNC_3(VAR_3->Z);
}
