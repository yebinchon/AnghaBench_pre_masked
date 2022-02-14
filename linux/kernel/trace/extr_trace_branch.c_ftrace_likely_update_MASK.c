
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int incorrect; int correct; } ;
struct ftrace_likely_data {TYPE_1__ data; int constant; } ;


 int FUNC_0 (struct ftrace_likely_data*,int,int) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;

void FUNC_3(struct ftrace_likely_data *VAR_0, int VAR_1,
     int VAR_2, int VAR_3)
{
 unsigned long VAR_4 = FUNC_2();


 if (VAR_3) {
  VAR_0->constant++;
  VAR_1 = VAR_2;
 }






 FUNC_0(VAR_0, VAR_1, VAR_2);


 if (VAR_1 == VAR_2)
  VAR_0->data.correct++;
 else
  VAR_0->data.incorrect++;

 FUNC_1(VAR_4);
}
