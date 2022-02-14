
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bpf_map {int map_type; } ;






 void* FUNC_0 (struct bpf_map*,int ) ;
 void* FUNC_1 (struct bpf_map*,int ) ;
 void* FUNC_2 (struct bpf_map*,int ) ;
 void* FUNC_3 (struct bpf_map*,int ) ;

__attribute__((used)) static inline void *FUNC_4(struct bpf_map *VAR_0, u32 VAR_1)
{
 switch (VAR_0->map_type) {
 case 130:
  return FUNC_2(VAR_0, VAR_1);
 case 129:
  return FUNC_1(VAR_0, VAR_1);
 case 131:
  return FUNC_0(VAR_0, VAR_1);
 case 128:
  return FUNC_3(VAR_0, VAR_1);
 default:
  return ((void*)0);
 }
}
