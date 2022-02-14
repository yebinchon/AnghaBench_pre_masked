
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct list_head {int dummy; } ;
struct TYPE_5__ {int vec; } ;
struct TYPE_6__ {TYPE_1__ sp; } ;
typedef TYPE_2__ dccp_feat_val ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__ const*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__ const*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct list_head*,scalar_t__,scalar_t__,scalar_t__,TYPE_2__*) ;
 int FUNC_3 (scalar_t__,scalar_t__ const*,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct list_head *VAR_5, u8 VAR_6, u8 VAR_7,
         u8 VAR_8, u8 const *VAR_9, u8 VAR_10)
{
 dccp_feat_val VAR_11;

 if (FUNC_4(VAR_6) != VAR_4 ||
     !FUNC_3(VAR_6, VAR_9, VAR_10))
  return -VAR_1;


 if (VAR_6 == VAR_0 && !FUNC_0(VAR_9, VAR_10))
  return -VAR_3;

 if (FUNC_1(&VAR_11, VAR_9, VAR_10))
  return -VAR_2;

 if (FUNC_2(VAR_5, VAR_6, VAR_7, VAR_8, &VAR_11)) {
  FUNC_5(VAR_11.sp.vec);
  return -VAR_2;
 }

 return 0;
}
