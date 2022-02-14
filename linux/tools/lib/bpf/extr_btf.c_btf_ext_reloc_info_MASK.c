
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_ext_info_sec {scalar_t__ num_info; int data; int sec_name_off; } ;
struct btf_ext_info {scalar_t__ rec_size; scalar_t__ len; struct btf_ext_info_sec* info; } ;
struct btf {int dummy; } ;
struct bpf_insn {int dummy; } ;
typedef scalar_t__ __u64 ;
typedef scalar_t__ __u32 ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct btf const*,int ) ;
 int FUNC_1 (void*,int ,scalar_t__) ;
 void* FUNC_2 (void*,scalar_t__) ;
 scalar_t__ FUNC_3 (char const*,char const*) ;

__attribute__((used)) static int FUNC_4(const struct btf *VAR_2,
         const struct btf_ext_info *VAR_3,
         const char *VAR_4, __u32 VAR_5,
         void **VAR_6, __u32 *VAR_7)
{
 __u32 VAR_8 = sizeof(struct btf_ext_info_sec);
 __u32 VAR_9, VAR_10, VAR_11, VAR_12;
 struct btf_ext_info_sec *VAR_13;
 const char *VAR_14;
 __u64 VAR_15;
 void *VAR_16;

 VAR_10 = VAR_3->rec_size;
 VAR_13 = VAR_3->info;
 VAR_15 = VAR_3->len;
 while (VAR_15 > 0) {
  VAR_12 = VAR_13->num_info * VAR_10;
  VAR_14 = FUNC_0(VAR_2, VAR_13->sec_name_off);
  if (FUNC_3(VAR_14, VAR_4)) {
   VAR_15 -= VAR_8 + VAR_12;
   VAR_13 = (void *)VAR_13 + VAR_8 + VAR_12;
   continue;
  }

  VAR_11 = (*VAR_7) * VAR_10;
  VAR_16 = FUNC_2(*VAR_6, VAR_11 + VAR_12);
  if (!VAR_16)
   return -VAR_1;

  FUNC_1(VAR_16 + VAR_11, VAR_13->data, VAR_12);



  for (VAR_9 = 0; VAR_9 < VAR_13->num_info; VAR_9++) {
   __u32 *VAR_17;

   VAR_17 = VAR_16 + VAR_11 + (VAR_9 * VAR_10);
   *VAR_17 = *VAR_17 / sizeof(struct bpf_insn) +
    VAR_5;
  }
  *VAR_6 = VAR_16;
  *VAR_7 += VAR_13->num_info;
  return 0;
 }

 return -VAR_0;
}
