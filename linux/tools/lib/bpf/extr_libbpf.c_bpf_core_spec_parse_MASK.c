
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btf_type {int dummy; } ;
struct btf_member {int type; scalar_t__ name_off; } ;
struct btf_array {int type; int nelems; } ;
struct btf {int dummy; } ;
struct bpf_core_spec {int raw_len; int* raw_spec; size_t len; int offset; TYPE_1__* spec; struct btf const* btf; } ;
typedef int __u32 ;
typedef int __s64 ;
struct TYPE_2__ {int type_id; int idx; char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct btf const*,scalar_t__) ;
 int FUNC_1 (struct btf const*,int) ;
 struct btf_array* FUNC_2 (struct btf_type const*) ;
 scalar_t__ FUNC_3 (struct btf_type const*) ;
 scalar_t__ FUNC_4 (struct btf_type const*) ;
 int FUNC_5 (struct btf_type const*) ;
 int FUNC_6 (struct btf_type const*,int) ;
 scalar_t__ FUNC_7 (struct btf_type const*,int) ;
 struct btf_member* FUNC_8 (struct btf_type const*) ;
 int FUNC_9 (struct btf_type const*) ;
 int FUNC_10 (struct bpf_core_spec*,int ,int) ;
 int FUNC_11 (char*,int,char const*,int,int,int ) ;
 struct btf_type* FUNC_12 (struct btf const*,int,int*) ;
 int FUNC_13 (char const*,char*,int*,int*) ;
 scalar_t__ FUNC_14 (char const*) ;

__attribute__((used)) static int FUNC_15(const struct btf *VAR_3,
          __u32 VAR_4,
          const char *VAR_5,
          struct bpf_core_spec *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 const struct btf_type *VAR_10;
 const char *VAR_11;
 __u32 VAR_12;
 __s64 VAR_13;

 if (FUNC_14(VAR_5) || *VAR_5 == ':')
  return -VAR_2;

 FUNC_10(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->btf = VAR_3;


 while (*VAR_5) {
  if (*VAR_5 == ':')
   ++VAR_5;
  if (FUNC_13(VAR_5, "%d%n", &VAR_7, &VAR_8) != 1)
   return -VAR_2;
  if (VAR_6->raw_len == VAR_0)
   return -VAR_1;
  VAR_5 += VAR_8;
  VAR_6->raw_spec[VAR_6->raw_len++] = VAR_7;
 }

 if (VAR_6->raw_len == 0)
  return -VAR_2;


 VAR_10 = FUNC_12(VAR_3, VAR_4, &VAR_12);
 if (!VAR_10)
  return -VAR_2;

 VAR_7 = VAR_6->raw_spec[0];
 VAR_6->spec[0].type_id = VAR_12;
 VAR_6->spec[0].idx = VAR_7;
 VAR_6->len++;

 VAR_13 = FUNC_1(VAR_3, VAR_12);
 if (VAR_13 < 0)
  return VAR_13;
 VAR_6->offset = VAR_7 * VAR_13;

 for (VAR_9 = 1; VAR_9 < VAR_6->raw_len; VAR_9++) {
  VAR_10 = FUNC_12(VAR_3, VAR_12, &VAR_12);
  if (!VAR_10)
   return -VAR_2;

  VAR_7 = VAR_6->raw_spec[VAR_9];

  if (FUNC_4(VAR_10)) {
   const struct btf_member *VAR_14;
   __u32 VAR_15;

   if (VAR_7 >= FUNC_9(VAR_10))
    return -VAR_2;
   if (FUNC_7(VAR_10, VAR_7))
    return -VAR_2;

   VAR_15 = FUNC_6(VAR_10, VAR_7);
   if (VAR_15 % 8)
    return -VAR_2;
   VAR_6->offset += VAR_15 / 8;

   VAR_14 = FUNC_8(VAR_10) + VAR_7;
   if (VAR_14->name_off) {
    VAR_11 = FUNC_0(VAR_3, VAR_14->name_off);
    if (FUNC_14(VAR_11))
     return -VAR_2;

    VAR_6->spec[VAR_6->len].type_id = VAR_12;
    VAR_6->spec[VAR_6->len].idx = VAR_7;
    VAR_6->spec[VAR_6->len].name = VAR_11;
    VAR_6->len++;
   }

   VAR_12 = VAR_14->type;
  } else if (FUNC_3(VAR_10)) {
   const struct btf_array *VAR_16 = FUNC_2(VAR_10);

   VAR_10 = FUNC_12(VAR_3, VAR_16->type, &VAR_12);
   if (!VAR_10 || VAR_7 >= VAR_16->nelems)
    return -VAR_2;

   VAR_6->spec[VAR_6->len].type_id = VAR_12;
   VAR_6->spec[VAR_6->len].idx = VAR_7;
   VAR_6->len++;

   VAR_13 = FUNC_1(VAR_3, VAR_12);
   if (VAR_13 < 0)
    return VAR_13;
   VAR_6->offset += VAR_7 * VAR_13;
  } else {
   FUNC_11("relo for [%u] %s (at idx %d) captures type [%d] of unexpected kind %d\n",
       VAR_4, VAR_5, VAR_9, VAR_12, FUNC_5(VAR_10));
   return -VAR_2;
  }
 }

 return 0;
}
