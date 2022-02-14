
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct btf_get_info_test {char* descr; int (* special_test ) (unsigned int) ;int btf_size_delta; int str_sec_size; int str_sec; int raw_types; } ;
struct bpf_btf_info {unsigned int btf_size; int id; int btf; } ;
typedef int info ;
struct TYPE_2__ {scalar_t__ always_log; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,char*,...) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int*,unsigned int,char*,int ,scalar_t__) ;
 int FUNC_2 (int,struct bpf_btf_info*,int*) ;
 char* VAR_2 ;
 int* FUNC_3 (int *,int ,int ,int ,unsigned int*,int *) ;
 int FUNC_4 (int) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int*) ;
 struct btf_get_info_test* VAR_4 ;
 int VAR_5 ;
 int* FUNC_7 (unsigned int) ;
 int FUNC_8 (int*,int*,unsigned int) ;
 int FUNC_9 (int*,int,unsigned int) ;
 unsigned int FUNC_10 (unsigned int,unsigned int) ;
 int FUNC_11 (int*) ;
 int VAR_6 ;
 int FUNC_12 (unsigned int) ;

__attribute__((used)) static int FUNC_13(unsigned int VAR_7)
{
 const struct btf_get_info_test *VAR_8 = &VAR_4[VAR_7 - 1];
 unsigned int VAR_9, VAR_10, VAR_11;
 uint8_t *VAR_12 = ((void*)0), *VAR_13 = ((void*)0);
 struct bpf_btf_info VAR_14 = {};
 int VAR_15 = -1, VAR_16, VAR_17;
 uint32_t VAR_18;

 FUNC_5(VAR_6, "BTF GET_INFO test[%u] (%s): ",
  VAR_7, VAR_8->descr);

 if (VAR_8->special_test)
  return VAR_8->special_test(VAR_7);

 VAR_12 = FUNC_3(&VAR_5,
     VAR_8->raw_types,
     VAR_8->str_sec,
     VAR_8->str_sec_size,
     &VAR_9, ((void*)0));

 if (!VAR_12)
  return -1;

 *VAR_2 = '\0';

 VAR_13 = FUNC_7(VAR_9);
 if (FUNC_0(!VAR_13, "!user_btf")) {
  VAR_16 = -1;
  goto done;
 }

 VAR_15 = FUNC_1(VAR_12, VAR_9,
         VAR_2, VAR_0,
         VAR_1.always_log);
 if (FUNC_0(VAR_15 == -1, "errno:%d", VAR_3)) {
  VAR_16 = -1;
  goto done;
 }

 VAR_10 = (int)VAR_9 + VAR_8->btf_size_delta;
 VAR_11 = FUNC_10(VAR_9, VAR_10);
 if (VAR_9 > VAR_11)
  FUNC_9(VAR_13 + VAR_11, 0xff,
         VAR_9 - VAR_11);

 VAR_18 = sizeof(VAR_14);
 VAR_14.btf = FUNC_11(VAR_13);
 VAR_14.btf_size = VAR_10;

 VAR_17 = 0;
 VAR_16 = FUNC_2(VAR_15, &VAR_14, &VAR_18);
 if (FUNC_0(VAR_16 || !VAR_14.id || VAR_18 != sizeof(VAR_14) ||
    VAR_14.btf_size != VAR_9 ||
    (VAR_17 = FUNC_8(VAR_12, VAR_13, VAR_11)),
    "err:%d errno:%d info.id:%u info_len:%u sizeof(info):%lu raw_btf_size:%u info.btf_size:%u expected_nbytes:%u memcmp:%d",
    VAR_16, VAR_3, VAR_14.id, VAR_18, sizeof(VAR_14),
    VAR_9, VAR_14.btf_size, VAR_11, VAR_17)) {
  VAR_16 = -1;
  goto done;
 }

 while (VAR_11 < VAR_9) {
  FUNC_5(VAR_6, "%u...", VAR_11);
  if (FUNC_0(VAR_13[VAR_11++] != 0xff,
     "user_btf[%u]:%x != 0xff", VAR_11 - 1,
     VAR_13[VAR_11 - 1])) {
   VAR_16 = -1;
   goto done;
  }
 }

 FUNC_5(VAR_6, "OK");

done:
 if (*VAR_2 && (VAR_16 || VAR_1.always_log))
  FUNC_5(VAR_6, "\n%s", VAR_2);

 FUNC_6(VAR_12);
 FUNC_6(VAR_13);

 if (VAR_15 != -1)
  FUNC_4(VAR_15);

 return VAR_16;
}
