
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int config; } ;
typedef TYPE_1__ RCore ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int*) ;

__attribute__((used)) static int FUNC_3(RCore *VAR_0) {
 int VAR_1, VAR_2 = FUNC_2 (&VAR_1);
 if (FUNC_0 (VAR_0->config, "scr.responsive")) {
  if (VAR_2 < 110) {
   FUNC_1 (VAR_0->config, "asm.cmt.right", 0);
  } else {
   FUNC_1 (VAR_0->config, "asm.cmt.right", 1);
  }
  if (VAR_2 < 68) {
   FUNC_1 (VAR_0->config, "hex.cols", (int)(VAR_2 / 5.2));
  } else {
   FUNC_1 (VAR_0->config, "hex.cols", 16);
  }
  if (VAR_2 < 25) {
   FUNC_1 (VAR_0->config, "asm.offset", 0);
  } else {
   FUNC_1 (VAR_0->config, "asm.offset", 1);
  }
  if (VAR_2 > 80) {
   FUNC_1 (VAR_0->config, "asm.lines.width", 14);
   FUNC_1 (VAR_0->config, "asm.lines.width", VAR_2 - (int)(VAR_2 / 1.2));
   FUNC_1 (VAR_0->config, "asm.cmt.col", VAR_2 - (int)(VAR_2 / 2.5));
  } else {
   FUNC_1 (VAR_0->config, "asm.lines.width", 7);
  }
  if (VAR_2 < 70) {
   FUNC_1 (VAR_0->config, "asm.lines.width", 1);
   FUNC_1 (VAR_0->config, "asm.bytes", 0);
  } else {
   FUNC_1 (VAR_0->config, "asm.bytes", 1);
  }
 }
 return VAR_2;
}
