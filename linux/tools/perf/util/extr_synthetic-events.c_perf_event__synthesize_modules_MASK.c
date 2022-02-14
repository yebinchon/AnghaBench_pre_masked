
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int size; void* type; } ;
struct TYPE_7__ {int filename; int pid; scalar_t__ len; scalar_t__ start; TYPE_2__ header; } ;
struct TYPE_5__ {int misc; void* type; } ;
union perf_event {TYPE_3__ mmap; TYPE_1__ header; } ;
typedef int u64 ;
struct perf_tool {int dummy; } ;
struct maps {int dummy; } ;
struct map {TYPE_4__* dso; scalar_t__ start; scalar_t__ end; } ;
struct machine {int id_hdr_size; int pid; } ;
typedef int perf_event__handler_t ;
struct TYPE_8__ {scalar_t__ long_name_len; int long_name; } ;


 size_t FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_1 (struct map*) ;
 int FUNC_2 (union perf_event*) ;
 scalar_t__ FUNC_3 (struct machine*) ;
 struct maps* FUNC_4 (struct machine*) ;
 struct map* FUNC_5 (struct map*) ;
 struct map* FUNC_6 (struct maps*) ;
 int FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (int ,int ,int) ;
 scalar_t__ FUNC_9 (struct perf_tool*,union perf_event*,struct machine*,int ) ;
 int FUNC_10 (char*) ;
 union perf_event* FUNC_11 (int) ;

int FUNC_12(struct perf_tool *VAR_3, perf_event__handler_t VAR_4,
       struct machine *VAR_5)
{
 int VAR_6 = 0;
 struct map *VAR_7;
 struct maps *VAR_8 = FUNC_4(VAR_5);
 union perf_event *VAR_9 = FUNC_11((sizeof(VAR_9->mmap) +
       VAR_5->id_hdr_size));
 if (VAR_9 == ((void*)0)) {
  FUNC_10("Not enough memory synthesizing mmap event "
    "for kernel modules\n");
  return -1;
 }

 VAR_9->header.type = VAR_2;





 if (FUNC_3(VAR_5))
  VAR_9->header.misc = VAR_1;
 else
  VAR_9->header.misc = VAR_0;

 for (VAR_7 = FUNC_6(VAR_8); VAR_7; VAR_7 = FUNC_5(VAR_7)) {
  size_t VAR_10;

  if (!FUNC_1(VAR_7))
   continue;

  VAR_10 = FUNC_0(VAR_7->dso->long_name_len + 1, sizeof(u64));
  VAR_9->mmap.header.type = VAR_2;
  VAR_9->mmap.header.size = (sizeof(VAR_9->mmap) -
            (sizeof(VAR_9->mmap.filename) - VAR_10));
  FUNC_8(VAR_9->mmap.filename + VAR_10, 0, VAR_5->id_hdr_size);
  VAR_9->mmap.header.size += VAR_5->id_hdr_size;
  VAR_9->mmap.start = VAR_7->start;
  VAR_9->mmap.len = VAR_7->end - VAR_7->start;
  VAR_9->mmap.pid = VAR_5->pid;

  FUNC_7(VAR_9->mmap.filename, VAR_7->dso->long_name,
         VAR_7->dso->long_name_len + 1);
  if (FUNC_9(VAR_3, VAR_9, VAR_5, VAR_4) != 0) {
   VAR_6 = -1;
   break;
  }
 }

 FUNC_2(VAR_9);
 return VAR_6;
}
