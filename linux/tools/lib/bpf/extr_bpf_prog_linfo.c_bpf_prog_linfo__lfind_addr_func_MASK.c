
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_linfo {size_t nr_jited_func; size_t* nr_jited_linfo_per_func; size_t* jited_linfo_func_idx; size_t jited_rec_size; void* raw_jited_linfo; size_t rec_size; void* raw_linfo; } ;
typedef void bpf_line_info ;
typedef scalar_t__ const __u64 ;
typedef size_t __u32 ;



const struct bpf_line_info *
FUNC_0(const struct bpf_prog_linfo *VAR_0,
    __u64 VAR_1, __u32 VAR_2, __u32 VAR_3)
{
 __u32 VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 const void *VAR_9, *VAR_10;
 const __u64 *VAR_11;

 if (VAR_2 >= VAR_0->nr_jited_func)
  return ((void*)0);

 VAR_6 = VAR_0->nr_jited_linfo_per_func[VAR_2];
 if (VAR_3 >= VAR_6)
  return ((void*)0);

 VAR_7 = VAR_0->jited_linfo_func_idx[VAR_2] + VAR_3;
 VAR_4 = VAR_0->jited_rec_size;
 VAR_9 = VAR_0->raw_jited_linfo +
  (VAR_7 * VAR_4);
 VAR_11 = VAR_9;
 if (VAR_1 < *VAR_11)
  return ((void*)0);

 VAR_6 -= VAR_3;
 VAR_5 = VAR_0->rec_size;
 VAR_10 = VAR_0->raw_linfo + (VAR_7 * VAR_5);
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  if (VAR_1 < *VAR_11)
   break;

  VAR_10 += VAR_5;
  VAR_9 += VAR_4;
  VAR_11 = VAR_9;
 }

 return VAR_10 - VAR_5;
}
