
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct trace {int nr_events_printed; int output; } ;
struct perf_sample {int raw_size; int raw_data; } ;


 int FUNC_0 (int ,int ,int,int ,int *,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct trace *VAR_1,
    struct perf_sample *VAR_2)
{
 FUNC_0(VAR_2->raw_data, VAR_2->raw_size, 8,
   VAR_0, ((void*)0), VAR_1->output);
 ++VAR_1->nr_events_printed;
}
