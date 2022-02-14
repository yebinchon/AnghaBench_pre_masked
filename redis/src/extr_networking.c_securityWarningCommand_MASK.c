
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef int client ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (int *) ;

void FUNC_4(client *VAR_1) {
    static time_t VAR_2;
    time_t VAR_3 = FUNC_3(((void*)0));

    if (FUNC_1(VAR_3-VAR_2) > 60) {
        FUNC_2(VAR_0,"Possible SECURITY ATTACK detected. It looks like somebody is sending POST or Host: commands to Redis. This is likely due to an attacker attempting to use Cross Protocol Scripting to compromise your Redis instance. Connection aborted.");
        VAR_2 = VAR_3;
    }
    FUNC_0(VAR_1);
}
