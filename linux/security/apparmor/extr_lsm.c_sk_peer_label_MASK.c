
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct aa_sk_ctx {struct aa_label* peer; } ;
struct aa_label {int dummy; } ;


 int VAR_0 ;
 struct aa_label* FUNC_0 (int ) ;
 struct aa_sk_ctx* FUNC_1 (struct sock*) ;

__attribute__((used)) static struct aa_label *FUNC_2(struct sock *VAR_1)
{
 struct aa_sk_ctx *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->peer)
  return VAR_2->peer;

 return FUNC_0(-VAR_0);
}
