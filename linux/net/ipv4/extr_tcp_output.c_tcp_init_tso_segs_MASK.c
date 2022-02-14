
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sk_buff*,unsigned int) ;
 unsigned int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, unsigned int VAR_1)
{
 int VAR_2 = FUNC_2(VAR_0);

 if (!VAR_2 || (VAR_2 > 1 && FUNC_1(VAR_0) != VAR_1)) {
  FUNC_0(VAR_0, VAR_1);
  VAR_2 = FUNC_2(VAR_0);
 }
 return VAR_2;
}
