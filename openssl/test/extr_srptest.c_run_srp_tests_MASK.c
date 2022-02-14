
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,char*) ;

__attribute__((used)) static int FUNC_4(void)
{

    FUNC_1("run_srp: expecting a mismatch");
    if (!FUNC_0(FUNC_3("alice", "password1", "password2")))
        return 0;


    FUNC_1("run_srp: expecting a match");
    if (!FUNC_2(FUNC_3("alice", "password", "password")))
        return 0;

    return 1;
}
