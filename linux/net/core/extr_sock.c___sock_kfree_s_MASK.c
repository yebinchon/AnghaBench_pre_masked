
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_omem_alloc; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;

__attribute__((used)) static inline void FUNC_4(struct sock *VAR_0, void *VAR_1, int VAR_2,
      const bool VAR_3)
{
 if (FUNC_0(!VAR_1))
  return;
 if (VAR_3)
  FUNC_3(VAR_1);
 else
  FUNC_2(VAR_1);
 FUNC_1(VAR_2, &VAR_0->sk_omem_alloc);
}
