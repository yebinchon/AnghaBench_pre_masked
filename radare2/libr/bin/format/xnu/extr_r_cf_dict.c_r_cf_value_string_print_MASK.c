
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int value; } ;
typedef TYPE_1__ RCFValueString ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*,char*,int) ;
 char* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(RCFValueString *VAR_0) {
 char *VAR_1 = FUNC_3 (VAR_0->value);
 VAR_1 = FUNC_2 (VAR_1, "\"", "\\\"", 1);
 FUNC_1 ("\"%s\"", VAR_1);
 FUNC_0 (VAR_1);
}
