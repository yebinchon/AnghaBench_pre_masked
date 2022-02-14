
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct net {int user_ns; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net* FUNC_0 (int ) ;
 struct net* FUNC_1 (int ,int) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct sock*,int ,int ) ;
 int FUNC_4 (struct sock*) ;

struct net *FUNC_5(struct sock *VAR_3, int VAR_4)
{
 struct net *VAR_5;

 VAR_5 = FUNC_1(FUNC_4(VAR_3), VAR_4);
 if (!VAR_5)
  return FUNC_0(-VAR_2);




 if (!FUNC_3(VAR_3, VAR_5->user_ns, VAR_0)) {
  FUNC_2(VAR_5);
  return FUNC_0(-VAR_1);
 }
 return VAR_5;
}
