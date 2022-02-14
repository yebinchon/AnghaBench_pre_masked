
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t int_no; } ;
typedef TYPE_1__ registers_t ;


 char** VAR_0 ;
 int FUNC_0 (size_t,char*) ;
 int FUNC_1 (char*) ;

void FUNC_2(registers_t *VAR_1) {
    FUNC_1("received interrupt: ");
    char VAR_2[3];
    FUNC_0(VAR_1->int_no, VAR_2);
    FUNC_1(VAR_2);
    FUNC_1("\n");
    FUNC_1(VAR_0[VAR_1->int_no]);
    FUNC_1("\n");
}
