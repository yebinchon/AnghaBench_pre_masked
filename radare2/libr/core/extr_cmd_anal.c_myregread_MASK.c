
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_5__ {int regread; int regs; int inputregs; int regwrite; } ;
struct TYPE_4__ {TYPE_2__* user; } ;
typedef TYPE_1__ RAnalEsil ;
typedef TYPE_2__ AeaStats ;


 int FUNC_0 (char const) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int FUNC_4(RAnalEsil *VAR_0, const char *VAR_1, ut64 *VAR_2, int *VAR_3) {
 AeaStats *VAR_4 = VAR_0->user;
 if (!FUNC_0 (*VAR_1)) {
  if (!FUNC_1 (VAR_4->inputregs, VAR_1)) {
   if (!FUNC_1 (VAR_4->regwrite, VAR_1)) {
    FUNC_2 (VAR_4->inputregs, FUNC_3 (VAR_1));
   }
  }
  if (!FUNC_1 (VAR_4->regs, VAR_1)) {
   FUNC_2 (VAR_4->regs, FUNC_3 (VAR_1));
  }
  if (!FUNC_1 (VAR_4->regread, VAR_1)) {
   FUNC_2 (VAR_4->regread, FUNC_3 (VAR_1));
  }
 }
 return 0;
}
