
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct pnpipehdr {scalar_t__ error_code; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sock*,int ,int ,int *,int ,int ) ;
 struct pnpipehdr* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_4, struct sk_buff *VAR_5)
{
 struct pnpipehdr *VAR_6 = FUNC_1(VAR_5);

 if (VAR_6->error_code != VAR_3)
  return -VAR_0;

 return FUNC_0(VAR_4, VAR_2, 0 ,
  ((void*)0), 0, VAR_1);

}
