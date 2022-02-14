
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct unit_times {struct unit_times* name; scalar_t__ has_data; } ;


 int FUNC_0 (struct unit_times*) ;

__attribute__((used)) static void FUNC_1(struct unit_times *VAR_0) {
        struct unit_times *VAR_1;

        for (VAR_1 = VAR_0; VAR_1->has_data; VAR_1++)
                FUNC_0(VAR_1->name);
        FUNC_0(VAR_0);
}
