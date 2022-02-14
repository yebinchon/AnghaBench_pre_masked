
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_4(FILE * VAR_7)
{
    if (VAR_7 == ((void*)0))
        VAR_7 = VAR_0;
    FUNC_0(VAR_7,
            "Registered XSLT Extensions\n--------------------------\n");
    if (!VAR_6)
        FUNC_0(VAR_7, "No registered extension functions\n");
    else {
        FUNC_0(VAR_7, "Registered Extension Functions:\n");
        FUNC_2(VAR_4);
        FUNC_1(VAR_6, VAR_2,
                        VAR_7);
        FUNC_3(VAR_4);
    }
    if (!VAR_3)
        FUNC_0(VAR_7, "\nNo registered extension elements\n");
    else {
        FUNC_0(VAR_7, "\nRegistered Extension Elements:\n");
        FUNC_2(VAR_4);
        FUNC_1(VAR_3, VAR_2,
                        VAR_7);
        FUNC_3(VAR_4);
    }
    if (!VAR_5)
        FUNC_0(VAR_7, "\nNo registered extension modules\n");
    else {
        FUNC_0(VAR_7, "\nRegistered Extension Modules:\n");
        FUNC_2(VAR_4);
        FUNC_1(VAR_5, VAR_1,
                        VAR_7);
        FUNC_3(VAR_4);
    }

}
