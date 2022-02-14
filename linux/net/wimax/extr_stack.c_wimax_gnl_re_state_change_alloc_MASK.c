
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct wimax_dev {TYPE_1__* net_dev; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;
typedef enum wimax_st { ____Placeholder_wimax_st } wimax_st ;
struct TYPE_5__ {int mcgrp_offset; } ;
struct TYPE_4__ {int ifindex; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,int,int,int) ;
 int FUNC_2 (int,struct device*,char*,struct wimax_dev*,int,int) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct sk_buff*,int ,int ,TYPE_2__*,int ,int ) ;
 int FUNC_5 (struct sk_buff*,int ,int ) ;
 int FUNC_6 (struct sk_buff*,int ,int) ;
 int FUNC_7 (struct sk_buff*) ;
 struct sk_buff* FUNC_8 (int ,int ) ;
 struct device* FUNC_9 (struct wimax_dev*) ;
 TYPE_2__ VAR_7 ;

__attribute__((used)) static
struct sk_buff *FUNC_10(
 struct wimax_dev *VAR_8,
 enum wimax_st VAR_9, enum wimax_st VAR_10,
 void **VAR_11)
{
 int VAR_12;
 struct device *VAR_13 = FUNC_9(VAR_8);
 void *VAR_14;
 struct sk_buff *VAR_15;

 FUNC_2(3, VAR_13, "(wimax_dev %p new_state %u old_state %u)\n",
    VAR_8, VAR_9, VAR_10);
 VAR_12 = -VAR_0;
 VAR_15 = FUNC_8(VAR_2, VAR_1);
 if (VAR_15 == ((void*)0)) {
  FUNC_3(VAR_13, "RE_STCH: can't create message\n");
  goto error_new;
 }

 VAR_14 = FUNC_4(VAR_15, 0, VAR_7.mcgrp_offset,
      &VAR_7, 0, VAR_3);
 if (VAR_14 == ((void*)0)) {
  FUNC_3(VAR_13, "RE_STCH: can't put data into message\n");
  goto error_put;
 }
 *VAR_11 = VAR_14;

 VAR_12 = FUNC_6(VAR_15, VAR_6, VAR_10);
 if (VAR_12 < 0) {
  FUNC_3(VAR_13, "RE_STCH: Error adding OLD attr: %d\n", VAR_12);
  goto error_put;
 }
 VAR_12 = FUNC_6(VAR_15, VAR_5, VAR_9);
 if (VAR_12 < 0) {
  FUNC_3(VAR_13, "RE_STCH: Error adding NEW attr: %d\n", VAR_12);
  goto error_put;
 }
 VAR_12 = FUNC_5(VAR_15, VAR_4,
        VAR_8->net_dev->ifindex);
 if (VAR_12 < 0) {
  FUNC_3(VAR_13, "RE_STCH: Error adding IFINDEX attribute\n");
  goto error_put;
 }
 FUNC_1(3, VAR_13, "(wimax_dev %p new_state %u old_state %u) = %p\n",
  VAR_8, VAR_9, VAR_10, VAR_15);
 return VAR_15;

error_put:
 FUNC_7(VAR_15);
error_new:
 FUNC_1(3, VAR_13, "(wimax_dev %p new_state %u old_state %u) = %d\n",
  VAR_8, VAR_9, VAR_10, VAR_12);
 return FUNC_0(VAR_12);
}
