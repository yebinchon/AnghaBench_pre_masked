
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* cur; int bits; } ;
struct TYPE_8__ {int arch; int assemble; } ;
struct TYPE_7__ {int arch; } ;
typedef TYPE_2__ RAsmPlugin ;
typedef TYPE_3__ RAsm ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(RAsm *VAR_0, RAsmPlugin *VAR_1) {
 if (!VAR_0 || !VAR_1->arch || !VAR_1->assemble || !FUNC_0 (VAR_1, VAR_0->bits)) {
  return 0;
 }
 return (!FUNC_2 (VAR_0->cur->arch, VAR_1->arch, FUNC_1 (VAR_0->cur->arch)));
}
