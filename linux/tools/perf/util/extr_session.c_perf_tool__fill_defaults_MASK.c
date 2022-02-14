
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_tool {int * compressed; int * feature; int * time_conv; int * stat_round; int * stat; int * stat_config; int * cpu_map; int * thread_map; int * auxtrace_error; int * auxtrace; int * auxtrace_info; int * id_index; int * finished_round; scalar_t__ ordered_events; int * build_id; int * tracing_data; int * event_update; int * attr; int * unthrottle; int * throttle; int * read; int * bpf; int * ksymbol; int * context_switch; int * itrace_start; int * aux; int * lost_samples; int * lost; int * exit; int * fork; int * namespaces; int * comm; int * mmap2; int * mmap; int * sample; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int * VAR_12 ;
 void* VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int * VAR_20 ;
 int * VAR_21 ;

void FUNC_0(struct perf_tool *VAR_22)
{
 if (VAR_22->sample == ((void*)0))
  VAR_22->sample = VAR_11;
 if (VAR_22->mmap == ((void*)0))
  VAR_22->mmap = VAR_13;
 if (VAR_22->mmap2 == ((void*)0))
  VAR_22->mmap2 = VAR_13;
 if (VAR_22->comm == ((void*)0))
  VAR_22->comm = VAR_13;
 if (VAR_22->namespaces == ((void*)0))
  VAR_22->namespaces = VAR_13;
 if (VAR_22->fork == ((void*)0))
  VAR_22->fork = VAR_13;
 if (VAR_22->exit == ((void*)0))
  VAR_22->exit = VAR_13;
 if (VAR_22->lost == ((void*)0))
  VAR_22->lost = VAR_4;
 if (VAR_22->lost_samples == ((void*)0))
  VAR_22->lost_samples = VAR_5;
 if (VAR_22->aux == ((void*)0))
  VAR_22->aux = VAR_0;
 if (VAR_22->itrace_start == ((void*)0))
  VAR_22->itrace_start = VAR_2;
 if (VAR_22->context_switch == ((void*)0))
  VAR_22->context_switch = VAR_6;
 if (VAR_22->ksymbol == ((void*)0))
  VAR_22->ksymbol = VAR_3;
 if (VAR_22->bpf == ((void*)0))
  VAR_22->bpf = VAR_1;
 if (VAR_22->read == ((void*)0))
  VAR_22->read = VAR_11;
 if (VAR_22->throttle == ((void*)0))
  VAR_22->throttle = VAR_13;
 if (VAR_22->unthrottle == ((void*)0))
  VAR_22->unthrottle = VAR_13;
 if (VAR_22->attr == ((void*)0))
  VAR_22->attr = VAR_14;
 if (VAR_22->event_update == ((void*)0))
  VAR_22->event_update = VAR_15;
 if (VAR_22->tracing_data == ((void*)0))
  VAR_22->tracing_data = VAR_16;
 if (VAR_22->build_id == ((void*)0))
  VAR_22->build_id = VAR_10;
 if (VAR_22->finished_round == ((void*)0)) {
  if (VAR_22->ordered_events)
   VAR_22->finished_round = VAR_18;
  else
   VAR_22->finished_round = VAR_19;
 }
 if (VAR_22->id_index == ((void*)0))
  VAR_22->id_index = VAR_10;
 if (VAR_22->auxtrace_info == ((void*)0))
  VAR_22->auxtrace_info = VAR_10;
 if (VAR_22->auxtrace == ((void*)0))
  VAR_22->auxtrace = VAR_8;
 if (VAR_22->auxtrace_error == ((void*)0))
  VAR_22->auxtrace_error = VAR_10;
 if (VAR_22->thread_map == ((void*)0))
  VAR_22->thread_map = VAR_17;
 if (VAR_22->cpu_map == ((void*)0))
  VAR_22->cpu_map = VAR_9;
 if (VAR_22->stat_config == ((void*)0))
  VAR_22->stat_config = VAR_12;
 if (VAR_22->stat == ((void*)0))
  VAR_22->stat = VAR_21;
 if (VAR_22->stat_round == ((void*)0))
  VAR_22->stat_round = VAR_20;
 if (VAR_22->time_conv == ((void*)0))
  VAR_22->time_conv = VAR_10;
 if (VAR_22->feature == ((void*)0))
  VAR_22->feature = VAR_10;
 if (VAR_22->compressed == ((void*)0))
  VAR_22->compressed = VAR_7;
}
