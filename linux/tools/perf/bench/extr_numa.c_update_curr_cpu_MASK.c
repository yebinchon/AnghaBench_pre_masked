
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* threads; } ;
struct TYPE_3__ {unsigned int curr_cpu; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 unsigned int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(int VAR_1, unsigned long VAR_2)
{
 unsigned int VAR_3;

 VAR_3 = FUNC_1();

 VAR_0->threads[VAR_1].curr_cpu = VAR_3;
 FUNC_0(0, VAR_2);
}
