
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct cstate {char lookahead; } ;
struct TYPE_4__ {struct TYPE_4__* y; struct TYPE_4__* x; } ;
typedef TYPE_1__ Renode ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct cstate*,int ) ;
 void* FUNC_1 (struct cstate*) ;

__attribute__((used)) static Renode *FUNC_2(struct cstate *VAR_1)
{
 Renode *VAR_2, *VAR_3, **VAR_4;
 if (VAR_1->lookahead && VAR_1->lookahead != '|' && VAR_1->lookahead != ')') {

  VAR_3 = FUNC_1(VAR_1);
  VAR_4 = &VAR_3;
  while (VAR_1->lookahead && VAR_1->lookahead != '|' && VAR_1->lookahead != ')') {
   VAR_2 = FUNC_0(VAR_1, VAR_0);
   VAR_2->x = *VAR_4;
   VAR_2->y = FUNC_1(VAR_1);
   *VAR_4 = VAR_2;
   VAR_4 = &VAR_2->y;
  }
  return VAR_3;
 }
 return ((void*)0);
}
