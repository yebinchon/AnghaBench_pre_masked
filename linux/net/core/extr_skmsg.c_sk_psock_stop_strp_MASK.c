
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int * sk_data_ready; } ;
struct sk_psock_parser {int enabled; int strp; int * saved_data_ready; } ;
struct sk_psock {struct sk_psock_parser parser; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct sock *VAR_0, struct sk_psock *VAR_1)
{
 struct sk_psock_parser *VAR_2 = &VAR_1->parser;

 if (!VAR_2->enabled)
  return;

 VAR_0->sk_data_ready = VAR_2->saved_data_ready;
 VAR_2->saved_data_ready = ((void*)0);
 FUNC_0(&VAR_2->strp);
 VAR_2->enabled = 0;
}
