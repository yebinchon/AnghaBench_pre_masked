
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nft_fib {int result; int flags; } ;
struct net_device {int ifindex; char* name; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (void*,char*,int ) ;

void FUNC_2(void *VAR_2, const struct nft_fib *VAR_3,
     const struct net_device *VAR_4)
{
 u32 *VAR_5 = VAR_2;
 int VAR_6;

 switch (VAR_3->result) {
 case 129:
  VAR_6 = VAR_4 ? VAR_4->ifindex : 0;
  *VAR_5 = (VAR_3->flags & VAR_1) ? !!VAR_6 : VAR_6;
  break;
 case 128:
  if (VAR_3->flags & VAR_1)
   *VAR_5 = !!VAR_4;
  else
   FUNC_1(VAR_2, VAR_4 ? VAR_4->name : "", VAR_0);
  break;
 default:
  FUNC_0(1);
  *VAR_5 = 0;
  break;
 }
}
