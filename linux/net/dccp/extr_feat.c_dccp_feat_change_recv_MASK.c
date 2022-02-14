
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct list_head {int dummy; } ;
struct dccp_feat_entry {scalar_t__ state; int empty_confirm; int needs_confirm; int needs_mandatory; int val; } ;
struct TYPE_5__ {scalar_t__* vec; } ;
struct TYPE_6__ {TYPE_1__ sp; int nn; } ;
typedef TYPE_2__ dccp_feat_val ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__*,int) ;
 int FUNC_2 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_2__*,scalar_t__*,int) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 struct dccp_feat_entry* FUNC_7 (struct list_head*,scalar_t__,int const) ;
 int FUNC_8 (scalar_t__*,int,scalar_t__*,scalar_t__) ;
 int FUNC_9 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_10 (struct list_head*,scalar_t__,int const,TYPE_2__*) ;
 scalar_t__ FUNC_11 (int *,scalar_t__*,int,int const,int) ;
 scalar_t__ FUNC_12 (scalar_t__) ;
 scalar_t__ FUNC_13 (struct list_head*,scalar_t__,int const) ;
 int FUNC_14 (scalar_t__*) ;

__attribute__((used)) static u8 FUNC_15(struct list_head *VAR_10, u8 VAR_11, u8 VAR_12,
    u8 VAR_13, u8 *VAR_14, u8 VAR_15, const bool VAR_16)
{
 u8 VAR_17, VAR_18 = FUNC_12(VAR_13);
 const bool VAR_19 = (VAR_12 == VAR_1);
 struct dccp_feat_entry *VAR_20;
 dccp_feat_val VAR_21;

 if (VAR_15 == 0 || VAR_18 == VAR_8)
  goto unknown_feature_or_value;

 FUNC_9(VAR_12, VAR_13, VAR_14, VAR_15, VAR_11);





 if (VAR_18 == VAR_6) {
  if (VAR_19 || VAR_15 > sizeof(VAR_21.nn))
   goto unknown_feature_or_value;


  VAR_21.nn = FUNC_2(VAR_14, VAR_15);
  if (!FUNC_5(VAR_13, VAR_21.nn))
   goto unknown_feature_or_value;

  return FUNC_10(VAR_10, VAR_13, VAR_19, &VAR_21);
 }




 VAR_20 = FUNC_7(VAR_10, VAR_13, VAR_19);
 if (VAR_20 == ((void*)0)) {
  if (FUNC_3(&VAR_21, VAR_14, 1))
   return VAR_4;

  if (VAR_15 > 1 && VAR_16) {
   VAR_17 = FUNC_4(VAR_13);
   if (FUNC_8(&VAR_17, 1, VAR_14, VAR_15) > -1)
    VAR_21.sp.vec[0] = VAR_17;
  } else if (!FUNC_6(VAR_13, VAR_21.sp.vec[0])) {
   FUNC_14(VAR_21.sp.vec);
   goto unknown_feature_or_value;
  }


  if (VAR_13 == VAR_0 && !FUNC_1(VAR_21.sp.vec, 1)) {
   FUNC_14(VAR_21.sp.vec);
   goto not_valid_or_not_known;
  }

  return FUNC_10(VAR_10, VAR_13, VAR_19, &VAR_21);

 } else if (VAR_20->state == VAR_9) {
  return 0;
 }

 if (FUNC_11(&VAR_20->val, VAR_14, VAR_15, VAR_16, 1)) {
  VAR_20->empty_confirm = 0;
 } else if (VAR_11) {
  return VAR_2;
 } else if (VAR_20->state == VAR_5) {
  FUNC_0(!VAR_16);
  VAR_17 = FUNC_4(VAR_13);
  if (!FUNC_11(&VAR_20->val, &VAR_17, 1, VAR_16, 1))
   return VAR_3;
  VAR_20->empty_confirm = 1;
 }
 VAR_20->needs_confirm = 1;
 VAR_20->needs_mandatory = 0;
 VAR_20->state = VAR_7;
 return 0;

unknown_feature_or_value:
 if (!VAR_11)
  return FUNC_13(VAR_10, VAR_13, VAR_19);

not_valid_or_not_known:
 return VAR_11 ? VAR_2
       : VAR_3;
}
