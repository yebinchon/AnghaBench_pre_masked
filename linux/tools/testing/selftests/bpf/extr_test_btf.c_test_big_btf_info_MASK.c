
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct btf_get_info_test {int str_sec_size; int str_sec; int raw_types; } ;
struct bpf_btf_info {unsigned int btf_size; int btf; } ;
typedef int info_garbage ;
struct TYPE_2__ {scalar_t__ always_log; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,...) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int *,unsigned int,char*,int ,scalar_t__) ;
 int FUNC_2 (int,struct bpf_btf_info*,int*) ;
 char* VAR_2 ;
 int * FUNC_3 (int *,int ,int ,int ,unsigned int*,int *) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int *) ;
 struct btf_get_info_test* VAR_4 ;
 int VAR_5 ;
 int * FUNC_7 (unsigned int) ;
 int FUNC_8 (struct bpf_btf_info*,int ,int) ;
 int FUNC_9 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_10(unsigned int VAR_7)
{
 const struct btf_get_info_test *VAR_8 = &VAR_4[VAR_7 - 1];
 uint8_t *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
 unsigned int VAR_11;
 struct {
  struct bpf_btf_info info;
  uint64_t garbage;
 } VAR_12;
 struct bpf_btf_info *VAR_13;
 int VAR_14 = -1, VAR_15;
 uint32_t VAR_16;

 VAR_9 = FUNC_3(&VAR_5,
     VAR_8->raw_types,
     VAR_8->str_sec,
     VAR_8->str_sec_size,
     &VAR_11, ((void*)0));

 if (!VAR_9)
  return -1;

 *VAR_2 = '\0';

 VAR_10 = FUNC_7(VAR_11);
 if (FUNC_0(!VAR_10, "!user_btf")) {
  VAR_15 = -1;
  goto done;
 }

 VAR_14 = FUNC_1(VAR_9, VAR_11,
         VAR_2, VAR_0,
         VAR_1.always_log);
 if (FUNC_0(VAR_14 == -1, "errno:%d", VAR_3)) {
  VAR_15 = -1;
  goto done;
 }





 VAR_13 = &VAR_12.info;
 FUNC_8(VAR_13, 0, sizeof(*VAR_13));
 VAR_12.garbage = 0xdeadbeef;
 VAR_16 = sizeof(VAR_12);
 VAR_13->btf = FUNC_9(VAR_10);
 VAR_13->btf_size = VAR_11;

 VAR_15 = FUNC_2(VAR_14, VAR_13, &VAR_16);
 if (FUNC_0(!VAR_15, "!err")) {
  VAR_15 = -1;
  goto done;
 }







 VAR_12.garbage = 0;
 VAR_15 = FUNC_2(VAR_14, VAR_13, &VAR_16);
 if (FUNC_0(VAR_15 || VAR_16 != sizeof(*VAR_13),
    "err:%d errno:%d info_len:%u sizeof(*info):%lu",
    VAR_15, VAR_3, VAR_16, sizeof(*VAR_13))) {
  VAR_15 = -1;
  goto done;
 }

 FUNC_5(VAR_6, "OK");

done:
 if (*VAR_2 && (VAR_15 || VAR_1.always_log))
  FUNC_5(VAR_6, "\n%s", VAR_2);

 FUNC_6(VAR_9);
 FUNC_6(VAR_10);

 if (VAR_14 != -1)
  FUNC_4(VAR_14);

 return VAR_15;
}
