
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ max_entries; } ;
struct bpf_map {scalar_t__ fd; TYPE_1__ def; } ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;

int FUNC_0(struct bpf_map *VAR_2, __u32 VAR_3)
{
 if (!VAR_2 || !VAR_3)
  return -VAR_1;


 if (VAR_2->fd >= 0)
  return -VAR_0;

 VAR_2->def.max_entries = VAR_3;

 return 0;
}
