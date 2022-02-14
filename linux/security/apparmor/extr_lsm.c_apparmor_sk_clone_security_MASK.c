
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef struct sock const sock ;
struct aa_sk_ctx {void* peer; void* label; } ;


 struct aa_sk_ctx* FUNC_0 (struct sock const*) ;
 void* FUNC_1 (void*) ;

__attribute__((used)) static void FUNC_2(const struct sock *VAR_0,
           struct sock *VAR_1)
{
 struct aa_sk_ctx *VAR_2 = FUNC_0(VAR_0);
 struct aa_sk_ctx *VAR_3 = FUNC_0(VAR_1);

 VAR_3->label = FUNC_1(VAR_2->label);
 VAR_3->peer = FUNC_1(VAR_2->peer);
}
