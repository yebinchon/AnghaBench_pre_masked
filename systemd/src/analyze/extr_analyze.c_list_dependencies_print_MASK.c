
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ts2 ;
typedef int ts ;
struct unit_times {scalar_t__ time; scalar_t__ activating; scalar_t__ activated; } ;
struct boot_times {scalar_t__ userspace_time; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 () ;
 int FUNC_1 () ;
 char* FUNC_2 (char*,int,scalar_t__,int ) ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(
                const char *VAR_6,
                unsigned VAR_7,
                unsigned VAR_8,
                bool VAR_9,
                struct unit_times *VAR_10,
                struct boot_times *VAR_11) {

        unsigned VAR_12;
        char VAR_13[VAR_0], VAR_14[VAR_0];

        for (VAR_12 = VAR_7; VAR_12 != 0; VAR_12--)
                FUNC_3("%s", FUNC_4(VAR_8 & (1 << (VAR_12-1)) ? VAR_4 : VAR_3));

        FUNC_3("%s", FUNC_4(VAR_9 ? VAR_2 : VAR_1));

        if (VAR_10) {
                if (VAR_10->time > 0)
                        FUNC_3("%s%s @%s +%s%s", FUNC_0(), VAR_6,
                               FUNC_2(VAR_13, sizeof(VAR_13), VAR_10->activating - VAR_11->userspace_time, VAR_5),
                               FUNC_2(VAR_14, sizeof(VAR_14), VAR_10->time, VAR_5), FUNC_1());
                else if (VAR_10->activated > VAR_11->userspace_time)
                        FUNC_3("%s @%s", VAR_6, FUNC_2(VAR_13, sizeof(VAR_13), VAR_10->activated - VAR_11->userspace_time, VAR_5));
                else
                        FUNC_3("%s", VAR_6);
        } else
                FUNC_3("%s", VAR_6);
        FUNC_3("\n");

        return 0;
}
