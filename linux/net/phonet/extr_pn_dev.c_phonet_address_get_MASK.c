
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct phonet_device {int addrs; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct phonet_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int) ;
 struct net_device* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int,int ) ;

u8 FUNC_10(struct net_device *VAR_1, u8 VAR_2)
{
 struct phonet_device *VAR_3;
 u8 VAR_4;

 FUNC_7();
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3) {
  FUNC_0(FUNC_2(VAR_3->addrs, 64));


  if (FUNC_9(VAR_2 >> 2, VAR_3->addrs))
   VAR_4 = VAR_2;
  else
   VAR_4 = FUNC_5(VAR_3->addrs, 64) << 2;
 } else
  VAR_4 = VAR_0;
 FUNC_8();

 if (VAR_4 == VAR_0) {

  struct net_device *VAR_5;

  VAR_5 = FUNC_6(FUNC_3(VAR_1));
  if (VAR_5) {
   if (VAR_5 != VAR_1)
    VAR_4 = FUNC_10(VAR_5, VAR_2);
   FUNC_4(VAR_5);
  }
 }
 return VAR_4;
}
