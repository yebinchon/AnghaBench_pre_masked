
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_frame {size_t type; int data; } ;
struct TYPE_2__ {int (* set_pts ) (int ,double) ;scalar_t__ get_pts; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ,double) ;

void FUNC_1(struct mp_frame VAR_1, double VAR_2)
{
    if (VAR_0[VAR_1.type].get_pts)
        VAR_0[VAR_1.type].set_pts(VAR_1.data, VAR_2);
}
