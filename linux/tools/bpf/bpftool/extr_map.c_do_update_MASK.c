
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int value_size; int key_size; } ;
typedef int info ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (struct bpf_map_info*,void**,void**) ;
 int FUNC_1 (int,void*,void*,int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (void*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,char***,struct bpf_map_info*,int*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char**,struct bpf_map_info*,void*,void*,int ,int ,int*,int**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 () ;

__attribute__((used)) static int FUNC_10(int VAR_4, char **VAR_5)
{
 struct bpf_map_info VAR_6 = {};
 __u32 VAR_7 = sizeof(VAR_6);
 __u32 *VAR_8 = ((void*)0);
 __u32 VAR_9 = VAR_0;
 void *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 if (VAR_4 < 2)
  FUNC_9();

 VAR_12 = FUNC_5(&VAR_4, &VAR_5, &VAR_6, &VAR_7);
 if (VAR_12 < 0)
  return -1;

 VAR_13 = FUNC_0(&VAR_6, &VAR_10, &VAR_11);
 if (VAR_13)
  goto exit_free;

 VAR_13 = FUNC_7(VAR_5, &VAR_6, VAR_10, VAR_11, VAR_6.key_size,
    VAR_6.value_size, &VAR_9, &VAR_8);
 if (VAR_13)
  goto exit_free;

 VAR_13 = FUNC_1(VAR_12, VAR_10, VAR_11, VAR_9);
 if (VAR_13) {
  FUNC_6("update failed: %s", FUNC_8(VAR_1));
  goto exit_free;
 }

exit_free:
 if (VAR_8)
  FUNC_2(*VAR_8);
 FUNC_3(VAR_10);
 FUNC_3(VAR_11);
 FUNC_2(VAR_12);

 if (!VAR_13 && VAR_2)
  FUNC_4(VAR_3);
 return VAR_13;
}
