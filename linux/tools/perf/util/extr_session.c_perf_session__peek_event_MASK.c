
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t size; scalar_t__ type; } ;
union perf_event {TYPE_2__ header; } ;
struct TYPE_3__ {scalar_t__ needs_swap; } ;
struct perf_session {scalar_t__ one_mmap_offset; int evlist; TYPE_1__ header; int data; union perf_event* one_mmap_addr; scalar_t__ one_mmap; } ;
struct perf_sample {int dummy; } ;
struct perf_event_header {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ off_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (union perf_event*,int ) ;
 scalar_t__ FUNC_1 (int,scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,union perf_event*,struct perf_sample*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int,void*,size_t) ;

int FUNC_8(struct perf_session *VAR_2, off_t VAR_3,
        void *VAR_4, size_t VAR_5,
        union perf_event **VAR_6,
        struct perf_sample *VAR_7)
{
 union perf_event *VAR_8;
 size_t VAR_9, VAR_10;
 int VAR_11;

 if (VAR_2->one_mmap && !VAR_2->header.needs_swap) {
  VAR_8 = VAR_3 - VAR_2->one_mmap_offset +
   VAR_2->one_mmap_addr;
  goto out_parse_sample;
 }

 if (FUNC_3(VAR_2->data))
  return -1;

 VAR_11 = FUNC_2(VAR_2->data);
 VAR_9 = sizeof(struct perf_event_header);

 if (VAR_5 < VAR_9)
  return -1;

 if (FUNC_1(VAR_11, VAR_3, VAR_1) == (off_t)-1 ||
     FUNC_7(VAR_11, VAR_4, VAR_9) != (ssize_t)VAR_9)
  return -1;

 VAR_8 = (union perf_event *)VAR_4;

 if (VAR_2->header.needs_swap)
  FUNC_4(&VAR_8->header);

 if (VAR_8->header.size < VAR_9 || VAR_8->header.size > VAR_5)
  return -1;

 VAR_10 = VAR_8->header.size - VAR_9;

 if (FUNC_7(VAR_11, VAR_4, VAR_10) != (ssize_t)VAR_10)
  return -1;

 if (VAR_2->header.needs_swap)
  FUNC_0(VAR_8, FUNC_6(VAR_2->evlist));

out_parse_sample:

 if (VAR_7 && VAR_8->header.type < VAR_0 &&
     FUNC_5(VAR_2->evlist, VAR_8, VAR_7))
  return -1;

 *VAR_6 = VAR_8;

 return 0;
}
