
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ ftrace_func_t ;
struct TYPE_4__ {struct TYPE_4__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int * VAR_8 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int * VAR_9 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 ftrace_func_t VAR_10;






 VAR_9 = FUNC_2(VAR_2,
      FUNC_1(&VAR_1));


 if (VAR_9 == &VAR_0) {
  VAR_10 = VAR_4;






 } else if (FUNC_2(VAR_2->next,
   FUNC_1(&VAR_1)) == &VAR_0) {
  VAR_10 = FUNC_0(VAR_2);

 } else {

  VAR_9 = &VAR_0;
  VAR_10 = VAR_3;
 }

 FUNC_6();


 if (VAR_7 == VAR_10)
  return;





 if (VAR_10 == VAR_3) {
  VAR_7 = VAR_10;




  return;
 }
 VAR_7 = VAR_3;




 FUNC_3(VAR_5);

 VAR_8 = VAR_9;

 FUNC_5();

 FUNC_4(VAR_6, ((void*)0), 1);



 VAR_7 = VAR_10;
}
