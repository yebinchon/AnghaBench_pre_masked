
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sum {int dummy; } ;
struct ct_mixer {struct sum** sums; struct amixer** amixers; } ;
struct amixer {TYPE_1__* ops; } ;
typedef enum CT_AMIXER_CTL { ____Placeholder_CT_AMIXER_CTL } CT_AMIXER_CTL ;
struct TYPE_2__ {int (* commit_write ) (struct amixer*) ;int (* set_sum ) (struct amixer*,struct sum*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amixer*,struct sum*) ;
 int FUNC_1 (struct amixer*) ;

__attribute__((used)) static void
FUNC_2(struct ct_mixer *VAR_2, enum CT_AMIXER_CTL VAR_3)
{
 struct amixer *VAR_4;
 struct sum *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
  VAR_4 = VAR_2->amixers[VAR_3*VAR_0+VAR_6];
  VAR_5 = VAR_2->sums[VAR_1*VAR_0+VAR_6];
  VAR_4->ops->set_sum(VAR_4, VAR_5);
  VAR_4->ops->commit_write(VAR_4);
 }
}
