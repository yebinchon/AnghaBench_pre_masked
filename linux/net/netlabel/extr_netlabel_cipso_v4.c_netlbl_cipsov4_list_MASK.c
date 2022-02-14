
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct genl_info {int * attrs; } ;
struct TYPE_8__ {TYPE_3__* std; } ;
struct cipso_v4_doi {size_t type; scalar_t__* tags; TYPE_4__ map; } ;
struct TYPE_6__ {size_t local_size; size_t* local; } ;
struct TYPE_5__ {size_t local_size; size_t* local; } ;
struct TYPE_7__ {TYPE_2__ cat; TYPE_1__ lvl; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;

 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 size_t VAR_20 ;
 struct cipso_v4_doi* FUNC_0 (size_t) ;
 int FUNC_1 (struct sk_buff*,void*) ;
 void* FUNC_2 (struct sk_buff*,struct genl_info*,int *,int ,int ) ;
 int FUNC_3 (struct sk_buff*,struct genl_info*) ;
 int FUNC_4 (struct sk_buff*) ;
 int VAR_21 ;
 size_t FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*,int ,size_t) ;
 int FUNC_9 (struct sk_buff*,int ,scalar_t__) ;
 struct sk_buff* FUNC_10 (size_t,int ) ;
 int FUNC_11 () ;
 int FUNC_12 () ;

__attribute__((used)) static int FUNC_13(struct sk_buff *VAR_22, struct genl_info *VAR_23)
{
 int VAR_24;
 struct sk_buff *VAR_25 = ((void*)0);
 u32 VAR_26 = 1;
 void *VAR_27;
 u32 VAR_28;
 struct nlattr *VAR_29;
 struct nlattr *VAR_30;
 struct cipso_v4_doi *VAR_31;
 u32 VAR_32;

 if (!VAR_23->attrs[VAR_7]) {
  VAR_24 = -VAR_4;
  goto list_failure;
 }

list_start:
 VAR_25 = FUNC_10(VAR_20 * VAR_26, VAR_6);
 if (VAR_25 == ((void*)0)) {
  VAR_24 = -VAR_5;
  goto list_failure;
 }
 VAR_27 = FUNC_2(VAR_25, VAR_23, &VAR_21,
     0, VAR_19);
 if (VAR_27 == ((void*)0)) {
  VAR_24 = -VAR_5;
  goto list_failure;
 }

 VAR_28 = FUNC_5(VAR_23->attrs[VAR_7]);

 FUNC_11();
 VAR_31 = FUNC_0(VAR_28);
 if (VAR_31 == ((void*)0)) {
  VAR_24 = -VAR_4;
  goto list_failure_lock;
 }

 VAR_24 = FUNC_8(VAR_25, VAR_16, VAR_31->type);
 if (VAR_24 != 0)
  goto list_failure_lock;

 VAR_29 = FUNC_7(VAR_25, VAR_18);
 if (VAR_29 == ((void*)0)) {
  VAR_24 = -VAR_5;
  goto list_failure_lock;
 }
 for (VAR_32 = 0;
      VAR_32 < VAR_3 &&
        VAR_31->tags[VAR_32] != VAR_2;
      VAR_32++) {
  VAR_24 = FUNC_9(VAR_25,
         VAR_17,
         VAR_31->tags[VAR_32]);
  if (VAR_24 != 0)
   goto list_failure_lock;
 }
 FUNC_6(VAR_25, VAR_29);

 switch (VAR_31->type) {
 case 128:
  VAR_29 = FUNC_7(VAR_25,
           VAR_14);
  if (VAR_29 == ((void*)0)) {
   VAR_24 = -VAR_5;
   goto list_failure_lock;
  }
  for (VAR_32 = 0;
       VAR_32 < VAR_31->map.std->lvl.local_size;
       VAR_32++) {
   if (VAR_31->map.std->lvl.local[VAR_32] ==
       VAR_1)
    continue;

   VAR_30 = FUNC_7(VAR_25,
            VAR_12);
   if (VAR_30 == ((void*)0)) {
    VAR_24 = -VAR_5;
    goto list_retry;
   }
   VAR_24 = FUNC_8(VAR_25,
           VAR_13,
           VAR_32);
   if (VAR_24 != 0)
    goto list_retry;
   VAR_24 = FUNC_8(VAR_25,
         VAR_15,
         VAR_31->map.std->lvl.local[VAR_32]);
   if (VAR_24 != 0)
    goto list_retry;
   FUNC_6(VAR_25, VAR_30);
  }
  FUNC_6(VAR_25, VAR_29);

  VAR_29 = FUNC_7(VAR_25,
           VAR_10);
  if (VAR_29 == ((void*)0)) {
   VAR_24 = -VAR_5;
   goto list_retry;
  }
  for (VAR_32 = 0;
       VAR_32 < VAR_31->map.std->cat.local_size;
       VAR_32++) {
   if (VAR_31->map.std->cat.local[VAR_32] ==
       VAR_0)
    continue;

   VAR_30 = FUNC_7(VAR_25,
            VAR_8);
   if (VAR_30 == ((void*)0)) {
    VAR_24 = -VAR_5;
    goto list_retry;
   }
   VAR_24 = FUNC_8(VAR_25,
           VAR_9,
           VAR_32);
   if (VAR_24 != 0)
    goto list_retry;
   VAR_24 = FUNC_8(VAR_25,
         VAR_11,
         VAR_31->map.std->cat.local[VAR_32]);
   if (VAR_24 != 0)
    goto list_retry;
   FUNC_6(VAR_25, VAR_30);
  }
  FUNC_6(VAR_25, VAR_29);

  break;
 }
 FUNC_12();

 FUNC_1(VAR_25, VAR_27);
 return FUNC_3(VAR_25, VAR_23);

list_retry:

 if (VAR_26 < 4) {
  FUNC_12();
  FUNC_4(VAR_25);
  VAR_26 *= 2;
  goto list_start;
 }
list_failure_lock:
 FUNC_12();
list_failure:
 FUNC_4(VAR_25);
 return VAR_24;
}
