
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct perf_event_attr {int dummy; } ;
struct perf_cpu_buf {int cpu; int map_key; scalar_t__ fd; int * base; struct perf_buffer* pb; } ;
struct perf_buffer {scalar_t__ page_size; scalar_t__ mmap_size; } ;
typedef int msg ;


 int VAR_0 ;
 struct perf_cpu_buf* FUNC_0 (int) ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct perf_cpu_buf* FUNC_1 (int,int) ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ) ;
 int FUNC_3 (int,char*,int) ;
 int * FUNC_4 (int *,scalar_t__,int,int ,scalar_t__,int ) ;
 int FUNC_5 (struct perf_buffer*,struct perf_cpu_buf*) ;
 int FUNC_6 (char*,int,int ) ;
 scalar_t__ FUNC_7 (int ,struct perf_event_attr*,int,int,int,int ) ;

__attribute__((used)) static struct perf_cpu_buf *
FUNC_8(struct perf_buffer *VAR_10, struct perf_event_attr *VAR_11,
     int VAR_12, int VAR_13)
{
 struct perf_cpu_buf *VAR_14;
 char VAR_15[VAR_7];
 int VAR_16;

 VAR_14 = FUNC_1(1, sizeof(*VAR_14));
 if (!VAR_14)
  return FUNC_0(-VAR_0);

 VAR_14->pb = VAR_10;
 VAR_14->cpu = VAR_12;
 VAR_14->map_key = VAR_13;

 VAR_14->fd = FUNC_7(VAR_8, VAR_11, -1 , VAR_12,
         -1, VAR_4);
 if (VAR_14->fd < 0) {
  VAR_16 = -VAR_9;
  FUNC_6("failed to open perf buffer event on cpu #%d: %s\n",
      VAR_12, FUNC_3(VAR_16, VAR_15, sizeof(VAR_15)));
  goto error;
 }

 VAR_14->base = FUNC_4(((void*)0), VAR_10->mmap_size + VAR_10->page_size,
        VAR_5 | VAR_6, VAR_2,
        VAR_14->fd, 0);
 if (VAR_14->base == VAR_1) {
  VAR_14->base = ((void*)0);
  VAR_16 = -VAR_9;
  FUNC_6("failed to mmap perf buffer on cpu #%d: %s\n",
      VAR_12, FUNC_3(VAR_16, VAR_15, sizeof(VAR_15)));
  goto error;
 }

 if (FUNC_2(VAR_14->fd, VAR_3, 0) < 0) {
  VAR_16 = -VAR_9;
  FUNC_6("failed to enable perf buffer event on cpu #%d: %s\n",
      VAR_12, FUNC_3(VAR_16, VAR_15, sizeof(VAR_15)));
  goto error;
 }

 return VAR_14;

error:
 FUNC_5(VAR_10, VAR_14);
 return (struct perf_cpu_buf *)FUNC_0(VAR_16);
}
