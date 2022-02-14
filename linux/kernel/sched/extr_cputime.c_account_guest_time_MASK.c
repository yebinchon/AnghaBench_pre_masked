
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct task_struct {int gtime; int utime; } ;
struct TYPE_2__ {scalar_t__* cpustat; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct task_struct*,scalar_t__) ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_1 (struct task_struct*) ;

void FUNC_2(struct task_struct *VAR_5, u64 VAR_6)
{
 u64 *VAR_7 = VAR_4->cpustat;


 VAR_5->utime += VAR_6;
 FUNC_0(VAR_5, VAR_6);
 VAR_5->gtime += VAR_6;


 if (FUNC_1(VAR_5) > 0) {
  VAR_7[VAR_2] += VAR_6;
  VAR_7[VAR_1] += VAR_6;
 } else {
  VAR_7[VAR_3] += VAR_6;
  VAR_7[VAR_0] += VAR_6;
 }
}
