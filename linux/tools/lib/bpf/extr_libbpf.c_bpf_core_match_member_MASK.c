
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_member {int type; int name_off; } ;
struct btf {int dummy; } ;
struct bpf_core_spec {scalar_t__ raw_len; int offset; int* raw_spec; int len; struct bpf_core_accessor* spec; } ;
struct bpf_core_accessor {int type_id; int idx; char const* name; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btf const*,int,struct btf const*,int) ;
 char* FUNC_1 (struct btf const*,int ) ;
 struct btf_type* FUNC_2 (struct btf const*,int) ;
 int FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct btf_type const*,int) ;
 scalar_t__ FUNC_5 (struct btf_type const*,int) ;
 struct btf_member* FUNC_6 (struct btf_type const*) ;
 int FUNC_7 (struct btf_type const*) ;
 struct btf_type* FUNC_8 (struct btf const*,int,int*) ;
 scalar_t__ FUNC_9 (char const*) ;
 scalar_t__ FUNC_10 (char const*,char const*) ;

__attribute__((used)) static int FUNC_11(const struct btf *VAR_3,
     const struct bpf_core_accessor *VAR_4,
     const struct btf *VAR_5,
     __u32 VAR_6,
     struct bpf_core_spec *VAR_7,
     __u32 *VAR_8)
{
 const struct btf_type *VAR_9, *VAR_10;
 const struct btf_member *VAR_11, *VAR_12;
 const char *VAR_13, *VAR_14;
 __u32 VAR_15;
 int VAR_16, VAR_17, VAR_18;

 VAR_10 = FUNC_8(VAR_5, VAR_6, &VAR_6);
 if (!VAR_10)
  return -VAR_2;
 if (!FUNC_3(VAR_10))
  return 0;

 VAR_15 = VAR_4->type_id;
 VAR_9 = FUNC_2(VAR_3, VAR_15);
 VAR_11 = FUNC_6(VAR_9) + VAR_4->idx;
 VAR_13 = FUNC_1(VAR_3, VAR_11->name_off);

 VAR_17 = FUNC_7(VAR_10);
 VAR_12 = FUNC_6(VAR_10);
 for (VAR_16 = 0; VAR_16 < VAR_17; VAR_16++, VAR_12++) {
  __u32 VAR_19;


  if (FUNC_5(VAR_10, VAR_16))
   continue;
  VAR_19 = FUNC_4(VAR_10, VAR_16);
  if (VAR_19 % 8)
   continue;


  if (VAR_7->raw_len == VAR_0)
   return -VAR_1;


  VAR_7->offset += VAR_19 / 8;
  VAR_7->raw_spec[VAR_7->raw_len++] = VAR_16;

  VAR_14 = FUNC_1(VAR_5, VAR_12->name_off);
  if (FUNC_9(VAR_14)) {

   VAR_18 = FUNC_11(VAR_3, VAR_4,
            VAR_5, VAR_12->type,
            VAR_7, VAR_8);
   if (VAR_18)
    return VAR_18;
  } else if (FUNC_10(VAR_13, VAR_14) == 0) {

   struct bpf_core_accessor *VAR_20;

   VAR_20 = &VAR_7->spec[VAR_7->len++];
   VAR_20->type_id = VAR_6;
   VAR_20->idx = VAR_16;
   VAR_20->name = VAR_14;

   *VAR_8 = VAR_12->type;
   VAR_18 = FUNC_0(VAR_3,
          VAR_11->type,
          VAR_5, VAR_12->type);
   if (!VAR_18)
    VAR_7->len--;
   return VAR_18;
  }

  VAR_7->offset -= VAR_19 / 8;
  VAR_7->raw_len--;
 }

 return 0;
}
