
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut64 ;
typedef int ut32 ;
struct TYPE_6__ {int type; char* name; TYPE_1__* args; } ;
typedef TYPE_2__ mcore_t ;
struct TYPE_5__ {int value; } ;




 int* VAR_0 ;
 int FUNC_0 (char*,int,int ,TYPE_2__*) ;
 int FUNC_1 (char*,int,char*,char*,size_t,size_t,int) ;

void FUNC_2(char* VAR_1, int VAR_2, ut64 VAR_3, mcore_t* VAR_4) {
 ut32 VAR_5;
 if (!VAR_4 || !VAR_1) {
  return;
 }
 switch (VAR_4->type) {
 case 129:
 case 128:
  VAR_5 = VAR_4->args[1].value << VAR_0[VAR_4->args[3].value];
  FUNC_1 (VAR_1, VAR_2, "%s r%u, (r%u, 0x%x)",
   VAR_4->name, VAR_4->args[2].value, VAR_4->args[0].value, VAR_5);
  break;
 default:
  FUNC_0 (VAR_1, VAR_2, VAR_3, VAR_4);
  break;
 }
}
