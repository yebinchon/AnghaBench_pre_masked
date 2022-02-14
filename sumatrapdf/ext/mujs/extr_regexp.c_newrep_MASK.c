
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct cstate {int dummy; } ;
struct TYPE_6__ {int ng; int m; int n; struct TYPE_6__* x; } ;
typedef TYPE_1__ Renode ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cstate*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (struct cstate*,int ) ;

__attribute__((used)) static Renode *FUNC_3(struct cstate *VAR_2, Renode *VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 Renode *VAR_7 = FUNC_2(VAR_2, VAR_0);
 if (VAR_6 == VAR_1 && FUNC_1(VAR_3))
  FUNC_0(VAR_2, "infinite loop matching the empty string");
 VAR_7->ng = VAR_4;
 VAR_7->m = VAR_5;
 VAR_7->n = VAR_6;
 VAR_7->x = VAR_3;
 return VAR_7;
}
