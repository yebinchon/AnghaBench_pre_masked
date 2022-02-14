
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sock {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {int * sk; } ;


 int VAR_0 ;
 int FUNC_0 (struct net*,int *) ;
 TYPE_1__ VAR_1 ;
 struct sock* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*) ;

struct sock *FUNC_5(struct net *VAR_2, u8 VAR_3)
{
 struct sock *VAR_4;

 if (!FUNC_0(VAR_2, &VAR_0))
  return ((void*)0);

 FUNC_2();
 VAR_4 = FUNC_1(VAR_1.sk[VAR_3]);
 if (VAR_4)
  FUNC_4(VAR_4);
 FUNC_3();
 return VAR_4;
}
