
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace_event_call {int prog_array; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,void*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;

unsigned int FUNC_7(struct trace_event_call *VAR_2, void *VAR_3)
{
 unsigned int VAR_4;

 if (FUNC_3())
  return 1;

 FUNC_4();

 if (FUNC_6(FUNC_2(VAR_1) != 1)) {






  VAR_4 = 0;
  goto out;
 }
 VAR_4 = FUNC_0(VAR_2->prog_array, VAR_3, VAR_0);

 out:
 FUNC_1(VAR_1);
 FUNC_5();

 return VAR_4;
}
