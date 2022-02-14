
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct sock {int sk_omem_alloc; } ;
struct sk_filter {TYPE_1__* prog; } ;
struct TYPE_2__ {int len; } ;


 int FUNC_0 (scalar_t__,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_3(struct sock *VAR_1, struct sk_filter *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2->prog->len);


 if (VAR_3 <= VAR_0 &&
     FUNC_1(&VAR_1->sk_omem_alloc) + VAR_3 < VAR_0) {
  FUNC_0(VAR_3, &VAR_1->sk_omem_alloc);
  return 1;
 }
 return 0;
}
