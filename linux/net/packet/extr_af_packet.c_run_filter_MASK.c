
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_filter; } ;
struct sk_filter {int prog; } ;
struct sk_buff {int dummy; } ;


 unsigned int FUNC_0 (int ,struct sk_buff*) ;
 struct sk_filter* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static unsigned int FUNC_4(struct sk_buff *VAR_0,
          const struct sock *VAR_1,
          unsigned int VAR_2)
{
 struct sk_filter *VAR_3;

 FUNC_2();
 VAR_3 = FUNC_1(VAR_1->sk_filter);
 if (VAR_3 != ((void*)0))
  VAR_2 = FUNC_0(VAR_3->prog, VAR_0);
 FUNC_3();

 return VAR_2;
}
