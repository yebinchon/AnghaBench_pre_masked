
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int key_size; } ;
typedef int info ;
typedef int __u32 ;


 int FUNC_0 (int,void*) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (void*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int*,char***,struct bpf_map_info*,int*) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char**,struct bpf_map_info*,void*,int *,int ,int ,int *,int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(int VAR_3, char **VAR_4)
{
 struct bpf_map_info VAR_5 = {};
 __u32 VAR_6 = sizeof(VAR_5);
 void *VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_3 < 2)
  FUNC_9();

 VAR_9 = FUNC_5(&VAR_3, &VAR_4, &VAR_5, &VAR_6);
 if (VAR_9 < 0)
  return -1;

 VAR_7 = FUNC_4(VAR_5.key_size);
 if (!VAR_7) {
  FUNC_6("mem alloc failed");
  VAR_8 = -1;
  goto exit_free;
 }

 VAR_8 = FUNC_7(VAR_4, &VAR_5, VAR_7, ((void*)0), VAR_5.key_size, 0, ((void*)0), ((void*)0));
 if (VAR_8)
  goto exit_free;

 VAR_8 = FUNC_0(VAR_9, VAR_7);
 if (VAR_8)
  FUNC_6("delete failed: %s", FUNC_8(VAR_0));

exit_free:
 FUNC_2(VAR_7);
 FUNC_1(VAR_9);

 if (!VAR_8 && VAR_1)
  FUNC_3(VAR_2);
 return VAR_8;
}
