
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t ut8 ;
struct TYPE_8__ {struct TYPE_8__** sub; } ;
struct TYPE_7__ {TYPE_2__ root_cmd_descriptor; } ;
typedef TYPE_1__ RCore ;
typedef TYPE_2__ RCmdDescriptor ;


 size_t const FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (TYPE_1__*,int,TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(RCore *VAR_0, int VAR_1, const char *VAR_2) {
 const ut8 *VAR_3;
 RCmdDescriptor *VAR_4 = &VAR_0->root_cmd_descriptor;
 for (VAR_3 = (const ut8 *)VAR_2; *VAR_3 && *VAR_3 < FUNC_0 (VAR_4->sub); VAR_3++) {
  if (!(VAR_4 = VAR_4->sub[*VAR_3])) {
   return;
  }
 }
 FUNC_1 (VAR_0, VAR_1, VAR_4);
}
