
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf {int dummy; } ;
struct bpf_btf_info {int btf_size; void* btf; int member_0; } ;
typedef int btf_info ;
typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btf*) ;
 int FUNC_1 (struct btf*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct bpf_btf_info*,int*) ;
 struct btf* FUNC_4 (int *,int) ;
 int FUNC_5 (int) ;
 int VAR_1 ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int) ;
 int FUNC_8 (void*,int ,int) ;
 void* FUNC_9 (void*) ;
 void* FUNC_10 (void*,int) ;

int FUNC_11(__u32 VAR_2, struct btf **VAR_3)
{
 struct bpf_btf_info VAR_4 = { 0 };
 __u32 VAR_5 = sizeof(VAR_4);
 __u32 VAR_6;
 int VAR_7;
 void *VAR_8;
 int VAR_9;

 VAR_9 = 0;
 *VAR_3 = ((void*)0);
 VAR_7 = FUNC_2(VAR_2);
 if (VAR_7 < 0)
  return 0;





 VAR_4.btf_size = 4096;
 VAR_6 = VAR_4.btf_size;
 VAR_8 = FUNC_7(VAR_6);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto exit_free;
 }

 FUNC_8(VAR_8, 0, VAR_6);
 VAR_4.btf = FUNC_9(VAR_8);
 VAR_9 = FUNC_3(VAR_7, &VAR_4, &VAR_5);

 if (!VAR_9 && VAR_4.btf_size > VAR_6) {
  void *VAR_10;

  VAR_6 = VAR_4.btf_size;
  VAR_10 = FUNC_10(VAR_8, VAR_6);
  if (!VAR_10) {
   VAR_9 = -VAR_0;
   goto exit_free;
  }
  VAR_8 = VAR_10;
  FUNC_8(VAR_8, 0, VAR_6);
  VAR_4.btf = FUNC_9(VAR_8);
  VAR_9 = FUNC_3(VAR_7, &VAR_4, &VAR_5);
 }

 if (VAR_9 || VAR_4.btf_size > VAR_6) {
  VAR_9 = VAR_1;
  goto exit_free;
 }

 *VAR_3 = FUNC_4((__u8 *)(long)VAR_4.btf, VAR_4.btf_size);
 if (FUNC_0(*VAR_3)) {
  VAR_9 = FUNC_1(*VAR_3);
  *VAR_3 = ((void*)0);
 }

exit_free:
 FUNC_5(VAR_7);
 FUNC_6(VAR_8);

 return VAR_9;
}
