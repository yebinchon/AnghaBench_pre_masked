
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_omem_alloc; } ;
typedef int gfp_t ;


 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,int *) ;
 void* FUNC_3 (int,int ) ;
 unsigned int VAR_0 ;

void *FUNC_4(struct sock *VAR_1, int VAR_2, gfp_t VAR_3)
{
 if ((unsigned int)VAR_2 <= VAR_0 &&
     FUNC_1(&VAR_1->sk_omem_alloc) + VAR_2 < VAR_0) {
  void *VAR_4;



  FUNC_0(VAR_2, &VAR_1->sk_omem_alloc);
  VAR_4 = FUNC_3(VAR_2, VAR_3);
  if (VAR_4)
   return VAR_4;
  FUNC_2(VAR_2, &VAR_1->sk_omem_alloc);
 }
 return ((void*)0);
}
