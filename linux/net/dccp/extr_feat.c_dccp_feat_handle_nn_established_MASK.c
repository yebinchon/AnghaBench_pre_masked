
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_6__ {scalar_t__ nn; } ;
struct dccp_feat_entry {scalar_t__ state; TYPE_1__ val; } ;
struct TYPE_7__ {scalar_t__ nn; } ;
typedef TYPE_2__ dccp_feat_val ;
struct TYPE_8__ {struct list_head dccps_featneg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 void* FUNC_1 (scalar_t__*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct sock*,scalar_t__,int const,TYPE_2__*) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 struct dccp_feat_entry* FUNC_4 (struct list_head*,scalar_t__,int const) ;
 int FUNC_5 (struct dccp_feat_entry*) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (struct list_head*,scalar_t__,int const,TYPE_2__*) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct list_head*,scalar_t__,int const) ;
 TYPE_3__* FUNC_10 (struct sock*) ;
 int FUNC_11 (struct sock*) ;

__attribute__((used)) static u8 FUNC_12(struct sock *VAR_8, u8 VAR_9, u8 VAR_10,
       u8 VAR_11, u8 *VAR_12, u8 VAR_13)
{
 struct list_head *VAR_14 = &FUNC_10(VAR_8)->dccps_featneg;
 const bool VAR_15 = (VAR_10 == VAR_1);
 struct dccp_feat_entry *VAR_16;
 u8 VAR_17 = FUNC_8(VAR_11);
 dccp_feat_val VAR_18;

 FUNC_6(VAR_10, VAR_11, VAR_12, VAR_13, VAR_9);


 if (VAR_17 == VAR_7) {
  if (VAR_15 && !VAR_9)
   return 0;
  goto fast_path_unknown;
 } else if (VAR_17 != VAR_6) {
  return 0;
 }







 if (VAR_13 == 0 || VAR_13 > sizeof(VAR_18.nn))
  goto fast_path_unknown;

 if (VAR_10 == VAR_0) {
  VAR_18.nn = FUNC_1(VAR_12, VAR_13);
  if (!FUNC_3(VAR_11, VAR_18.nn))
   goto fast_path_unknown;

  if (FUNC_7(VAR_14, VAR_11, VAR_15, &VAR_18) ||
      FUNC_2(VAR_8, VAR_11, VAR_15, &VAR_18))
   return VAR_4;


  FUNC_11(VAR_8);

 } else if (VAR_10 == VAR_1) {
  VAR_16 = FUNC_4(VAR_14, VAR_11, VAR_15);
  if (VAR_16 == ((void*)0) || VAR_16->state != VAR_5)
   return 0;

  VAR_18.nn = FUNC_1(VAR_12, VAR_13);






  if (VAR_18.nn != VAR_16->val.nn)
   return 0;


  FUNC_2(VAR_8, VAR_11, VAR_15, &VAR_18);


  FUNC_5(VAR_16);

 } else {
  FUNC_0("Received illegal option %u\n", VAR_10);
  goto fast_path_failed;
 }
 return 0;

fast_path_unknown:
 if (!VAR_9)
  return FUNC_9(VAR_14, VAR_11, VAR_15);

fast_path_failed:
 return VAR_9 ? VAR_2
    : VAR_3;
}
