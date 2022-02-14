
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct sk_buff {size_t len; void* data; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct device*,void*,size_t) ;
 int FUNC_1 (int,struct device*,char*,...) ;
 int FUNC_2 (int *,struct sk_buff*,int ,int ,int ) ;
 int FUNC_3 () ;
 struct device* FUNC_4 (struct wimax_dev*) ;
 int VAR_1 ;

int FUNC_5(struct wimax_dev *VAR_2, struct sk_buff *VAR_3)
{
 struct device *VAR_4 = FUNC_4(VAR_2);
 void *VAR_5 = VAR_3->data;
 size_t VAR_6 = VAR_3->len;
 FUNC_3();

 FUNC_1(1, VAR_4, "CTX: wimax msg, %zu bytes\n", VAR_6);
 FUNC_0(2, VAR_4, VAR_5, VAR_6);
 FUNC_2(&VAR_1, VAR_3, 0, 0, VAR_0);
 FUNC_1(1, VAR_4, "CTX: genl multicast done\n");
 return 0;
}
