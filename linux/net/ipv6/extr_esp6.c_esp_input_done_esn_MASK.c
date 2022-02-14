
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct crypto_async_request {struct sk_buff* data; } ;


 int FUNC_0 (struct crypto_async_request*,int) ;
 int FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_2(struct crypto_async_request *VAR_0, int VAR_1)
{
 struct sk_buff *VAR_2 = VAR_0->data;

 FUNC_1(VAR_2);
 FUNC_0(VAR_0, VAR_1);
}
