
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct perf_event_mmap_page {int dummy; } ;
struct evlist {TYPE_4__* overwrite_mmap; TYPE_2__* mmap; } ;
struct TYPE_7__ {struct perf_event_mmap_page const* base; } ;
struct TYPE_8__ {TYPE_3__ core; } ;
struct TYPE_5__ {struct perf_event_mmap_page const* base; } ;
struct TYPE_6__ {TYPE_1__ core; } ;



__attribute__((used)) static const struct perf_event_mmap_page *
FUNC_0(struct evlist *VAR_0)
{
 if (VAR_0) {
  if (VAR_0->mmap && VAR_0->mmap[0].core.base)
   return VAR_0->mmap[0].core.base;
  if (VAR_0->overwrite_mmap && VAR_0->overwrite_mmap[0].core.base)
   return VAR_0->overwrite_mmap[0].core.base;
 }
 return ((void*)0);
}
