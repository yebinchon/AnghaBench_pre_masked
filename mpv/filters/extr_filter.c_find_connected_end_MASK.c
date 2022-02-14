
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_pin {struct mp_pin* user_conn; struct mp_pin* other; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static struct mp_pin *FUNC_1(struct mp_pin *VAR_0)
{
    while (1) {
        struct mp_pin *VAR_1 = VAR_0->other;
        if (!VAR_1->user_conn)
            return VAR_1;
        VAR_0 = VAR_1->user_conn;
    }
    FUNC_0(0);
}
