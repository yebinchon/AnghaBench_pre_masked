
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btf_type {int dummy; } ;
struct btf_header {int str_off; int str_len; } ;
struct TYPE_4__ {int str_sec_size; int str_sec; int raw_types; } ;
struct TYPE_3__ {int str_sec_size; int str_sec; int raw_types; } ;
struct btf_dedup_test {char* descr; int opts; TYPE_2__ expect; TYPE_1__ input; } ;
struct btf {int dummy; } ;
typedef int __u8 ;
typedef int __u32 ;


 scalar_t__ FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct btf*) ;
 int FUNC_2 (struct btf*) ;
 int FUNC_3 (struct btf*,int *,int *) ;
 int FUNC_4 (struct btf*) ;
 int FUNC_5 (struct btf*) ;
 void* FUNC_6 (struct btf*,int*) ;
 struct btf* FUNC_7 (int *,unsigned int) ;
 struct btf_type* FUNC_8 (struct btf*,int) ;
 void* FUNC_9 (int *,int ,int ,int ,unsigned int*,char const**) ;
 int FUNC_10 (struct btf_type const*) ;
 struct btf_dedup_test* VAR_0 ;
 int FUNC_11 (char const*,int) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (void*) ;
 int VAR_1 ;
 int FUNC_14 (void*,void*,int) ;
 int VAR_2 ;
 int FUNC_15 (char const*,char const*) ;
 size_t FUNC_16 (char const*) ;

__attribute__((used)) static int FUNC_17(unsigned int VAR_3)
{
 const struct btf_dedup_test *VAR_4 = &VAR_0[VAR_3 - 1];
 __u32 VAR_5, VAR_6, VAR_7, VAR_8;
 const struct btf_header *VAR_9, *VAR_10;
 struct btf *VAR_11 = ((void*)0), *VAR_12 = ((void*)0);
 const void *VAR_13, *VAR_14;
 const char *VAR_15, *VAR_16;
 const char *VAR_17, *VAR_18;
 const char *VAR_19, *VAR_20;
 const char *VAR_21, *VAR_22;
 unsigned int VAR_23;
 void *VAR_24;
 int VAR_25 = 0, VAR_26;

 FUNC_12(VAR_2, "BTF dedup test[%u] (%s):", VAR_3, VAR_4->descr);

 VAR_24 = FUNC_9(&VAR_1, VAR_4->input.raw_types,
     VAR_4->input.str_sec, VAR_4->input.str_sec_size,
     &VAR_23, &VAR_15);
 if (!VAR_24)
  return -1;
 VAR_11 = FUNC_7((__u8 *)VAR_24, VAR_23);
 FUNC_13(VAR_24);
 if (FUNC_0(FUNC_1(VAR_11), "invalid test_btf errno:%ld",
    FUNC_2(VAR_11))) {
  VAR_25 = -1;
  goto done;
 }

 VAR_24 = FUNC_9(&VAR_1, VAR_4->expect.raw_types,
     VAR_4->expect.str_sec,
     VAR_4->expect.str_sec_size,
     &VAR_23, &VAR_16);
 if (!VAR_24)
  return -1;
 VAR_12 = FUNC_7((__u8 *)VAR_24, VAR_23);
 FUNC_13(VAR_24);
 if (FUNC_0(FUNC_1(VAR_12), "invalid expect_btf errno:%ld",
    FUNC_2(VAR_12))) {
  VAR_25 = -1;
  goto done;
 }

 VAR_25 = FUNC_3(VAR_11, ((void*)0), &VAR_4->opts);
 if (FUNC_0(VAR_25, "btf_dedup failed errno:%d", VAR_25)) {
  VAR_25 = -1;
  goto done;
 }

 VAR_13 = FUNC_6(VAR_11, &VAR_7);
 VAR_14 = FUNC_6(VAR_12, &VAR_8);
 if (FUNC_0(VAR_7 != VAR_8,
    "test_btf_size:%u != expect_btf_size:%u",
    VAR_7, VAR_8)) {
  VAR_25 = -1;
  goto done;
 }

 VAR_9 = VAR_13;
 VAR_17 = VAR_13 + sizeof(*VAR_9) + VAR_9->str_off;
 VAR_10 = VAR_14;
 VAR_18 = VAR_14 + sizeof(*VAR_9) + VAR_10->str_off;
 if (FUNC_0(VAR_9->str_len != VAR_10->str_len,
    "test_hdr->str_len:%u != expect_hdr->str_len:%u",
    VAR_9->str_len, VAR_10->str_len)) {
  FUNC_12(VAR_2, "\ntest strings:\n");
  FUNC_11(VAR_17, VAR_9->str_len);
  FUNC_12(VAR_2, "\nexpected strings:\n");
  FUNC_11(VAR_18, VAR_10->str_len);
  VAR_25 = -1;
  goto done;
 }

 VAR_19 = VAR_17;
 VAR_20 = VAR_17 + VAR_9->str_len;
 VAR_21 = VAR_18;
 VAR_22 = VAR_18 + VAR_10->str_len;
 while (VAR_19 < VAR_20 && VAR_21 < VAR_22) {
  size_t VAR_27, VAR_28;

  VAR_27 = FUNC_16(VAR_19);
  VAR_28 = FUNC_16(VAR_21);
  if (FUNC_0(VAR_27 != VAR_28,
     "test_len:%zu != expect_len:%zu "
     "(test_str:%s, expect_str:%s)",
     VAR_27, VAR_28, VAR_19, VAR_21)) {
   VAR_25 = -1;
   goto done;
  }
  if (FUNC_0(FUNC_15(VAR_19, VAR_21),
     "test_str:%s != expect_str:%s",
     VAR_19, VAR_21)) {
   VAR_25 = -1;
   goto done;
  }
  VAR_19 += VAR_27 + 1;
  VAR_21 += VAR_28 + 1;
 }
 if (FUNC_0(VAR_19 != VAR_20,
    "test_str_cur:%p != test_str_end:%p",
    VAR_19, VAR_20)) {
  VAR_25 = -1;
  goto done;
 }

 VAR_5 = FUNC_5(VAR_11);
 VAR_6 = FUNC_5(VAR_12);
 if (FUNC_0(VAR_5 != VAR_6,
    "test_nr_types:%u != expect_nr_types:%u",
    VAR_5, VAR_6)) {
  VAR_25 = -1;
  goto done;
 }

 for (VAR_26 = 1; VAR_26 <= VAR_5; VAR_26++) {
  const struct btf_type *VAR_29, *VAR_30;
  int VAR_31, VAR_32;

  VAR_29 = FUNC_8(VAR_11, VAR_26);
  VAR_30 = FUNC_8(VAR_12, VAR_26);
  VAR_31 = FUNC_10(VAR_29);
  VAR_32 = FUNC_10(VAR_30);

  if (FUNC_0(VAR_31 != VAR_32,
     "type #%d: test_size:%d != expect_size:%u",
     VAR_26, VAR_31, VAR_32)) {
   VAR_25 = -1;
   goto done;
  }
  if (FUNC_0(FUNC_14((void *)VAR_29,
     (void *)VAR_30,
     VAR_31),
     "type #%d: contents differ", VAR_26)) {
   VAR_25 = -1;
   goto done;
  }
 }

done:
 if (!VAR_25)
  FUNC_12(VAR_2, "OK");
 if (!FUNC_1(VAR_11))
  FUNC_4(VAR_11);
 if (!FUNC_1(VAR_12))
  FUNC_4(VAR_12);

 return VAR_25;
}
