
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; scalar_t__ data; } ;


 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (scalar_t__,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = VAR_0->len;
 int VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_3)
  FUNC_1(VAR_0->data + VAR_2, 0, VAR_1 - VAR_2);
 return VAR_3;
}
