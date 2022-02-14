
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int is_callgraph; } ;
typedef int RCore ;
typedef int RAnalFunction ;
typedef TYPE_1__ RAGraph ;


 int FUNC_0 (TYPE_1__*,int *,int *) ;
 int FUNC_1 (TYPE_1__*,int *,int *) ;

__attribute__((used)) static int FUNC_2(RAGraph *VAR_0, RCore *VAR_1, RAnalFunction *VAR_2) {
 int VAR_3 = VAR_0->is_callgraph;
 return VAR_3? FUNC_1 (VAR_0, VAR_1, VAR_2): FUNC_0 (VAR_0, VAR_1, VAR_2);
}
