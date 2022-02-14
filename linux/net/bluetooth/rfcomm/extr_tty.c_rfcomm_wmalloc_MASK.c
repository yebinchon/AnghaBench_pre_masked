
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rfcomm_dev {int dummy; } ;
typedef int gfp_t ;


 struct sk_buff* FUNC_0 (unsigned long,int ) ;
 int FUNC_1 (struct sk_buff*,struct rfcomm_dev*) ;

__attribute__((used)) static struct sk_buff *FUNC_2(struct rfcomm_dev *VAR_0, unsigned long VAR_1, gfp_t VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (VAR_3)
  FUNC_1(VAR_3, VAR_0);
 return VAR_3;
}
