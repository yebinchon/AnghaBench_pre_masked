
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ktime_t ;
typedef enum tk_offsets { ____Placeholder_tk_offsets } tk_offsets ;
struct TYPE_2__ {int seq; } ;


 int FUNC_0 (int ,int ) ;
 int ** VAR_0 ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int) ;
 TYPE_1__ VAR_1 ;

ktime_t FUNC_3(ktime_t VAR_2, enum tk_offsets VAR_3)
{
 ktime_t *VAR_4 = VAR_0[VAR_3];
 unsigned int VAR_5;
 ktime_t VAR_6;

 do {
  VAR_5 = FUNC_1(&VAR_1.seq);
  VAR_6 = FUNC_0(VAR_2, *VAR_4);
 } while (FUNC_2(&VAR_1.seq, VAR_5));

 return VAR_6;
}
