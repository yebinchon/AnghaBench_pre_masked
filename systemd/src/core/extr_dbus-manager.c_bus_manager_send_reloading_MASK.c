
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Manager ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int ) ;
 int FUNC_3 (int,char*) ;
 int VAR_0 ;

void FUNC_4(Manager *VAR_1, bool VAR_2) {
        int VAR_3;

        FUNC_1(VAR_1);

        VAR_3 = FUNC_2(VAR_1, ((void*)0), VAR_0, FUNC_0(VAR_2));
        if (VAR_3 < 0)
                FUNC_3(VAR_3, "Failed to send reloading signal: %m");
}
