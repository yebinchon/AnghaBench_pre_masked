
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int total_period; int total_non_filtered_period; } ;
struct hists {TYPE_1__ stats; } ;
struct TYPE_4__ {scalar_t__ filter_relative; } ;


 TYPE_2__ VAR_0 ;

u64 FUNC_0(struct hists *VAR_1)
{
 return VAR_0.filter_relative ? VAR_1->stats.total_non_filtered_period :
  VAR_1->stats.total_period;
}
