
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {char const* name; int kind; } ;
typedef TYPE_1__ RAnalVar ;
typedef TYPE_2__ RAnalFunction ;
typedef int RAnal ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int,int ,char const*,char const*,int) ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 int FUNC_3 (char const*,char*) ;
 scalar_t__ FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(RAnal *VAR_2, RAnalVar *VAR_3, const char *VAR_4, ut64 VAR_5) {
 if (!VAR_4 || !VAR_3) {
  return;
 }
 if (!*VAR_4 || !FUNC_3 (VAR_4 , "...")) {
  return;
 }
 bool VAR_6 = (FUNC_2 (VAR_3->name, VAR_1)
   || FUNC_2 (VAR_3->name, VAR_0))? 1: 0;
 if (*VAR_4 == '*') {
  VAR_4++;
 }

 if (!VAR_6 && (FUNC_4 (VAR_3->name) > FUNC_4 (VAR_4))) {
  return;
 }
 RAnalFunction *VAR_7 = FUNC_0 (VAR_2, VAR_5, 0);
 if (!VAR_7) {
  return;
 }
 FUNC_1 (VAR_2, VAR_7->addr, 1, VAR_3->kind, VAR_3->name, VAR_4, 0);
}
