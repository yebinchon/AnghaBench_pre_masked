
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mp_frame {size_t type; int data; } ;
struct TYPE_2__ {int (* new_ref ) (int ) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (int ) ;

struct mp_frame FUNC_2(struct mp_frame VAR_2)
{
    if (VAR_1[VAR_2.type].new_ref) {
        FUNC_0(VAR_2.data);
        VAR_2.data = VAR_1[VAR_2.type].new_ref(VAR_2.data);
        if (!VAR_2.data)
            VAR_2.type = VAR_0;
    }
    return VAR_2;
}
