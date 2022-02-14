
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sock {int dummy; } ;
struct list_head {int dummy; } ;
struct TYPE_2__ {struct list_head dccps_featneg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct list_head*,int ,int ,int ) ;
 int FUNC_1 (struct list_head*,int ,int,int,int*,int) ;
 scalar_t__ FUNC_2 (int**,int*) ;
 int FUNC_3 (int ,int*,int) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

int FUNC_6(struct sock *VAR_8)
{
 struct list_head *VAR_9 = &FUNC_4(VAR_8)->dccps_featneg;
 u8 VAR_10 = 1, VAR_11 = 0;
 int VAR_12;
 struct {
  u8 *val;
  u8 len;
 } VAR_13, VAR_14;


 VAR_12 = FUNC_0(VAR_9, VAR_2, 0,
        VAR_6);
 if (VAR_12)
  return VAR_12;




 VAR_12 = FUNC_1(VAR_9, VAR_3, 1, 1, &VAR_11, 1);
 if (VAR_12)
  return VAR_12;


 VAR_12 = FUNC_1(VAR_9, VAR_1, 1, 1, &VAR_10, 1);
 if (VAR_12)
  return VAR_12;







 if (FUNC_2(&VAR_13.val, &VAR_13.len))
  return -VAR_4;
 if (FUNC_2(&VAR_14.val, &VAR_14.len)) {
  FUNC_5(VAR_13.val);
  return -VAR_4;
 }

 if (!FUNC_3(VAR_7, VAR_13.val, VAR_13.len) ||
     !FUNC_3(VAR_5, VAR_14.val, VAR_14.len))
  goto free_ccid_lists;

 VAR_12 = FUNC_1(VAR_9, VAR_0, 1, 0, VAR_13.val, VAR_13.len);
 if (VAR_12)
  goto free_ccid_lists;

 VAR_12 = FUNC_1(VAR_9, VAR_0, 0, 0, VAR_14.val, VAR_14.len);

free_ccid_lists:
 FUNC_5(VAR_13.val);
 FUNC_5(VAR_14.val);
 return VAR_12;
}
