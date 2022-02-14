
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cur; } ;
struct TYPE_4__ {scalar_t__ arch; } ;
typedef TYPE_2__ RAsm ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;

__attribute__((used)) static bool FUNC_1 (RAsm *VAR_0) {
 return VAR_0 && VAR_0->cur && VAR_0->cur->arch && FUNC_0 (VAR_0->cur->arch, "mips");
}
