
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ids_vec {int len; int * data; } ;
struct hashmap {int dummy; } ;
struct btf_type {int name_off; } ;
struct btf {int dummy; } ;
struct bpf_program {int dummy; } ;
struct bpf_offset_reloc {int insn_off; int access_str_off; int type_id; } ;
struct bpf_core_spec {int offset; TYPE_1__* spec; } ;
typedef int __u32 ;
struct TYPE_2__ {int type_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ids_vec*) ;
 int VAR_2 ;
 int FUNC_1 (struct ids_vec*) ;
 int FUNC_2 (int ,struct bpf_core_spec*) ;
 struct ids_vec* FUNC_3 (struct btf const*,int ,struct btf const*) ;
 int FUNC_4 (struct ids_vec*) ;
 int FUNC_5 (struct bpf_program*,int,int,int) ;
 int FUNC_6 (struct bpf_core_spec*,struct btf const*,int ,struct bpf_core_spec*) ;
 int FUNC_7 (struct btf const*,int ,char const*,struct bpf_core_spec*) ;
 char* FUNC_8 (struct bpf_program*,int) ;
 char* FUNC_9 (struct btf const*,int ) ;
 struct btf_type* FUNC_10 (struct btf const*,int ) ;
 int FUNC_11 (struct hashmap*,void const*,void**) ;
 int FUNC_12 (struct hashmap*,void const*,struct ids_vec*,int *,int *) ;
 int FUNC_13 (int ,char*,...) ;
 int FUNC_14 (char*,char const*,int,...) ;
 int FUNC_15 (char*,char const*,int,int,...) ;
 scalar_t__ FUNC_16 (char const*) ;
 void* FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct bpf_program *VAR_3,
     const struct bpf_offset_reloc *VAR_4,
     int VAR_5,
     const struct btf *VAR_6,
     const struct btf *VAR_7,
     struct hashmap *VAR_8)
{
 const char *VAR_9 = FUNC_8(VAR_3, 0);
 struct bpf_core_spec VAR_10, VAR_11, VAR_12;
 const void *VAR_13 = FUNC_17(VAR_4->type_id);
 const struct btf_type *VAR_14, *VAR_15;
 const char *VAR_16, *VAR_17;
 struct ids_vec *VAR_18;
 __u32 VAR_19, VAR_20;
 const char *VAR_21;
 int VAR_22, VAR_23, VAR_24;

 VAR_19 = VAR_4->type_id;
 VAR_14 = FUNC_10(VAR_6, VAR_19);
 if (!VAR_14)
  return -VAR_0;

 VAR_16 = FUNC_9(VAR_6, VAR_14->name_off);
 if (FUNC_16(VAR_16))
  return -VAR_0;

 VAR_21 = FUNC_9(VAR_6, VAR_4->access_str_off);
 if (FUNC_16(VAR_21))
  return -VAR_0;

 VAR_24 = FUNC_7(VAR_6, VAR_19, VAR_21, &VAR_10);
 if (VAR_24) {
  FUNC_15("prog '%s': relo #%d: parsing [%d] %s + %s failed: %d\n",
      VAR_9, VAR_5, VAR_19, VAR_16, VAR_21,
      VAR_24);
  return -VAR_0;
 }

 FUNC_14("prog '%s': relo #%d: spec is ", VAR_9, VAR_5);
 FUNC_2(VAR_2, &VAR_10);
 FUNC_13(VAR_2, "\n");

 if (!FUNC_11(VAR_8, VAR_13, (void **)&VAR_18)) {
  VAR_18 = FUNC_3(VAR_6, VAR_19, VAR_7);
  if (FUNC_0(VAR_18)) {
   FUNC_15("prog '%s': relo #%d: target candidate search failed for [%d] %s: %ld",
       VAR_9, VAR_5, VAR_19, VAR_16,
       FUNC_1(VAR_18));
   return FUNC_1(VAR_18);
  }
  VAR_24 = FUNC_12(VAR_8, VAR_13, VAR_18, ((void*)0), ((void*)0));
  if (VAR_24) {
   FUNC_4(VAR_18);
   return VAR_24;
  }
 }

 for (VAR_22 = 0, VAR_23 = 0; VAR_22 < VAR_18->len; VAR_22++) {
  VAR_20 = VAR_18->data[VAR_22];
  VAR_15 = FUNC_10(VAR_7, VAR_20);
  VAR_17 = FUNC_9(VAR_7, VAR_15->name_off);

  VAR_24 = FUNC_6(&VAR_10, VAR_7,
       VAR_20, &VAR_11);
  FUNC_14("prog '%s': relo #%d: matching candidate #%d %s against spec ",
    VAR_9, VAR_5, VAR_22, VAR_17);
  FUNC_2(VAR_2, &VAR_11);
  FUNC_13(VAR_2, ": %d\n", VAR_24);
  if (VAR_24 < 0) {
   FUNC_15("prog '%s': relo #%d: matching error: %d\n",
       VAR_9, VAR_5, VAR_24);
   return VAR_24;
  }
  if (VAR_24 == 0)
   continue;

  if (VAR_23 == 0) {
   VAR_12 = VAR_11;
  } else if (VAR_11.offset != VAR_12.offset) {



   FUNC_15("prog '%s': relo #%d: offset ambiguity: %u != %u\n",
       VAR_9, VAR_5, VAR_11.offset,
       VAR_12.offset);
   return -VAR_0;
  }

  VAR_18->data[VAR_23++] = VAR_11.spec[0].type_id;
 }

 VAR_18->len = VAR_23;
 if (VAR_18->len == 0) {
  FUNC_15("prog '%s': relo #%d: no matching targets found for [%d] %s + %s\n",
      VAR_9, VAR_5, VAR_19, VAR_16, VAR_21);
  return -VAR_1;
 }

 VAR_24 = FUNC_5(VAR_3, VAR_4->insn_off,
      VAR_10.offset, VAR_12.offset);
 if (VAR_24) {
  FUNC_15("prog '%s': relo #%d: failed to patch insn at offset %d: %d\n",
      VAR_9, VAR_5, VAR_4->insn_off, VAR_24);
  return -VAR_0;
 }

 return 0;
}
