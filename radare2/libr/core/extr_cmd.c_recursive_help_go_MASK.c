
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__** sub; scalar_t__ help_detail2; scalar_t__ help_detail; scalar_t__ help_msg; } ;
typedef int RCore ;
typedef TYPE_1__ RCmdDescriptor ;


 int FUNC_0 (TYPE_1__**) ;
 int FUNC_1 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0, int VAR_1, RCmdDescriptor *VAR_2) {
 int VAR_3;
 if (VAR_2->help_msg) {
  FUNC_1 (VAR_0, VAR_2->help_msg);
 }
 if (VAR_1 >= 1) {
  if (VAR_2->help_detail) {
   FUNC_1 (VAR_0, VAR_2->help_detail);
  }
  if (VAR_1 >= 2 && VAR_2->help_detail2) {
   FUNC_1 (VAR_0, VAR_2->help_detail2);
  }
 }
 for (VAR_3 = 32; VAR_3 < FUNC_0 (VAR_2->sub); VAR_3++) {
  if (VAR_2->sub[VAR_3]) {
   FUNC_2 (VAR_0, VAR_1, VAR_2->sub[VAR_3]);
  }
 }
}
