
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_1__* synctex_updater_t ;
typedef int gzFile ;
struct TYPE_4__ {scalar_t__ length; } ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,char*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;

void FUNC_5(synctex_updater_t VAR_2){
 if (((void*)0)==VAR_2) {
  return;
 }
 if (VAR_2->length>0) {
  FUNC_0(VAR_0,"!%i\n",VAR_2->length);
 }
 if (VAR_1) {
  FUNC_1((FILE *)VAR_0);
 } else {
  FUNC_3((gzFile)VAR_0);
 }
 FUNC_2(VAR_2);
 FUNC_4("... done.\n");
 return;
}
