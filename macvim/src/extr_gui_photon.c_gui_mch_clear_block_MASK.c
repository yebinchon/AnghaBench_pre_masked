
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int back_pixel; } ;
struct TYPE_7__ {int member_1; int member_0; } ;
struct TYPE_6__ {int member_1; int member_0; } ;
struct TYPE_8__ {TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_3__ PhRect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int FUNC_3 (int ) ;

void
FUNC_4(int VAR_4, int VAR_5, int VAR_6, int VAR_7)
{
    PhRect_t VAR_8 = {
 { FUNC_0(VAR_5), FUNC_1(VAR_4) },
 { FUNC_0(VAR_7 + 1) - 1, FUNC_1(VAR_6 + 1) - 1}
    };

    VAR_1;
    FUNC_3(VAR_3.back_pixel);
    FUNC_2(&VAR_8, VAR_2);
    VAR_0;
}
