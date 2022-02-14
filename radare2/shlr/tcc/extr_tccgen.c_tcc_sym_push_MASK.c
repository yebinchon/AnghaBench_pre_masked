
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int t; int ref; } ;
typedef TYPE_1__ CType ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,TYPE_1__*,int ,int ) ;

int FUNC_4(char *VAR_0, int VAR_1, int VAR_2) {
 CType *VAR_3 = (CType *) FUNC_1 (sizeof(CType));
 if (!VAR_3) {
  return 0;
 }
 VAR_3->ref = FUNC_2 ();
 VAR_3->t = VAR_2;

 if (!FUNC_3 (0, VAR_3, 0, 0)) {
  return 0;
 }

 FUNC_0 (VAR_3);
 return 1;
}
