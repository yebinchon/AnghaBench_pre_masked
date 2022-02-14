
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct data__file {int session; } ;
struct TYPE_2__ {int range_num; int range_size; int ptime_range; int time_str; } ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (int ,int ,int *,int *,int *) ;

__attribute__((used)) static int FUNC_1(struct data__file *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0.time_str, VAR_1->session,
       &VAR_0.ptime_range,
       &VAR_0.range_size,
       &VAR_0.range_num);
 return VAR_2;
}
