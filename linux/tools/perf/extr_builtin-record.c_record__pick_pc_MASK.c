
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct record {int evlist; } ;
struct perf_event_mmap_page {int dummy; } ;


 struct perf_event_mmap_page* FUNC_0 (int ) ;

__attribute__((used)) static const struct perf_event_mmap_page *FUNC_1(struct record *VAR_0)
{
 const struct perf_event_mmap_page *VAR_1;

 VAR_1 = FUNC_0(VAR_0->evlist);
 if (VAR_1)
  return VAR_1;
 return ((void*)0);
}
