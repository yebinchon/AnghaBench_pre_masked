
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int config; } ;
typedef TYPE_1__ RCore ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static void FUNC_4(RCore *VAR_0) {
 ut64 VAR_1, VAR_2;

 FUNC_1 (VAR_0->config, "lines.to");
 VAR_1 = FUNC_2 (VAR_0->config, "lines.from");
 VAR_2 = FUNC_2 (VAR_0->config, "lines.to");
 if (FUNC_3 (VAR_0, VAR_1, VAR_2) == -1) {
  FUNC_0 ("ERROR: \"lines.from\" and \"lines.to\" must be set\n");
 }
}
