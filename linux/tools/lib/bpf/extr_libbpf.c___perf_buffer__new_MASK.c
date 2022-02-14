
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct perf_cpu_buf {int fd; } ;
struct perf_buffer_params {scalar_t__ cpu_cnt; int* cpus; int* map_keys; int attr; int ctx; int lost_cb; int sample_cb; int event_cb; } ;
struct perf_buffer {size_t page_size; size_t mmap_size; int map_fd; scalar_t__ epoll_fd; scalar_t__ cpu_cnt; TYPE_2__* events; struct perf_cpu_buf** cpu_bufs; int ctx; int lost_cb; int sample_cb; int event_cb; } ;
struct bpf_map_info {scalar_t__ type; int max_entries; int name; } ;
typedef int msg ;
typedef int map ;
typedef int __u32 ;
struct TYPE_3__ {struct perf_cpu_buf* ptr; } ;
struct TYPE_4__ {TYPE_1__ data; int events; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct perf_buffer* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct perf_cpu_buf*) ;
 int FUNC_2 (struct perf_cpu_buf*) ;
 int VAR_6 ;
 int FUNC_3 (int,int*,int *,int ) ;
 int FUNC_4 (int,struct bpf_map_info*,int*) ;
 void* FUNC_5 (int,int) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__,int ,int ,TYPE_2__*) ;
 int VAR_7 ;
 size_t FUNC_8 () ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int,char*,int) ;
 int FUNC_11 (struct perf_buffer*) ;
 struct perf_cpu_buf* FUNC_12 (struct perf_buffer*,int ,int,int) ;
 int FUNC_13 (char*,...) ;

__attribute__((used)) static struct perf_buffer *FUNC_14(int VAR_8, size_t VAR_9,
           struct perf_buffer_params *VAR_10)
{
 struct bpf_map_info VAR_11 = {};
 char VAR_12[VAR_6];
 struct perf_buffer *VAR_13;
 __u32 VAR_14;
 int VAR_15, VAR_16;

 if (VAR_9 & (VAR_9 - 1)) {
  FUNC_13("page count should be power of two, but is %zu\n",
      VAR_9);
  return FUNC_0(-VAR_1);
 }

 VAR_14 = sizeof(VAR_11);
 VAR_15 = FUNC_4(VAR_8, &VAR_11, &VAR_14);
 if (VAR_15) {
  VAR_15 = -VAR_7;
  FUNC_13("failed to get map info for map FD %d: %s\n",
      VAR_8, FUNC_10(VAR_15, VAR_12, sizeof(VAR_12)));
  return FUNC_0(VAR_15);
 }

 if (VAR_11.type != VAR_0) {
  FUNC_13("map '%s' should be BPF_MAP_TYPE_PERF_EVENT_ARRAY\n",
      VAR_11.name);
  return FUNC_0(-VAR_1);
 }

 VAR_13 = FUNC_5(1, sizeof(*VAR_13));
 if (!VAR_13)
  return FUNC_0(-VAR_2);

 VAR_13->event_cb = VAR_10->event_cb;
 VAR_13->sample_cb = VAR_10->sample_cb;
 VAR_13->lost_cb = VAR_10->lost_cb;
 VAR_13->ctx = VAR_10->ctx;

 VAR_13->page_size = FUNC_8();
 VAR_13->mmap_size = VAR_13->page_size * VAR_9;
 VAR_13->map_fd = VAR_8;

 VAR_13->epoll_fd = FUNC_6(VAR_4);
 if (VAR_13->epoll_fd < 0) {
  VAR_15 = -VAR_7;
  FUNC_13("failed to create epoll instance: %s\n",
      FUNC_10(VAR_15, VAR_12, sizeof(VAR_12)));
  goto error;
 }

 if (VAR_10->cpu_cnt > 0) {
  VAR_13->cpu_cnt = VAR_10->cpu_cnt;
 } else {
  VAR_13->cpu_cnt = FUNC_9();
  if (VAR_13->cpu_cnt < 0) {
   VAR_15 = VAR_13->cpu_cnt;
   goto error;
  }
  if (VAR_11.max_entries < VAR_13->cpu_cnt)
   VAR_13->cpu_cnt = VAR_11.max_entries;
 }

 VAR_13->events = FUNC_5(VAR_13->cpu_cnt, sizeof(*VAR_13->events));
 if (!VAR_13->events) {
  VAR_15 = -VAR_2;
  FUNC_13("failed to allocate events: out of memory\n");
  goto error;
 }
 VAR_13->cpu_bufs = FUNC_5(VAR_13->cpu_cnt, sizeof(*VAR_13->cpu_bufs));
 if (!VAR_13->cpu_bufs) {
  VAR_15 = -VAR_2;
  FUNC_13("failed to allocate buffers: out of memory\n");
  goto error;
 }

 for (VAR_16 = 0; VAR_16 < VAR_13->cpu_cnt; VAR_16++) {
  struct perf_cpu_buf *VAR_17;
  int VAR_18, VAR_19;

  VAR_18 = VAR_10->cpu_cnt > 0 ? VAR_10->cpus[VAR_16] : VAR_16;
  VAR_19 = VAR_10->cpu_cnt > 0 ? VAR_10->map_keys[VAR_16] : VAR_16;

  VAR_17 = FUNC_12(VAR_13, VAR_10->attr, VAR_18, VAR_19);
  if (FUNC_1(VAR_17)) {
   VAR_15 = FUNC_2(VAR_17);
   goto error;
  }

  VAR_13->cpu_bufs[VAR_16] = VAR_17;

  VAR_15 = FUNC_3(VAR_13->map_fd, &VAR_19,
       &VAR_17->fd, 0);
  if (VAR_15) {
   VAR_15 = -VAR_7;
   FUNC_13("failed to set cpu #%d, key %d -> perf FD %d: %s\n",
       VAR_18, VAR_19, VAR_17->fd,
       FUNC_10(VAR_15, VAR_12, sizeof(VAR_12)));
   goto error;
  }

  VAR_13->events[VAR_16].events = VAR_3;
  VAR_13->events[VAR_16].data.ptr = VAR_17;
  if (FUNC_7(VAR_13->epoll_fd, VAR_5, VAR_17->fd,
         &VAR_13->events[VAR_16]) < 0) {
   VAR_15 = -VAR_7;
   FUNC_13("failed to epoll_ctl cpu #%d perf FD %d: %s\n",
       VAR_18, VAR_17->fd,
       FUNC_10(VAR_15, VAR_12, sizeof(VAR_12)));
   goto error;
  }
 }

 return VAR_13;

error:
 if (VAR_13)
  FUNC_11(VAR_13);
 return FUNC_0(VAR_15);
}
