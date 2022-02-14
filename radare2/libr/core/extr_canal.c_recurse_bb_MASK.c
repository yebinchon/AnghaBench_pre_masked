
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int anal; } ;
typedef int RList ;
typedef TYPE_1__ RCore ;
typedef int RAnalBlock ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ,int ) ;
 int * FUNC_2 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static RList *FUNC_3(RCore *VAR_0, ut64 VAR_1, RAnalBlock *VAR_2) {
 RAnalBlock *VAR_3;
 RList *VAR_4;
 VAR_3 = FUNC_1 (VAR_0->anal, VAR_1);
 if (VAR_3 == VAR_2) {
  FUNC_0 ("path found!");
  return ((void*)0);
 }
 VAR_4 = FUNC_2 (VAR_0, VAR_3, VAR_2);
 return VAR_4;
}
