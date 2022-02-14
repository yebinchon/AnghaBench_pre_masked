
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* member_0; int const member_1; int const member_2; int const member_4; int member_3; } ;
typedef TYPE_1__ Verb ;


 int VAR_0 ;
 int FUNC_0 (int ) ;


 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,char**,TYPE_1__ const*,int *) ;

 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (int,char**) ;



__attribute__((used)) static int FUNC_8(int VAR_1, char *VAR_2[]) {
        static const Verb VAR_3[] = {
                { "help", 132, 132, 0, 130 },
                { "status", 132, 1, 131, 128 },
                { "good", 132, 1, 0, 129 },
                { "bad", 132, 1, 0, 129 },
                { "indeterminate", 132, 1, 0, 129 },
                {}
        };

        int VAR_4;

        FUNC_6();
        FUNC_5();

        VAR_4 = FUNC_7(VAR_1, VAR_2);
        if (VAR_4 <= 0)
                return VAR_4;

        if (FUNC_1() > 0)
                return FUNC_4(FUNC_0(VAR_0),
                                       "Marking a boot is not supported in containers.");

        if (!FUNC_3())
                return FUNC_4(FUNC_0(VAR_0),
                                       "Marking a boot is only supported on EFI systems.");

        return FUNC_2(VAR_1, VAR_2, VAR_3, ((void*)0));
}
