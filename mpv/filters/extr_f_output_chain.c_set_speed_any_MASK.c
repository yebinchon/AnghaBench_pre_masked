
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_user_filter {int f; } ;
struct mp_filter_command {double speed; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int ,struct mp_filter_command*) ;

__attribute__((used)) static void FUNC_2(struct mp_user_filter **VAR_2, int VAR_3,
                          bool VAR_4, double *VAR_5)
{
    for (int VAR_6 = VAR_3 - 1; VAR_6 >= 0; VAR_6--) {
        FUNC_0(*VAR_5);
        struct mp_filter_command VAR_7 = {
            .type = VAR_4 ? VAR_1
                             : VAR_0,
            .speed = *VAR_5,
        };
        if (FUNC_1(VAR_2[VAR_6]->f, &VAR_7))
            *VAR_5 = 1.0;
    }
}
