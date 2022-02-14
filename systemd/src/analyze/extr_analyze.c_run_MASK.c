
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int const member_1; int const member_2; int member_4; int member_3; } ;
typedef TYPE_1__ Verb ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (int,char**,TYPE_1__ const*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char**) ;



 int FUNC_5 (int ,char*) ;



__attribute__((used)) static int FUNC_6(int VAR_2, char *VAR_3[]) {

        static const Verb VAR_4[] = {
                { "help", 154, 154, 0, 133 },
                { "time", 154, 1, 153, 149 },
                { "blame", 154, 1, 0, 152 },
                { "critical-chain", 154, 154, 0, 151 },
                { "plot", 154, 1, 0, 150 },
                { "dot", 154, 154, 0, 143 },
                { "log-level", 154, 2, 0, 135 },
                { "log-target", 154, 2, 0, 134 },

                { "set-log-level", 2, 2, 0, 131 },
                { "get-log-level", 154, 1, 0, 137 },
                { "set-log-target", 2, 2, 0, 130 },
                { "get-log-target", 154, 1, 0, 136 },
                { "dump", 154, 1, 0, 142 },
                { "cat-config", 2, 154, 0, 148 },
                { "unit-files", 154, 154, 0, 145 },
                { "unit-paths", 1, 1, 0, 138 },
                { "exit-status", 154, 154, 0, 141 },
                { "syscall-filter", 154, 154, 0, 140 },
                { "condition", 2, 154, 0, 147 },
                { "verify", 2, 154, 0, 144 },
                { "calendar", 2, 154, 0, 129 },
                { "timestamp", 2, 154, 0, 128 },
                { "timespan", 2, 154, 0, 139 },
                { "service-watchdogs", 154, 2, 0, 132 },
                { "security", 154, 154, 0, 146 },
                {}
        };

        int VAR_5;

        FUNC_5(VAR_0, "");
        FUNC_5(VAR_1, "C");

        FUNC_3(1);
        FUNC_2();
        FUNC_1();

        VAR_5 = FUNC_4(VAR_2, VAR_3);
        if (VAR_5 <= 0)
                return VAR_5;

        return FUNC_0(VAR_2, VAR_3, VAR_4, ((void*)0));
}
