
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xyarray {int row_size; int entry_size; unsigned int entries; } ;
struct perf_event_attr {scalar_t__ type; scalar_t__ inherit; } ;
struct TYPE_2__ {struct perf_event_attr attr; struct xyarray* fd; } ;
struct evsel {TYPE_1__ core; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int,void*,int*,int ) ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (struct evsel*) ;
 int FUNC_2 (char*,...) ;
 int* FUNC_3 (struct xyarray*,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_9, int VAR_10, void *VAR_11,
      struct evsel *VAR_12)
{
 struct xyarray *VAR_13 = VAR_12->core.fd;
 struct perf_event_attr *VAR_14;
 unsigned int VAR_15, VAR_16;
 bool VAR_17 = 0;
 int *VAR_18;
 int VAR_19;

 if (!VAR_13) {
  FUNC_2("ERROR: evsel not ready for map %s\n", VAR_9);
  return -VAR_1;
 }

 if (VAR_13->row_size / VAR_13->entry_size != 1) {
  FUNC_2("ERROR: Dimension of target event is incorrect for map %s\n",
    VAR_9);
  return -VAR_2;
 }

 VAR_14 = &VAR_12->core.attr;
 if (VAR_14->inherit) {
  FUNC_2("ERROR: Can't put inherit event into map %s\n", VAR_9);
  return -VAR_3;
 }

 if (FUNC_1(VAR_12))
  VAR_17 = 1;
 if (VAR_14->type == VAR_7)
  VAR_17 = 1;
 if (VAR_14->type == VAR_6)
  VAR_17 = 1;
 if (!VAR_17) {
  FUNC_2("ERROR: Event type is wrong for map %s\n", VAR_9);
  return -VAR_4;
 }

 VAR_16 = VAR_13->entries / (VAR_13->row_size / VAR_13->entry_size);
 VAR_15 = *((unsigned int *)VAR_11);
 if (VAR_15 >= VAR_16) {
  FUNC_2("ERROR: there is no event %d for map %s\n",
    VAR_15, VAR_9);
  return -VAR_5;
 }
 VAR_18 = FUNC_3(VAR_13, VAR_15, 0);
 VAR_19 = FUNC_0(VAR_10, VAR_11, VAR_18, VAR_0);
 if (VAR_19 && VAR_8)
  VAR_19 = -VAR_8;
 return VAR_19;
}
