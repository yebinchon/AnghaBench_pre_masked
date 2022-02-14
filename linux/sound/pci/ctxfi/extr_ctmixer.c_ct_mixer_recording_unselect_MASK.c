
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_mixer {struct amixer** amixers; } ;
struct amixer {TYPE_1__* ops; } ;
typedef enum CT_AMIXER_CTL { ____Placeholder_CT_AMIXER_CTL } CT_AMIXER_CTL ;
struct TYPE_2__ {int (* commit_write ) (struct amixer*) ;int (* set_sum ) (struct amixer*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct amixer*,int *) ;
 int FUNC_1 (struct amixer*) ;

__attribute__((used)) static void
FUNC_2(struct ct_mixer *VAR_1, enum CT_AMIXER_CTL VAR_2)
{
 struct amixer *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_3 = VAR_1->amixers[VAR_2*VAR_0+VAR_4];
  VAR_3->ops->set_sum(VAR_3, ((void*)0));
  VAR_3->ops->commit_write(VAR_3);
 }
}
