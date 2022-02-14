
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ sds ;
struct TYPE_2__ {int * errors; } ;


 int FUNC_0 (char*,char*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int *,scalar_t__) ;
 int * FUNC_2 () ;

__attribute__((used)) static void FUNC_3(sds VAR_1) {
    if (VAR_0.errors == ((void*)0))
        VAR_0.errors = FUNC_2();
    FUNC_1(VAR_0.errors, VAR_1);
    FUNC_0("%s\n", (char *) VAR_1);
}
