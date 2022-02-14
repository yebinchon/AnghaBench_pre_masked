
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {int dummy; } ;
typedef int gfp_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 int FUNC_1 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct sk_buff*,void const*,int) ;
 int FUNC_4 (struct sk_buff*,scalar_t__) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,struct sock*) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct sock *VAR_1, const void *VAR_2,
     int VAR_3, gfp_t VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_2(VAR_0 + VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);
 FUNC_6(VAR_5, VAR_1);

 FUNC_4(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_3);
 FUNC_3(VAR_5, VAR_2, VAR_3);
 FUNC_0(VAR_5, sizeof(struct pnpipehdr));
 FUNC_5(VAR_5);
 return VAR_5;
}
