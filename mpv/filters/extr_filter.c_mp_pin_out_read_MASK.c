
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_frame {int dummy; } ;
struct mp_pin {struct mp_frame data; } ;


 struct mp_frame VAR_0 ;
 int FUNC_0 (struct mp_pin*) ;

struct mp_frame FUNC_1(struct mp_pin *VAR_1)
{
    if (!FUNC_0(VAR_1))
        return VAR_0;
    struct mp_frame VAR_2 = VAR_1->data;
    VAR_1->data = VAR_0;
    return VAR_2;
}
