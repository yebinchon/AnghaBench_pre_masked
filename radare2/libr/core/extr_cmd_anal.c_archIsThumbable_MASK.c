
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int bits; TYPE_1__* cur; } ;
struct TYPE_6__ {TYPE_3__* assembler; } ;
struct TYPE_5__ {scalar_t__ name; } ;
typedef TYPE_2__ RCore ;
typedef TYPE_3__ RAsm ;


 int FUNC_0 (scalar_t__,char*) ;

__attribute__((used)) static bool FUNC_1(RCore *VAR_0) {
 RAsm *VAR_1 = VAR_0 ? VAR_0->assembler : ((void*)0);
 if (VAR_1 && VAR_1->cur && VAR_1->bits <= 32 && VAR_1->cur->name) {
  return FUNC_0 (VAR_1->cur->name, "arm");
 }
 return 0;
}
