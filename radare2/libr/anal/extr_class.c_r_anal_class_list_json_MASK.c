
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * j; int * anal; } ;
typedef int RAnal ;
typedef int PJ ;
typedef TYPE_1__ ListJsonCtx ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(RAnal *VAR_1) {
 PJ *VAR_2 = FUNC_3 ();
 if (!VAR_2) {
  return;
 }
 FUNC_0 (VAR_2);

 ListJsonCtx VAR_3;
 VAR_3.anal = VAR_1;
 VAR_3.j = VAR_2;
 FUNC_5 (VAR_1, VAR_0, &VAR_3);

 FUNC_1 (VAR_2);
 FUNC_6 ("%s\n", FUNC_4 (VAR_2));
 FUNC_2 (VAR_2);
}
