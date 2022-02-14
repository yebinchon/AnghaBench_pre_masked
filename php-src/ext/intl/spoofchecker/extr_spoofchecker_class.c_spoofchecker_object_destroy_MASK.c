
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * uspoof; } ;
typedef TYPE_1__ Spoofchecker_object ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

void FUNC_3(Spoofchecker_object* VAR_0)
{
 if (!VAR_0) {
  return;
 }

 if (VAR_0->uspoof) {
  FUNC_2(VAR_0->uspoof);
  VAR_0->uspoof = ((void*)0);
 }

 FUNC_1(FUNC_0(VAR_0));
}
