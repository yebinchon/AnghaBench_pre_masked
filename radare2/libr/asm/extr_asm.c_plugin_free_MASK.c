
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* fini ) (int *) ;} ;
typedef TYPE_1__ RAsmPlugin ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(RAsmPlugin *VAR_0) {
 if (VAR_0 && VAR_0->fini) {
  VAR_0->fini (((void*)0));
 }
}
