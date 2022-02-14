
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int const member_1; int const member_2; int const member_4; int member_3; } ;
typedef TYPE_1__ Verb ;




 int FUNC_0 (int,char**,TYPE_1__ const*,int *) ;
__attribute__((used)) static int FUNC_1(int VAR_0, char *VAR_1[]) {
        static const Verb VAR_2[] = {
                { "help", 138, 138, 0, 136 },
                { "status", 138, 1, 137, 129 },
                { "install", 138, 1, 0, 135 },
                { "update", 138, 1, 0, 135 },
                { "remove", 138, 1, 0, 131 },
                { "is-installed", 138, 1, 0, 134 },
                { "list", 138, 1, 0, 133 },
                { "set-default", 2, 2, 0, 130 },
                { "set-oneshot", 2, 2, 0, 130 },
                { "random-seed", 138, 1, 0, 132 },
                { "system-options", 138, 2, 0, 128 },
                {}
        };

        return FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0));
}
