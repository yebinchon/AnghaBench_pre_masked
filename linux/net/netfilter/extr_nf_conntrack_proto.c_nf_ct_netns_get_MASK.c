
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net {int dummy; } ;




 int FUNC_0 (struct net*,int const) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*,int const) ;

int FUNC_3(struct net *VAR_0, u8 VAR_1)
{
 int VAR_2;

 switch (VAR_1) {
 case 128:
  VAR_2 = FUNC_1(VAR_0);
  break;
 case 129:
  VAR_2 = FUNC_0(VAR_0, 129);
  if (VAR_2 < 0)
   return VAR_2;

  VAR_2 = FUNC_1(VAR_0);
  if (VAR_2 < 0) {
   FUNC_2(VAR_0, 129);
   return VAR_2;
  }
  break;
 default:
  VAR_2 = FUNC_0(VAR_0, VAR_1);
  break;
 }
 return VAR_2;
}
