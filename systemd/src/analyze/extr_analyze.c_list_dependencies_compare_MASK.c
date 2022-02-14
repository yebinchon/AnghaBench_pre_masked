
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int usec_t ;
struct unit_times {int activated; } ;


 int FUNC_0 (int ,int ) ;
 struct unit_times* FUNC_1 (int ,char* const) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(char *const *VAR_1, char *const *VAR_2) {
        usec_t VAR_3 = 0, VAR_4 = 0;
        struct unit_times *VAR_5;

        VAR_5 = FUNC_1(VAR_0, *VAR_1);
        if (VAR_5)
                VAR_3 = VAR_5->activated;
        VAR_5 = FUNC_1(VAR_0, *VAR_2);
        if (VAR_5)
                VAR_4 = VAR_5->activated;

        return FUNC_0(VAR_4, VAR_3);
}
