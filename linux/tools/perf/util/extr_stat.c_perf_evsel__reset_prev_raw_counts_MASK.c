
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct evsel {TYPE_2__* prev_raw_counts; } ;
struct TYPE_3__ {scalar_t__ run; scalar_t__ ena; scalar_t__ val; } ;
struct TYPE_4__ {TYPE_1__ aggr; } ;



__attribute__((used)) static void FUNC_0(struct evsel *VAR_0)
{
 if (VAR_0->prev_raw_counts) {
  VAR_0->prev_raw_counts->aggr.val = 0;
  VAR_0->prev_raw_counts->aggr.ena = 0;
  VAR_0->prev_raw_counts->aggr.run = 0;
       }
}
