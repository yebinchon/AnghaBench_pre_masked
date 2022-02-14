
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct taprio_sched {int tk_offset; } ;
typedef int ktime_t ;


 int VAR_0 ;

 int FUNC_0 () ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static ktime_t FUNC_2(struct taprio_sched *VAR_1)
{
 ktime_t VAR_2 = FUNC_0();

 switch (VAR_1->tk_offset) {
 case 128:
  return VAR_2;
 default:
  return FUNC_1(VAR_2, VAR_1->tk_offset);
 }

 return VAR_0;
}
