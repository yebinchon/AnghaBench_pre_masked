
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_route_caps; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct page*,int,size_t,int) ;
 int FUNC_1 (struct sock*,struct page*,int,size_t,int) ;
 int FUNC_2 (struct sock*) ;

int FUNC_3(struct sock *VAR_1, struct page *VAR_2, int VAR_3,
   size_t VAR_4, int VAR_5)
{
 if (!(VAR_1->sk_route_caps & VAR_0))
  return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);

 FUNC_2(VAR_1);

 return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
}
