
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock_fprog_kern {int filter; } ;
struct sock {int sk_filter; } ;
struct sk_filter {TYPE_1__* prog; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_2__ {struct sock_fprog_kern* orig_prog; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct sock_fprog_kern*) ;
 int FUNC_1 (int ,int ,unsigned int) ;
 int FUNC_2 (struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int,unsigned int) ;
 struct sk_filter* FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

int FUNC_7(bool VAR_1, struct sock *VAR_2,
        struct sk_buff *VAR_3, int VAR_4)
{
 struct sock_fprog_kern *VAR_5;
 struct sk_filter *VAR_6;
 struct nlattr *VAR_7;
 unsigned int VAR_8;
 int VAR_9 = 0;

 if (!VAR_1) {
  FUNC_3(VAR_3, VAR_4, 0);
  return 0;
 }

 FUNC_5();
 VAR_6 = FUNC_4(VAR_2->sk_filter);
 if (!VAR_6)
  goto out;

 VAR_5 = VAR_6->prog->orig_prog;
 if (!VAR_5)
  goto out;

 VAR_8 = FUNC_0(VAR_5);

 VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_8);
 if (VAR_7 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto out;
 }

 FUNC_1(FUNC_2(VAR_7), VAR_5->filter, VAR_8);
out:
 FUNC_6();
 return VAR_9;
}
