
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_frame {size_t type; int data; } ;
struct TYPE_2__ {int (* approx_size ) (int ) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;

int FUNC_1(struct mp_frame VAR_1)
{
    if (VAR_0[VAR_1.type].approx_size)
        return VAR_0[VAR_1.type].approx_size(VAR_1.data);
    return 0;
}
