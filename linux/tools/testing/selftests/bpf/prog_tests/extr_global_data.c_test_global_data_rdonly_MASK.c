
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bpf_object {int dummy; } ;
struct bpf_map {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;
struct TYPE_2__ {int value_size; } ;


 int FUNC_0 (int,char*,char*,int,scalar_t__) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_2 (struct bpf_map*) ;
 int FUNC_3 (struct bpf_map*) ;
 int FUNC_4 (struct bpf_map*) ;
 int FUNC_5 (int,int*,int *,int ) ;
 struct bpf_map* FUNC_6 (struct bpf_object*,char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct bpf_object *VAR_3, __u32 VAR_4)
{
 int VAR_5 = -VAR_0, VAR_6, VAR_7 = 0;
 struct bpf_map *VAR_8;
 __u8 *VAR_9;

 VAR_8 = FUNC_6(VAR_3, "test_glo.rodata");
 if (FUNC_1(!VAR_8 || !FUNC_4(VAR_8)))
  return;

 VAR_6 = FUNC_3(VAR_8);
 if (FUNC_1(VAR_6 < 0))
  return;

 VAR_9 = FUNC_8(FUNC_2(VAR_8)->value_size);
 if (VAR_9)
  VAR_5 = FUNC_5(VAR_6, &VAR_7, VAR_9, 0);
 FUNC_7(VAR_9);
 FUNC_0(!VAR_5 || VAR_2 != VAR_1, "test .rodata read-only map",
       "err %d errno %d\n", VAR_5, VAR_2);
}
