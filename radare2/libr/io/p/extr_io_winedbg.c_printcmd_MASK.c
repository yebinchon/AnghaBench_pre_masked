
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* cb_printf ) (char*,char*) ;} ;
typedef TYPE_1__ RIO ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3 (RIO *VAR_0, const char *VAR_1) {
 char *VAR_2 = FUNC_1 (VAR_1);
 VAR_0->cb_printf ("%s\n", VAR_2);
 FUNC_0 (VAR_2);
}
