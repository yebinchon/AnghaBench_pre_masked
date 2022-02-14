
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_prog_linfo {void* raw_jited_linfo; size_t* jited_linfo_func_idx; size_t nr_jited_func; size_t nr_linfo; size_t* nr_jited_linfo_per_func; int jited_rec_size; } ;
typedef scalar_t__ __u64 ;
typedef size_t __u32 ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct bpf_prog_linfo *VAR_1,
         const __u64 *VAR_2, const __u32 *VAR_3)
{
 __u32 VAR_4, VAR_5;
 const void *VAR_6;
 const __u64 *VAR_7;
 __u64 VAR_8;





 __u32 VAR_9, VAR_10;
 __u32 VAR_11;

 VAR_6 = VAR_1->raw_jited_linfo;
 VAR_7 = VAR_6;
 if (VAR_2[0] != *VAR_7)
  goto errout;

 VAR_1->jited_linfo_func_idx[0] = 0;
 VAR_4 = VAR_1->nr_jited_func;
 VAR_5 = VAR_1->nr_linfo;

 for (VAR_10 = 0, VAR_9 = 1, VAR_11 = 1;
      VAR_9 < VAR_5 && VAR_11 < VAR_4;
      VAR_9++) {
  VAR_6 += VAR_1->jited_rec_size;
  VAR_8 = *VAR_7;
  VAR_7 = VAR_6;

  if (VAR_2[VAR_11] == *VAR_7) {
   VAR_1->jited_linfo_func_idx[VAR_11] = VAR_9;


   if (VAR_8 - VAR_2[VAR_11 - 1] + 1 >
       VAR_3[VAR_11 - 1])
    goto errout;

   VAR_1->nr_jited_linfo_per_func[VAR_11 - 1] =
    VAR_9 - VAR_10;
   VAR_10 = VAR_9;





   VAR_11++;
  } else if (*VAR_7 <= VAR_8) {

   goto errout;
  }
 }

 if (VAR_11 != VAR_4)
  goto errout;

 VAR_1->nr_jited_linfo_per_func[VAR_4 - 1] =
  VAR_5 - VAR_10;

 return 0;

errout:
 return -VAR_0;
}
