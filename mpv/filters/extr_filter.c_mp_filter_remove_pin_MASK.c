
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_pin {struct mp_pin* other; struct mp_filter* owner; } ;
struct mp_filter {int num_pins; struct mp_pin** ppins; struct mp_pin** pins; } ;


 int FUNC_0 (struct mp_pin**,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mp_pin*) ;
 int FUNC_3 (struct mp_pin*) ;

void FUNC_4(struct mp_filter *VAR_0, struct mp_pin *VAR_1)
{
    if (!VAR_1)
        return;

    FUNC_1(VAR_1->owner == VAR_0);
    FUNC_2(VAR_1);
    FUNC_2(VAR_1->other);

    int VAR_2 = -1;
    for (int VAR_3 = 0; VAR_3 < VAR_0->num_pins; VAR_3++) {
        if (VAR_0->ppins[VAR_3] == VAR_1) {
            VAR_2 = VAR_3;
            break;
        }
    }
    FUNC_1(VAR_2 >= 0);

    FUNC_3(VAR_0->pins[VAR_2]);
    FUNC_3(VAR_0->ppins[VAR_2]);

    int VAR_4 = VAR_0->num_pins;
    FUNC_0(VAR_0->pins, VAR_4, VAR_2);
    VAR_4 = VAR_0->num_pins;
    FUNC_0(VAR_0->ppins, VAR_4, VAR_2);
    VAR_0->num_pins -= 1;
}
