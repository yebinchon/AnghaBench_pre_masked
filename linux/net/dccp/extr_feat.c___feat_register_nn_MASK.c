
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct list_head {int dummy; } ;
struct TYPE_3__ {scalar_t__ nn; } ;
typedef TYPE_1__ dccp_feat_val ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (struct list_head*,int ,int,int ,TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct list_head *VAR_2, u8 VAR_3,
         u8 VAR_4, u64 VAR_5)
{
 dccp_feat_val VAR_6 = { .nn = VAR_5 };

 if (FUNC_3(VAR_3) != VAR_1 ||
     !FUNC_1(VAR_3, VAR_5))
  return -VAR_0;


 if (VAR_5 - (u64)FUNC_0(VAR_3) == 0)
  return 0;

 return FUNC_2(VAR_2, VAR_3, 1, VAR_4, &VAR_6);
}
