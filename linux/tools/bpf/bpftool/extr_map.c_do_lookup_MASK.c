
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int key_size; } ;
typedef int info ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bpf_map_info*,void**,void**) ;
 int FUNC_1 (int,void*,void*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,void*,int ,char*) ;
 int FUNC_4 (void*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int*,char***,struct bpf_map_info*,int*) ;
 int FUNC_7 (char*,int ) ;
 int FUNC_8 (char**,struct bpf_map_info*,void*,int *,int ,int ,int *,int *) ;
 int FUNC_9 (struct bpf_map_info*,void*,void*) ;
 int FUNC_10 (char*) ;
 int VAR_4 ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(int VAR_5, char **VAR_6)
{
 struct bpf_map_info VAR_7 = {};
 __u32 VAR_8 = sizeof(VAR_7);
 void *VAR_9, *VAR_10;
 int VAR_11;
 int VAR_12;

 if (VAR_5 < 2)
  FUNC_12();

 VAR_12 = FUNC_6(&VAR_5, &VAR_6, &VAR_7, &VAR_8);
 if (VAR_12 < 0)
  return -1;

 VAR_11 = FUNC_0(&VAR_7, &VAR_9, &VAR_10);
 if (VAR_11)
  goto exit_free;

 VAR_11 = FUNC_8(VAR_6, &VAR_7, VAR_9, ((void*)0), VAR_7.key_size, 0, ((void*)0), ((void*)0));
 if (VAR_11)
  goto exit_free;

 VAR_11 = FUNC_1(VAR_12, VAR_9, VAR_10);
 if (VAR_11) {
  if (VAR_1 == VAR_0) {
   if (VAR_2) {
    FUNC_5(VAR_3);
   } else {
    FUNC_10("key:\n");
    FUNC_3(VAR_4, VAR_9, VAR_7.key_size, " ");
    FUNC_10("\n\nNot found\n");
   }
  } else {
   FUNC_7("lookup failed: %s", FUNC_11(VAR_1));
  }

  goto exit_free;
 }


 FUNC_9(&VAR_7, VAR_9, VAR_10);

exit_free:
 FUNC_4(VAR_9);
 FUNC_4(VAR_10);
 FUNC_2(VAR_12);

 return VAR_11;
}
