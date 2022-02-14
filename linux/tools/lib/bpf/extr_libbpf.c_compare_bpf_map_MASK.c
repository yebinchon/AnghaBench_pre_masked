
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map {scalar_t__ sec_idx; int sec_offset; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct bpf_map *VAR_2 = VAR_0;
 const struct bpf_map *VAR_3 = VAR_1;

 if (VAR_2->sec_idx != VAR_3->sec_idx)
  return VAR_2->sec_idx - VAR_3->sec_idx;
 return VAR_2->sec_offset - VAR_3->sec_offset;
}
