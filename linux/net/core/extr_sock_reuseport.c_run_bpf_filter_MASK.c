
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
typedef size_t u16 ;
struct sock_reuseport {struct sock** socks; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct bpf_prog {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,int) ;
 size_t FUNC_1 (struct bpf_prog*,struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_5 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static struct sock *FUNC_7(struct sock_reuseport *VAR_1, u16 VAR_2,
       struct bpf_prog *VAR_3, struct sk_buff *VAR_4,
       int VAR_5)
{
 struct sk_buff *VAR_6 = ((void*)0);
 u32 VAR_7;

 if (FUNC_6(VAR_4)) {
  VAR_6 = FUNC_5(VAR_4, VAR_0);
  if (!VAR_6)
   return ((void*)0);
  VAR_4 = VAR_6;
 }


 if (!FUNC_4(VAR_4, VAR_5)) {
  FUNC_3(VAR_6);
  return ((void*)0);
 }
 VAR_7 = FUNC_1(VAR_3, VAR_4);
 FUNC_0(VAR_4, VAR_5);

 FUNC_2(VAR_6);

 if (VAR_7 >= VAR_2)
  return ((void*)0);

 return VAR_1->socks[VAR_7];
}
