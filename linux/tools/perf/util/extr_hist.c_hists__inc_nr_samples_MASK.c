
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_non_filtered_samples; } ;
struct hists {TYPE_1__ stats; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;

void FUNC_1(struct hists *VAR_1, bool VAR_2)
{
 FUNC_0(&VAR_1->stats, VAR_0);
 if (!VAR_2)
  VAR_1->stats.nr_non_filtered_samples++;
}
