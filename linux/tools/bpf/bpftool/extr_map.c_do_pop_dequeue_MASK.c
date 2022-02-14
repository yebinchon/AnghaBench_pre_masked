
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bpf_map_info {int dummy; } ;
typedef int info ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bpf_map_info*,void**,void**) ;
 int FUNC_1 (int,void*,void*) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (void*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,char***,struct bpf_map_info*,int*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct bpf_map_info*,void*,void*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(int VAR_4, char **VAR_5)
{
 struct bpf_map_info VAR_6 = {};
 __u32 VAR_7 = sizeof(VAR_6);
 void *VAR_8, *VAR_9;
 int VAR_10;
 int VAR_11;

 if (VAR_4 < 2)
  FUNC_10();

 VAR_11 = FUNC_5(&VAR_4, &VAR_5, &VAR_6, &VAR_7);
 if (VAR_11 < 0)
  return -1;

 VAR_10 = FUNC_0(&VAR_6, &VAR_8, &VAR_9);
 if (VAR_10)
  goto exit_free;

 VAR_10 = FUNC_1(VAR_11, VAR_8, VAR_9);
 if (VAR_10) {
  if (VAR_1 == VAR_0) {
   if (VAR_2)
    FUNC_4(VAR_3);
   else
    FUNC_8("Error: empty map\n");
  } else {
   FUNC_6("pop failed: %s", FUNC_9(VAR_1));
  }

  goto exit_free;
 }

 FUNC_7(&VAR_6, VAR_8, VAR_9);

exit_free:
 FUNC_3(VAR_8);
 FUNC_3(VAR_9);
 FUNC_2(VAR_11);

 return VAR_10;
}
