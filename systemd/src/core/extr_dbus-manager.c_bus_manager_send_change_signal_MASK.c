
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Manager ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int ,int *) ;
 int FUNC_2 (int,char*) ;
 int VAR_0 ;

void FUNC_3(Manager *VAR_1) {
        int VAR_2;

        FUNC_0(VAR_1);

        VAR_2 = FUNC_1(VAR_1, ((void*)0), VAR_0, ((void*)0));
        if (VAR_2 < 0)
                FUNC_2(VAR_2, "Failed to send manager change signal: %m");
}
