
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct perf_sample {int transaction; int data_src; int weight; int period; int stream_id; int id; int pid; int tid; int ip; } ;
struct TYPE_3__ {int sample_type; } ;
struct TYPE_4__ {TYPE_1__ attr; } ;
struct evsel {TYPE_2__ core; } ;
struct ctf_writer {int dummy; } ;
struct bt_ctf_event {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ctf_writer*,struct bt_ctf_event*,char*,int ) ;
 int FUNC_1 (struct ctf_writer*,struct bt_ctf_event*,char*,int ) ;
 int FUNC_2 (struct ctf_writer*,struct bt_ctf_event*,char*,int ) ;

__attribute__((used)) static int FUNC_3(struct ctf_writer *VAR_9,
         struct bt_ctf_event *VAR_10,
         struct evsel *VAR_11,
         struct perf_sample *VAR_12)
{
 u64 VAR_13 = VAR_11->core.attr.sample_type;
 int VAR_14;
 if (VAR_13 & VAR_3) {
  VAR_14 = FUNC_2(VAR_9, VAR_10, "perf_ip", VAR_12->ip);
  if (VAR_14)
   return -1;
 }

 if (VAR_13 & VAR_6) {
  VAR_14 = FUNC_0(VAR_9, VAR_10, "perf_tid", VAR_12->tid);
  if (VAR_14)
   return -1;

  VAR_14 = FUNC_0(VAR_9, VAR_10, "perf_pid", VAR_12->pid);
  if (VAR_14)
   return -1;
 }

 if ((VAR_13 & VAR_1) ||
     (VAR_13 & VAR_2)) {
  VAR_14 = FUNC_1(VAR_9, VAR_10, "perf_id", VAR_12->id);
  if (VAR_14)
   return -1;
 }

 if (VAR_13 & VAR_5) {
  VAR_14 = FUNC_1(VAR_9, VAR_10, "perf_stream_id", VAR_12->stream_id);
  if (VAR_14)
   return -1;
 }

 if (VAR_13 & VAR_4) {
  VAR_14 = FUNC_1(VAR_9, VAR_10, "perf_period", VAR_12->period);
  if (VAR_14)
   return -1;
 }

 if (VAR_13 & VAR_8) {
  VAR_14 = FUNC_1(VAR_9, VAR_10, "perf_weight", VAR_12->weight);
  if (VAR_14)
   return -1;
 }

 if (VAR_13 & VAR_0) {
  VAR_14 = FUNC_1(VAR_9, VAR_10, "perf_data_src",
    VAR_12->data_src);
  if (VAR_14)
   return -1;
 }

 if (VAR_13 & VAR_7) {
  VAR_14 = FUNC_1(VAR_9, VAR_10, "perf_transaction",
    VAR_12->transaction);
  if (VAR_14)
   return -1;
 }

 return 0;
}
