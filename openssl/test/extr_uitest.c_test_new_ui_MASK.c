
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int pass ;
struct TYPE_3__ {char* member_0; char* member_1; int password; } ;
typedef TYPE_1__ PW_CB_DATA ;


 scalar_t__ FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int,int ,TYPE_1__*) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(void)
{
    PW_CB_DATA VAR_0 = {
        "password",
        "prompt"
    };
    char VAR_1[16];
    int VAR_2 = 0;

    FUNC_4();
    if (FUNC_0(FUNC_3(VAR_1, sizeof(VAR_1), 0, &VAR_0), 0)
            && FUNC_1(VAR_1, VAR_0.password))
        VAR_2 = 1;
    FUNC_2();
    return VAR_2;
}
