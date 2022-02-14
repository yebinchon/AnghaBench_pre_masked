
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cstate {int dummy; } ;
struct TYPE_4__ {void* y; struct TYPE_4__* x; } ;
typedef TYPE_1__ Renode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct cstate*,char) ;
 TYPE_1__* FUNC_1 (struct cstate*,int ) ;
 void* FUNC_2 (struct cstate*) ;

__attribute__((used)) static Renode *FUNC_3(struct cstate *VAR_1)
{
 Renode *VAR_2, *VAR_3;
 VAR_2 = FUNC_2(VAR_1);
 while (FUNC_0(VAR_1, '|')) {
  VAR_3 = VAR_2;
  VAR_2 = FUNC_1(VAR_1, VAR_0);
  VAR_2->x = VAR_3;
  VAR_2->y = FUNC_2(VAR_1);
 }
 return VAR_2;
}
