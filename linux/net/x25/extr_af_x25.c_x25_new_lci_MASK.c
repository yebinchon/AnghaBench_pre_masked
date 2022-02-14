
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct x25_neigh {int dummy; } ;
struct sock {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (struct sock*) ;
 struct sock* FUNC_2 (unsigned int,struct x25_neigh*) ;

__attribute__((used)) static unsigned int FUNC_3(struct x25_neigh *VAR_0)
{
 unsigned int VAR_1 = 1;
 struct sock *VAR_2;

 while ((VAR_2 = FUNC_2(VAR_1, VAR_0)) != ((void*)0)) {
  FUNC_1(VAR_2);
  if (++VAR_1 == 4096) {
   VAR_1 = 0;
   break;
  }
  FUNC_0();
 }

 return VAR_1;
}
