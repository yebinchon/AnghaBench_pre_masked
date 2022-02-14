
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union perf_event {int dummy; } perf_event ;
typedef unsigned long long u64 ;
struct ordered_events {unsigned long long last_flush; int nr_unordered_events; int last_flush_type; } ;
struct ordered_event {unsigned long long file_offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ordered_events*,int ) ;
 struct ordered_event* FUNC_1 (struct ordered_events*,unsigned long long,union perf_event*) ;
 int FUNC_2 (unsigned long long,char*,...) ;

int FUNC_3(struct ordered_events *VAR_3, union perf_event *VAR_4,
     u64 VAR_5, u64 VAR_6)
{
 struct ordered_event *VAR_7;

 if (!VAR_5 || VAR_5 == ~0ULL)
  return -VAR_1;

 if (VAR_5 < VAR_3->last_flush) {
  FUNC_2(VAR_5, "out of order event\n");
  FUNC_2(VAR_3->last_flush, "last flush, last_flush_type %d\n",
      VAR_3->last_flush_type);

  VAR_3->nr_unordered_events++;
 }

 VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_4);
 if (!VAR_7) {
  FUNC_0(VAR_3, VAR_2);
  VAR_7 = FUNC_1(VAR_3, VAR_5, VAR_4);
 }

 if (!VAR_7)
  return -VAR_0;

 VAR_7->file_offset = VAR_6;
 return 0;
}
