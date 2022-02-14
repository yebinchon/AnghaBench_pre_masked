
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_7__ {int addr; } ;
struct TYPE_6__ {int offset; int config; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RAnalFunction ;
typedef int RAnal ;


 char* FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*,char const*) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static int FUNC_3(RAnal *VAR_0, void* VAR_1, RAnalFunction *VAR_2, const char *VAR_3) {
 RCore *VAR_4 = (RCore*)VAR_1;
 const char *VAR_5 = FUNC_0 (VAR_4->config, "cmd.fcn.rename");
 if (VAR_5 && *VAR_5) {

  ut64 VAR_6 = VAR_4->offset;
  ut64 VAR_7 = VAR_2->addr;
  FUNC_2 (VAR_4, VAR_7, 1);
  FUNC_1 (VAR_4, VAR_5);
  FUNC_2 (VAR_4, VAR_6, 1);
 }
 return 0;
}
