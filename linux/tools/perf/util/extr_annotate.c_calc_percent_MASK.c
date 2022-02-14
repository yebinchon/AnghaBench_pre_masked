
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef double u64 ;
struct sym_hist {int nr_samples; int period; TYPE_1__* addr; } ;
struct TYPE_6__ {int nr_non_filtered_samples; int total_period; } ;
struct hists {TYPE_3__ stats; } ;
struct TYPE_5__ {double period; unsigned int nr_samples; } ;
struct annotation_data {double* percent; TYPE_2__ he; } ;
typedef size_t s64 ;
struct TYPE_4__ {scalar_t__ period; scalar_t__ nr_samples; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static void FUNC_0(struct sym_hist *VAR_4,
    struct hists *VAR_5,
    struct annotation_data *VAR_6,
    s64 VAR_7, s64 VAR_8)
{
 unsigned int VAR_9 = 0;
 u64 VAR_10 = 0;

 while (VAR_7 < VAR_8) {
  VAR_9 += VAR_4->addr[VAR_7].nr_samples;
  VAR_10 += VAR_4->addr[VAR_7].period;
  ++VAR_7;
 }

 if (VAR_4->nr_samples) {
  VAR_6->he.period = VAR_10;
  VAR_6->he.nr_samples = VAR_9;
  VAR_6->percent[VAR_1] = 100.0 * VAR_9 / VAR_4->nr_samples;
 }

 if (VAR_5->stats.nr_non_filtered_samples)
  VAR_6->percent[VAR_0] = 100.0 * VAR_9 / VAR_5->stats.nr_non_filtered_samples;

 if (VAR_4->period)
  VAR_6->percent[VAR_3] = 100.0 * VAR_10 / VAR_4->period;

 if (VAR_5->stats.total_period)
  VAR_6->percent[VAR_2] = 100.0 * VAR_10 / VAR_5->stats.total_period;
}
