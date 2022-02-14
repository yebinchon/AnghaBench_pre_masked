
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


union u64_swap {void** val32; void* val64; } ;
struct TYPE_8__ {int size; } ;
struct TYPE_7__ {void** array; } ;
union perf_event {TYPE_4__ header; TYPE_3__ sample; } ;
typedef int u64 ;
struct perf_sample {void* tid; void* pid; void* time; void* id; void* stream_id; void* cpu; } ;
struct TYPE_5__ {int sample_type; } ;
struct TYPE_6__ {TYPE_1__ attr; } ;
struct evsel {int needs_swap; TYPE_2__ core; } ;
typedef void* __u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (void*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static int FUNC_2(const struct evsel *VAR_6,
           const union perf_event *VAR_7,
           struct perf_sample *VAR_8)
{
 u64 VAR_9 = VAR_6->core.attr.sample_type;
 const __u64 *VAR_10 = VAR_7->sample.array;
 bool VAR_11 = VAR_6->needs_swap;
 union u64_swap VAR_12;

 VAR_10 += ((VAR_7->header.size -
     sizeof(VAR_7->header)) / sizeof(u64)) - 1;

 if (VAR_9 & VAR_2) {
  VAR_8->id = *VAR_10;
  VAR_10--;
 }

 if (VAR_9 & VAR_0) {
  VAR_12.val64 = *VAR_10;
  if (VAR_11) {

   VAR_12.val64 = FUNC_1(VAR_12.val64);
   VAR_12.val32[0] = FUNC_0(VAR_12.val32[0]);
  }

  VAR_8->cpu = VAR_12.val32[0];
  VAR_10--;
 }

 if (VAR_9 & VAR_3) {
  VAR_8->stream_id = *VAR_10;
  VAR_10--;
 }

 if (VAR_9 & VAR_1) {
  VAR_8->id = *VAR_10;
  VAR_10--;
 }

 if (VAR_9 & VAR_5) {
  VAR_8->time = *VAR_10;
  VAR_10--;
 }

 if (VAR_9 & VAR_4) {
  VAR_12.val64 = *VAR_10;
  if (VAR_11) {

   VAR_12.val64 = FUNC_1(VAR_12.val64);
   VAR_12.val32[0] = FUNC_0(VAR_12.val32[0]);
   VAR_12.val32[1] = FUNC_0(VAR_12.val32[1]);
  }

  VAR_8->pid = VAR_12.val32[0];
  VAR_8->tid = VAR_12.val32[1];
  VAR_10--;
 }

 return 0;
}
