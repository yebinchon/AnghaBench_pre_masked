
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct extra_kernel_map_info {size_t cnt; size_t max_cnt; TYPE_1__* maps; } ;
struct extra_kernel_map {int dummy; } ;
struct TYPE_2__ {int name; void* pgoff; void* end; void* start; } ;


 int VAR_0 ;
 void* FUNC_0 (TYPE_1__*,size_t) ;
 int FUNC_1 (int ,char const*,int ) ;

__attribute__((used)) static int FUNC_2(struct extra_kernel_map_info *VAR_1, u64 VAR_2,
    u64 VAR_3, u64 VAR_4, const char *VAR_5)
{
 if (VAR_1->cnt >= VAR_1->max_cnt) {
  void *VAR_6;
  size_t VAR_7;

  VAR_1->max_cnt = VAR_1->max_cnt ? VAR_1->max_cnt * 2 : 32;
  VAR_7 = sizeof(struct extra_kernel_map) * VAR_1->max_cnt;
  VAR_6 = FUNC_0(VAR_1->maps, VAR_7);
  if (!VAR_6)
   return -1;
  VAR_1->maps = VAR_6;
 }

 VAR_1->maps[VAR_1->cnt].start = VAR_2;
 VAR_1->maps[VAR_1->cnt].end = VAR_3;
 VAR_1->maps[VAR_1->cnt].pgoff = VAR_4;
 FUNC_1(VAR_1->maps[VAR_1->cnt].name, VAR_5, VAR_0);

 VAR_1->cnt += 1;

 return 0;
}
