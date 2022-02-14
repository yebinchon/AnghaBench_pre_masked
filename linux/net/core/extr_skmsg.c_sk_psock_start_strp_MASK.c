
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_write_space; int sk_data_ready; } ;
struct sk_psock_parser {int enabled; int saved_data_ready; } ;
struct sk_psock {struct sk_psock_parser parser; } ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(struct sock *VAR_2, struct sk_psock *VAR_3)
{
 struct sk_psock_parser *VAR_4 = &VAR_3->parser;

 if (VAR_4->enabled)
  return;

 VAR_4->saved_data_ready = VAR_2->sk_data_ready;
 VAR_2->sk_data_ready = VAR_0;
 VAR_2->sk_write_space = VAR_1;
 VAR_4->enabled = 1;
}
