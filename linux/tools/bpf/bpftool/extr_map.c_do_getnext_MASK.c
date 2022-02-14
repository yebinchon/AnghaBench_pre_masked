
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int key_size; } ;
typedef int info ;
typedef int __u32 ;


 int FUNC_0 (int,void*,void*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,void*,int ,char*) ;
 int FUNC_3 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (int*,char***,struct bpf_map_info*,int*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (char**,struct bpf_map_info*,void*,int *,int ,int ,int *,int *) ;
 int FUNC_12 (void*,int ) ;
 int FUNC_13 (char*) ;
 int VAR_3 ;
 int FUNC_14 (int ) ;
 int FUNC_15 () ;

__attribute__((used)) static int FUNC_16(int VAR_4, char **VAR_5)
{
 struct bpf_map_info VAR_6 = {};
 __u32 VAR_7 = sizeof(VAR_6);
 void *VAR_8, *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_4 < 2)
  FUNC_15();

 VAR_11 = FUNC_9(&VAR_4, &VAR_5, &VAR_6, &VAR_7);
 if (VAR_11 < 0)
  return -1;

 VAR_8 = FUNC_8(VAR_6.key_size);
 VAR_9 = FUNC_8(VAR_6.key_size);
 if (!VAR_8 || !VAR_9) {
  FUNC_10("mem alloc failed");
  VAR_10 = -1;
  goto exit_free;
 }

 if (VAR_4) {
  VAR_10 = FUNC_11(VAR_5, &VAR_6, VAR_8, ((void*)0), VAR_6.key_size, 0,
     ((void*)0), ((void*)0));
  if (VAR_10)
   goto exit_free;
 } else {
  FUNC_3(VAR_8);
  VAR_8 = ((void*)0);
 }

 VAR_10 = FUNC_0(VAR_11, VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_10("can't get next key: %s", FUNC_14(VAR_0));
  goto exit_free;
 }

 if (VAR_1) {
  FUNC_7(VAR_2);
  if (VAR_8) {
   FUNC_5(VAR_2, "key");
   FUNC_12(VAR_8, VAR_6.key_size);
  } else {
   FUNC_6(VAR_2, "key");
  }
  FUNC_5(VAR_2, "next_key");
  FUNC_12(VAR_9, VAR_6.key_size);
  FUNC_4(VAR_2);
 } else {
  if (VAR_8) {
   FUNC_13("key:\n");
   FUNC_2(VAR_3, VAR_8, VAR_6.key_size, " ");
   FUNC_13("\n");
  } else {
   FUNC_13("key: None\n");
  }
  FUNC_13("next key:\n");
  FUNC_2(VAR_3, VAR_9, VAR_6.key_size, " ");
  FUNC_13("\n");
 }

exit_free:
 FUNC_3(VAR_9);
 FUNC_3(VAR_8);
 FUNC_1(VAR_11);

 return VAR_10;
}
