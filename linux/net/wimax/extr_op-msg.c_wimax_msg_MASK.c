
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wimax_dev {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sk_buff* FUNC_2 (struct wimax_dev*,char const*,void const*,size_t,int ) ;
 int FUNC_3 (struct wimax_dev*,struct sk_buff*) ;

int FUNC_4(struct wimax_dev *VAR_1, const char *VAR_2,
       const void *VAR_3, size_t VAR_4, gfp_t VAR_5)
{
 int VAR_6 = -VAR_0;
 struct sk_buff *VAR_7;

 VAR_7 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
 if (FUNC_0(VAR_7))
  VAR_6 = FUNC_1(VAR_7);
 else
  VAR_6 = FUNC_3(VAR_1, VAR_7);
 return VAR_6;
}
