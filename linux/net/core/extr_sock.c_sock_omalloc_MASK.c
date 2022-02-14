
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_omem_alloc; } ;
struct sk_buff {int destructor; struct sock* sk; int truesize; } ;
typedef int gfp_t ;


 scalar_t__ FUNC_0 (unsigned long) ;
 struct sk_buff* FUNC_1 (unsigned long,int ) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

struct sk_buff *FUNC_4(struct sock *VAR_2, unsigned long VAR_3,
        gfp_t VAR_4)
{
 struct sk_buff *VAR_5;


 if (FUNC_3(&VAR_2->sk_omem_alloc) + FUNC_0(VAR_3) >
     VAR_1)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_3, VAR_4);
 if (!VAR_5)
  return ((void*)0);

 FUNC_2(VAR_5->truesize, &VAR_2->sk_omem_alloc);
 VAR_5->sk = VAR_2;
 VAR_5->destructor = VAR_0;
 return VAR_5;
}
