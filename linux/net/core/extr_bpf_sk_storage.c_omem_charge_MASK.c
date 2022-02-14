
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_omem_alloc; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned int,int *) ;
 unsigned int FUNC_1 (int *) ;
 unsigned int VAR_1 ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2, unsigned int VAR_3)
{

 if (VAR_3 <= VAR_1 &&
     FUNC_1(&VAR_2->sk_omem_alloc) + VAR_3 < VAR_1) {
  FUNC_0(VAR_3, &VAR_2->sk_omem_alloc);
  return 0;
 }

 return -VAR_0;
}
