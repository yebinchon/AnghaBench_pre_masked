
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * uuid; } ;
typedef TYPE_1__ SymbolsHeader ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static void FUNC_1(SymbolsHeader VAR_0) {

 FUNC_0 ("0x%08x  uuid     ", 24);
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < 16; VAR_1++) {
  FUNC_0 ("%02x", VAR_0.uuid[VAR_1]);
 }
 FUNC_0 ("\n");




}
