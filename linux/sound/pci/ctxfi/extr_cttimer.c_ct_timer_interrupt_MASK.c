
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ct_timer {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* interrupt ) (struct ct_timer*) ;} ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct ct_timer*) ;

__attribute__((used)) static void FUNC_1(void *VAR_1, unsigned int VAR_2)
{
 struct ct_timer *VAR_3 = VAR_1;


 if ((VAR_2 & VAR_0) && VAR_3->ops->interrupt)
  VAR_3->ops->interrupt(VAR_3);
}
