
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int value; } ;
struct TYPE_3__ {int config; int anal; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RConfigNode ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,int) ;

__attribute__((used)) static bool FUNC_3(void *VAR_1, void *VAR_2) {
 RCore *VAR_3 = (RCore *) VAR_1;
 RConfigNode *VAR_4 = (RConfigNode *) VAR_2;
 FUNC_1 (VAR_3->anal, VAR_4->value);

 {
  int VAR_5 = FUNC_0 (VAR_3->anal, VAR_0);
  FUNC_2 (VAR_3->config, "asm.pcalign", (VAR_5 != -1)? VAR_5: 0);
 }
 return 1;
}
