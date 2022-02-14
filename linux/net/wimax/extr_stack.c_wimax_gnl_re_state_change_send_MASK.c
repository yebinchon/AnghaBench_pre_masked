
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,struct device*,char*,struct wimax_dev*,struct sk_buff*,int) ;
 int FUNC_1 (int,struct device*,char*,struct wimax_dev*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,void*) ;
 int FUNC_3 (int *,struct sk_buff*,int ,int ,int ) ;
 struct device* FUNC_4 (struct wimax_dev*) ;
 int VAR_2 ;

__attribute__((used)) static
int FUNC_5(
 struct wimax_dev *VAR_3, struct sk_buff *VAR_4,
 void *VAR_5)
{
 int VAR_6 = 0;
 struct device *VAR_7 = FUNC_4(VAR_3);
 FUNC_1(3, VAR_7, "(wimax_dev %p report_skb %p)\n",
    VAR_3, VAR_4);
 if (VAR_4 == ((void*)0)) {
  VAR_6 = -VAR_0;
  goto out;
 }
 FUNC_2(VAR_4, VAR_5);
 FUNC_3(&VAR_2, VAR_4, 0, 0, VAR_1);
out:
 FUNC_0(3, VAR_7, "(wimax_dev %p report_skb %p) = %d\n",
  VAR_3, VAR_4, VAR_6);
 return VAR_6;
}
