
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct btf_type {scalar_t__ name_off; size_t type; int info; } ;
struct btf_param {size_t type; } ;
struct btf_member {size_t type; } ;
struct TYPE_4__ {scalar_t__ dont_resolve_fwds; } ;
struct btf_dedup {size_t* hypot_map; TYPE_2__ opts; TYPE_1__* btf; } ;
struct btf_array {size_t index_type; size_t type; } ;
typedef size_t __u32 ;
typedef scalar_t__ __u16 ;
struct TYPE_3__ {struct btf_type** types; } ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct btf_array* FUNC_0 (struct btf_type*) ;
 int FUNC_1 (struct btf_type*,struct btf_type*) ;
 int FUNC_2 (struct btf_type*,struct btf_type*) ;
 int FUNC_3 (struct btf_type*,struct btf_type*) ;
 scalar_t__ FUNC_4 (struct btf_dedup*,size_t,size_t) ;
 int FUNC_5 (struct btf_type*,struct btf_type*) ;
 int FUNC_6 (struct btf_type*,struct btf_type*) ;
 int FUNC_7 (struct btf_type*,struct btf_type*) ;
 scalar_t__ FUNC_8 (struct btf_type*) ;
 scalar_t__ FUNC_9 (struct btf_type*) ;
 struct btf_member* FUNC_10 (struct btf_type*) ;
 struct btf_param* FUNC_11 (struct btf_type*) ;
 int FUNC_12 (struct btf_type*,struct btf_type*) ;
 scalar_t__ FUNC_13 (struct btf_type*) ;
 size_t FUNC_14 (struct btf_dedup*,size_t) ;
 scalar_t__ FUNC_15 (struct btf_dedup*,size_t) ;

__attribute__((used)) static int FUNC_16(struct btf_dedup *VAR_3, __u32 VAR_4,
         __u32 VAR_5)
{
 struct btf_type *VAR_6;
 struct btf_type *VAR_7;
 __u32 VAR_8;
 __u16 VAR_9;
 __u16 VAR_10;
 int VAR_11, VAR_12;


 if (FUNC_15(VAR_3, VAR_4) == FUNC_15(VAR_3, VAR_5))
  return 1;

 VAR_5 = FUNC_14(VAR_3, VAR_5);

 VAR_8 = VAR_3->hypot_map[VAR_5];
 if (VAR_8 <= VAR_0)
  return VAR_8 == VAR_4;

 if (FUNC_4(VAR_3, VAR_5, VAR_4))
  return -VAR_2;

 VAR_6 = VAR_3->btf->types[VAR_4];
 VAR_7 = VAR_3->btf->types[VAR_5];
 VAR_9 = FUNC_9(VAR_6);
 VAR_10 = FUNC_9(VAR_7);

 if (VAR_6->name_off != VAR_7->name_off)
  return 0;


 if (!VAR_3->opts.dont_resolve_fwds
     && (VAR_9 == 135 || VAR_10 == 135)
     && VAR_9 != VAR_10) {
  __u16 VAR_13;
  __u16 VAR_14;

  if (VAR_9 == 135) {
   VAR_13 = VAR_10;
   VAR_14 = FUNC_8(VAR_6);
  } else {
   VAR_13 = VAR_9;
   VAR_14 = FUNC_8(VAR_7);
  }
  return VAR_14 == VAR_13;
 }

 if (VAR_9 != VAR_10)
  return 0;

 switch (VAR_9) {
 case 134:
  return FUNC_7(VAR_6, VAR_7);

 case 138:
  if (VAR_3->opts.dont_resolve_fwds)
   return FUNC_6(VAR_6, VAR_7);
  else
   return FUNC_2(VAR_6, VAR_7);

 case 135:
  return FUNC_5(VAR_6, VAR_7);

 case 139:
 case 128:
 case 132:
 case 133:
 case 130:
 case 137:
  if (VAR_6->info != VAR_7->info)
   return 0;
  return FUNC_16(VAR_3, VAR_6->type, VAR_7->type);

 case 140: {
  const struct btf_array *VAR_15, *VAR_16;

  if (!FUNC_1(VAR_6, VAR_7))
   return 0;
  VAR_15 = FUNC_0(VAR_6);
  VAR_16 = FUNC_0(VAR_7);
  VAR_12 = FUNC_16(VAR_3,
   VAR_15->index_type, VAR_16->index_type);
  if (VAR_12 <= 0)
   return VAR_12;
  return FUNC_16(VAR_3, VAR_15->type, VAR_16->type);
 }

 case 131:
 case 129: {
  const struct btf_member *VAR_17, *VAR_18;
  __u16 VAR_19;

  if (!FUNC_12(VAR_6, VAR_7))
   return 0;
  VAR_19 = FUNC_13(VAR_6);
  VAR_17 = FUNC_10(VAR_6);
  VAR_18 = FUNC_10(VAR_7);
  for (VAR_11 = 0; VAR_11 < VAR_19; VAR_11++) {
   VAR_12 = FUNC_16(VAR_3, VAR_17->type, VAR_18->type);
   if (VAR_12 <= 0)
    return VAR_12;
   VAR_17++;
   VAR_18++;
  }

  return 1;
 }

 case 136: {
  const struct btf_param *VAR_20, *VAR_21;
  __u16 VAR_22;

  if (!FUNC_3(VAR_6, VAR_7))
   return 0;
  VAR_12 = FUNC_16(VAR_3, VAR_6->type, VAR_7->type);
  if (VAR_12 <= 0)
   return VAR_12;
  VAR_22 = FUNC_13(VAR_6);
  VAR_20 = FUNC_11(VAR_6);
  VAR_21 = FUNC_11(VAR_7);
  for (VAR_11 = 0; VAR_11 < VAR_22; VAR_11++) {
   VAR_12 = FUNC_16(VAR_3, VAR_20->type, VAR_21->type);
   if (VAR_12 <= 0)
    return VAR_12;
   VAR_20++;
   VAR_21++;
  }
  return 1;
 }

 default:
  return -VAR_1;
 }
 return 0;
}
