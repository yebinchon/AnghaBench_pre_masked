
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_ext {int dummy; } ;
struct btf_dedup_opts {int dummy; } ;
struct btf_dedup {int dummy; } ;
struct btf {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btf_dedup*) ;
 int FUNC_1 (struct btf_dedup*) ;
 int FUNC_2 (struct btf_dedup*) ;
 int FUNC_3 (struct btf_dedup*) ;
 struct btf_dedup* FUNC_4 (struct btf*,struct btf_ext*,struct btf_dedup_opts const*) ;
 int FUNC_5 (struct btf_dedup*) ;
 int FUNC_6 (struct btf_dedup*) ;
 int FUNC_7 (struct btf_dedup*) ;
 int FUNC_8 (struct btf_dedup*) ;
 int FUNC_9 (struct btf_dedup*) ;
 int FUNC_10 (char*,int) ;

int FUNC_11(struct btf *VAR_1, struct btf_ext *VAR_2,
        const struct btf_dedup_opts *VAR_3)
{
 struct btf_dedup *VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
 int VAR_5;

 if (FUNC_0(VAR_4)) {
  FUNC_10("btf_dedup_new failed: %ld", FUNC_1(VAR_4));
  return -VAR_0;
 }

 VAR_5 = FUNC_8(VAR_4);
 if (VAR_5 < 0) {
  FUNC_10("btf_dedup_strings failed:%d\n", VAR_5);
  goto done;
 }
 VAR_5 = FUNC_5(VAR_4);
 if (VAR_5 < 0) {
  FUNC_10("btf_dedup_prim_types failed:%d\n", VAR_5);
  goto done;
 }
 VAR_5 = FUNC_9(VAR_4);
 if (VAR_5 < 0) {
  FUNC_10("btf_dedup_struct_types failed:%d\n", VAR_5);
  goto done;
 }
 VAR_5 = FUNC_6(VAR_4);
 if (VAR_5 < 0) {
  FUNC_10("btf_dedup_ref_types failed:%d\n", VAR_5);
  goto done;
 }
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5 < 0) {
  FUNC_10("btf_dedup_compact_types failed:%d\n", VAR_5);
  goto done;
 }
 VAR_5 = FUNC_7(VAR_4);
 if (VAR_5 < 0) {
  FUNC_10("btf_dedup_remap_types failed:%d\n", VAR_5);
  goto done;
 }

done:
 FUNC_3(VAR_4);
 return VAR_5;
}
