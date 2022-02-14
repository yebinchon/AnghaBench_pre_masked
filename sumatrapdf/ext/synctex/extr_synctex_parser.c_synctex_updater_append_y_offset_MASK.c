
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* synctex_updater_t ;
struct TYPE_3__ {int length; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 (char*) ;

void FUNC_2(synctex_updater_t VAR_1, char * VAR_2){
 if (((void*)0)==VAR_1) {
  return;
 }
 if (VAR_2 && FUNC_1(VAR_2)) {
  VAR_1->length += FUNC_0(VAR_0,"Y Offset:%s\n",VAR_2);
 }
}
