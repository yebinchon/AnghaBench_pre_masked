
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int build; int sp; int bits; } ;
typedef TYPE_1__ Profile ;


 TYPE_1__** VAR_0 ;

Profile *FUNC_0(int VAR_1, int VAR_2, int VAR_3) {
 int VAR_4;
 for (VAR_4 = 0; VAR_0[VAR_4]; VAR_4++) {
  if (VAR_0[VAR_4]->build != VAR_2) {
   continue;
  }
  if (VAR_0[VAR_4]->sp != VAR_3) {
   continue;
  }
  if (VAR_0[VAR_4]->bits != VAR_1) {
   continue;
  }
  return VAR_0[VAR_4];
 }
 return ((void*)0);
}
