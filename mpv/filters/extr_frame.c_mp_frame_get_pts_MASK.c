
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_frame {size_t type; int data; } ;
struct TYPE_2__ {double (* get_pts ) (int ) ;} ;


 double VAR_0 ;
 TYPE_1__* VAR_1 ;
 double FUNC_0 (int ) ;

double FUNC_1(struct mp_frame VAR_2)
{
    if (VAR_1[VAR_2.type].get_pts)
        return VAR_1[VAR_2.type].get_pts(VAR_2.data);
    return VAR_0;
}
