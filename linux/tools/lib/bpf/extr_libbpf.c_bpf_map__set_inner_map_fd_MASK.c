
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; } ;
struct bpf_map {int inner_map_fd; TYPE_1__ def; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;

int FUNC_2(struct bpf_map *VAR_1, int VAR_2)
{
 if (!FUNC_0(VAR_1->def.type)) {
  FUNC_1("error: unsupported map type\n");
  return -VAR_0;
 }
 if (VAR_1->inner_map_fd != -1) {
  FUNC_1("error: inner_map_fd already specified\n");
  return -VAR_0;
 }
 VAR_1->inner_map_fd = VAR_2;
 return 0;
}
