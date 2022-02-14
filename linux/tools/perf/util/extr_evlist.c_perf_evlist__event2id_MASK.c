
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int size; scalar_t__ type; } ;
struct TYPE_3__ {int * array; } ;
union perf_event {TYPE_2__ header; TYPE_1__ sample; } ;
typedef int u64 ;
struct evlist {size_t id_pos; size_t is_pos; } ;
typedef size_t ssize_t ;
typedef int __u64 ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(struct evlist *VAR_1,
     union perf_event *VAR_2, u64 *VAR_3)
{
 const __u64 *VAR_4 = VAR_2->sample.array;
 ssize_t VAR_5;

 VAR_5 = (VAR_2->header.size - sizeof(VAR_2->header)) >> 3;

 if (VAR_2->header.type == VAR_0) {
  if (VAR_1->id_pos >= VAR_5)
   return -1;
  *VAR_3 = VAR_4[VAR_1->id_pos];
 } else {
  if (VAR_1->is_pos > VAR_5)
   return -1;
  VAR_5 -= VAR_1->is_pos;
  *VAR_3 = VAR_4[VAR_5];
 }
 return 0;
}
