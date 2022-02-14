
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btf_var_secinfo {int type; int offset; int size; } ;
struct btf_var {int linkage; } ;
struct btf_type {int size; int type; int info; int name_off; } ;
struct btf_param {int type; int name_off; } ;
struct btf_member {int offset; int type; int name_off; } ;
struct btf_enum {int val; int name_off; } ;
struct btf_array {int type; int index_type; int nelems; } ;
struct btf {int dummy; } ;
typedef int json_writer_t ;
typedef int __u32 ;
typedef int __u16 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_0 ;





 int VAR_1 ;


 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (int ) ;
 char** VAR_2 ;
 char* FUNC_9 (struct btf const*,int ) ;
 char* FUNC_10 (int ) ;
 scalar_t__ VAR_3 ;
 int * VAR_4 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,char*,char const*) ;
 int FUNC_17 (int *,char*,int) ;
 int FUNC_18 (char*,...) ;

__attribute__((used)) static int FUNC_19(const struct btf *VAR_5, __u32 VAR_6,
    const struct btf_type *VAR_7)
{
 json_writer_t *VAR_8 = VAR_4;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_1(VAR_7->info);
 VAR_10 = VAR_9 <= VAR_0 ? VAR_9 : VAR_1;

 if (VAR_3) {
  FUNC_15(VAR_8);
  FUNC_17(VAR_8, "id", VAR_6);
  FUNC_16(VAR_8, "kind", VAR_2[VAR_10]);
  FUNC_16(VAR_8, "name", FUNC_9(VAR_5, VAR_7->name_off));
 } else {
  FUNC_18("[%u] %s '%s'", VAR_6, VAR_2[VAR_10],
         FUNC_9(VAR_5, VAR_7->name_off));
 }

 switch (FUNC_1(VAR_7->info)) {
 case 135: {
  __u32 VAR_11 = *(__u32 *)(VAR_7 + 1);
  const char *VAR_12;

  VAR_12 = FUNC_8(FUNC_4(VAR_11));

  if (VAR_3) {
   FUNC_17(VAR_8, "size", VAR_7->size);
   FUNC_17(VAR_8, "bits_offset", FUNC_5(VAR_11));
   FUNC_17(VAR_8, "nr_bits", FUNC_3(VAR_11));
   FUNC_16(VAR_8, "encoding", VAR_12);
  } else {
   FUNC_18(" size=%u bits_offset=%u nr_bits=%u encoding=%s",
          VAR_7->size, FUNC_5(VAR_11), FUNC_3(VAR_11),
          VAR_12);
  }
  break;
 }
 case 134:
 case 141:
 case 128:
 case 133:
 case 131:
  if (VAR_3)
   FUNC_17(VAR_8, "type_id", VAR_7->type);
  else
   FUNC_18(" type_id=%u", VAR_7->type);
  break;
 case 142: {
  const struct btf_array *VAR_13 = (const void *)(VAR_7 + 1);

  if (VAR_3) {
   FUNC_17(VAR_8, "type_id", VAR_13->type);
   FUNC_17(VAR_8, "index_type_id", VAR_13->index_type);
   FUNC_17(VAR_8, "nr_elems", VAR_13->nelems);
  } else {
   FUNC_18(" type_id=%u index_type_id=%u nr_elems=%u",
          VAR_13->type, VAR_13->index_type, VAR_13->nelems);
  }
  break;
 }
 case 132:
 case 130: {
  const struct btf_member *VAR_14 = (const void *)(VAR_7 + 1);
  __u16 VAR_15 = FUNC_2(VAR_7->info);
  int VAR_16;

  if (VAR_3) {
   FUNC_17(VAR_8, "size", VAR_7->size);
   FUNC_17(VAR_8, "vlen", VAR_15);
   FUNC_13(VAR_8, "members");
   FUNC_14(VAR_8);
  } else {
   FUNC_18(" size=%u vlen=%u", VAR_7->size, VAR_15);
  }
  for (VAR_16 = 0; VAR_16 < VAR_15; VAR_16++, VAR_14++) {
   const char *VAR_17 = FUNC_9(VAR_5, VAR_14->name_off);
   __u32 VAR_18, VAR_19;

   if (FUNC_0(VAR_7->info)) {
    VAR_18 = FUNC_7(VAR_14->offset);
    VAR_19 = FUNC_6(VAR_14->offset);
   } else {
    VAR_18 = VAR_14->offset;
    VAR_19 = 0;
   }

   if (VAR_3) {
    FUNC_15(VAR_8);
    FUNC_16(VAR_8, "name", VAR_17);
    FUNC_17(VAR_8, "type_id", VAR_14->type);
    FUNC_17(VAR_8, "bits_offset", VAR_18);
    if (VAR_19) {
     FUNC_17(VAR_8, "bitfield_size",
        VAR_19);
    }
    FUNC_12(VAR_8);
   } else {
    FUNC_18("\n\t'%s' type_id=%u bits_offset=%u",
           VAR_17, VAR_14->type, VAR_18);
    if (VAR_19)
     FUNC_18(" bitfield_size=%u", VAR_19);
   }
  }
  if (VAR_3)
   FUNC_11(VAR_8);
  break;
 }
 case 139: {
  const struct btf_enum *VAR_20 = (const void *)(VAR_7 + 1);
  __u16 VAR_21 = FUNC_2(VAR_7->info);
  int VAR_22;

  if (VAR_3) {
   FUNC_17(VAR_8, "size", VAR_7->size);
   FUNC_17(VAR_8, "vlen", VAR_21);
   FUNC_13(VAR_8, "values");
   FUNC_14(VAR_8);
  } else {
   FUNC_18(" size=%u vlen=%u", VAR_7->size, VAR_21);
  }
  for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++, VAR_20++) {
   const char *VAR_23 = FUNC_9(VAR_5, VAR_20->name_off);

   if (VAR_3) {
    FUNC_15(VAR_8);
    FUNC_16(VAR_8, "name", VAR_23);
    FUNC_17(VAR_8, "val", VAR_20->val);
    FUNC_12(VAR_8);
   } else {
    FUNC_18("\n\t'%s' val=%u", VAR_23, VAR_20->val);
   }
  }
  if (VAR_3)
   FUNC_11(VAR_8);
  break;
 }
 case 136: {
  const char *VAR_24 = FUNC_0(VAR_7->info) ? "union"
              : "struct";

  if (VAR_3)
   FUNC_16(VAR_8, "fwd_kind", VAR_24);
  else
   FUNC_18(" fwd_kind=%s", VAR_24);
  break;
 }
 case 138:
  if (VAR_3)
   FUNC_17(VAR_8, "type_id", VAR_7->type);
  else
   FUNC_18(" type_id=%u", VAR_7->type);
  break;
 case 137: {
  const struct btf_param *VAR_25 = (const void *)(VAR_7 + 1);
  __u16 VAR_26 = FUNC_2(VAR_7->info);
  int VAR_27;

  if (VAR_3) {
   FUNC_17(VAR_8, "ret_type_id", VAR_7->type);
   FUNC_17(VAR_8, "vlen", VAR_26);
   FUNC_13(VAR_8, "params");
   FUNC_14(VAR_8);
  } else {
   FUNC_18(" ret_type_id=%u vlen=%u", VAR_7->type, VAR_26);
  }
  for (VAR_27 = 0; VAR_27 < VAR_26; VAR_27++, VAR_25++) {
   const char *VAR_28 = FUNC_9(VAR_5, VAR_25->name_off);

   if (VAR_3) {
    FUNC_15(VAR_8);
    FUNC_16(VAR_8, "name", VAR_28);
    FUNC_17(VAR_8, "type_id", VAR_25->type);
    FUNC_12(VAR_8);
   } else {
    FUNC_18("\n\t'%s' type_id=%u", VAR_28, VAR_25->type);
   }
  }
  if (VAR_3)
   FUNC_11(VAR_8);
  break;
 }
 case 129: {
  const struct btf_var *VAR_29 = (const void *)(VAR_7 + 1);
  const char *VAR_30;

  VAR_30 = FUNC_10(VAR_29->linkage);

  if (VAR_3) {
   FUNC_17(VAR_8, "type_id", VAR_7->type);
   FUNC_16(VAR_8, "linkage", VAR_30);
  } else {
   FUNC_18(" type_id=%u, linkage=%s", VAR_7->type, VAR_30);
  }
  break;
 }
 case 140: {
  const struct btf_var_secinfo *VAR_31 = (const void *)(VAR_7+1);
  __u16 VAR_32 = FUNC_2(VAR_7->info);
  int VAR_33;

  if (VAR_3) {
   FUNC_17(VAR_8, "size", VAR_7->size);
   FUNC_17(VAR_8, "vlen", VAR_32);
   FUNC_13(VAR_8, "vars");
   FUNC_14(VAR_8);
  } else {
   FUNC_18(" size=%u vlen=%u", VAR_7->size, VAR_32);
  }
  for (VAR_33 = 0; VAR_33 < VAR_32; VAR_33++, VAR_31++) {
   if (VAR_3) {
    FUNC_15(VAR_8);
    FUNC_17(VAR_8, "type_id", VAR_31->type);
    FUNC_17(VAR_8, "offset", VAR_31->offset);
    FUNC_17(VAR_8, "size", VAR_31->size);
    FUNC_12(VAR_8);
   } else {
    FUNC_18("\n\ttype_id=%u offset=%u size=%u",
           VAR_31->type, VAR_31->offset, VAR_31->size);
   }
  }
  if (VAR_3)
   FUNC_11(VAR_8);
  break;
 }
 default:
  break;
 }

 if (VAR_3)
  FUNC_12(VAR_4);
 else
  FUNC_18("\n");

 return 0;
}
