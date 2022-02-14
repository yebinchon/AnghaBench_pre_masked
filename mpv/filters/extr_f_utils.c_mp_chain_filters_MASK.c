
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_pin {int dummy; } ;
struct mp_filter {int num_pins; struct mp_pin** pins; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct mp_pin*,struct mp_pin*) ;

void FUNC_2(struct mp_pin *VAR_0, struct mp_pin *VAR_1,
                      struct mp_filter **VAR_2, int VAR_3)
{
    for (int VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        if (!VAR_2[VAR_4])
            continue;
        FUNC_0(VAR_2[VAR_4]->num_pins == 2);
        FUNC_1(VAR_2[VAR_4]->pins[0], VAR_0);
        VAR_0 = VAR_2[VAR_4]->pins[1];
    }
    FUNC_1(VAR_1, VAR_0);
}
