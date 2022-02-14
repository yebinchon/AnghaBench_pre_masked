
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_def {int dummy; } ;
struct bpf_map {struct bpf_map_def const def; } ;


 int VAR_0 ;
 struct bpf_map_def const* FUNC_0 (int ) ;

const struct bpf_map_def *FUNC_1(const struct bpf_map *VAR_1)
{
 return VAR_1 ? &VAR_1->def : FUNC_0(-VAR_0);
}
