
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_type {int dummy; } ;
struct btf_array {scalar_t__ nelems; int type; } ;
struct btf {int dummy; } ;
struct bpf_core_spec {int len; size_t raw_len; scalar_t__* raw_spec; int offset; struct btf const* btf; struct bpf_core_accessor* spec; } ;
struct bpf_core_accessor {scalar_t__ idx; int * name; int type_id; } ;
typedef int __u32 ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btf const*,struct bpf_core_accessor const*,struct btf const*,int ,struct bpf_core_spec*,int *) ;
 int FUNC_1 (struct btf const*,int ) ;
 struct btf_array* FUNC_2 (struct btf_type const*) ;
 int FUNC_3 (struct btf_type const*) ;
 int FUNC_4 (struct bpf_core_spec*,int ,int) ;
 struct btf_type* FUNC_5 (struct btf const*,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct bpf_core_spec *VAR_3,
          const struct btf *VAR_4, __u32 VAR_5,
          struct bpf_core_spec *VAR_6)
{
 const struct btf_type *VAR_7;
 const struct bpf_core_accessor *VAR_8;
 struct bpf_core_accessor *VAR_9;
 int VAR_10, VAR_11, VAR_12;

 FUNC_4(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->btf = VAR_4;

 VAR_8 = &VAR_3->spec[0];
 VAR_9 = &VAR_6->spec[0];

 for (VAR_10 = 0; VAR_10 < VAR_3->len; VAR_10++, VAR_8++, VAR_9++) {
  VAR_7 = FUNC_5(VAR_6->btf, VAR_5,
         &VAR_5);
  if (!VAR_7)
   return -VAR_2;

  if (VAR_8->name) {
   VAR_12 = FUNC_0(VAR_3->btf,
       VAR_8,
       VAR_4, VAR_5,
       VAR_6, &VAR_5);
   if (VAR_12 <= 0)
    return VAR_12;
  } else {




   if (VAR_10 > 0) {
    const struct btf_array *VAR_13;

    if (!FUNC_3(VAR_7))
     return 0;

    VAR_13 = FUNC_2(VAR_7);
    if (VAR_8->idx >= VAR_13->nelems)
     return 0;
    if (!FUNC_5(VAR_4, VAR_13->type,
           &VAR_5))
     return -VAR_2;
   }


   if (VAR_6->raw_len == VAR_0)
    return -VAR_1;

   VAR_9->type_id = VAR_5;
   VAR_9->idx = VAR_8->idx;
   VAR_9->name = ((void*)0);
   VAR_6->len++;
   VAR_6->raw_spec[VAR_6->raw_len] = VAR_9->idx;
   VAR_6->raw_len++;

   VAR_11 = FUNC_1(VAR_4, VAR_5);
   if (VAR_11 < 0)
    return VAR_11;
   VAR_6->offset += VAR_8->idx * VAR_11;
  }
 }

 return 1;
}
