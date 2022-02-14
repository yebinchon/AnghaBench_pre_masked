
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Dragon4_Scratch ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static Dragon4_Scratch*
FUNC_1(void) {

    if (VAR_2) {
        FUNC_0(VAR_0,
            "numpy float printing code is not re-entrant. "
            "Ping the devs to fix it.");
        return ((void*)0);
    }
    VAR_2 = 1;


    return &VAR_1;
}
