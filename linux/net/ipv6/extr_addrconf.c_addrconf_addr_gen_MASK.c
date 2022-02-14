
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int addr_gen_mode; } ;
struct inet6_dev {int dev; TYPE_1__ cnf; } ;
struct in6_addr {int s6_addr; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (struct inet6_dev*,struct in6_addr*,int ) ;
 int FUNC_1 (struct in6_addr*,int,int ,int ,int ,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct in6_addr*,int ,int ,int ,int ) ;
 int FUNC_4 (struct inet6_dev*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct in6_addr*,int ,struct inet6_dev*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct inet6_dev *VAR_2, bool VAR_3)
{
 struct in6_addr VAR_4;


 if (FUNC_7(VAR_2->dev))
  return;

 FUNC_3(&VAR_4, FUNC_2(0xFE800000), 0, 0, 0);

 switch (VAR_2->cnf.addr_gen_mode) {
 case 129:
  FUNC_4(VAR_2);

 case 128:
  if (!FUNC_6(&VAR_4, 0, VAR_2))
   FUNC_0(VAR_2, &VAR_4,
            VAR_1);
  else if (VAR_3)
   FUNC_1(&VAR_4, 64, 0, VAR_2->dev,
           0, 0, VAR_0);
  break;
 case 131:




  if (FUNC_5(VAR_4.s6_addr + 8, VAR_2->dev) == 0)
   FUNC_0(VAR_2, &VAR_4, 0);
  else if (VAR_3)
   FUNC_1(&VAR_4, 64, 0, VAR_2->dev,
           0, 0, VAR_0);
  break;
 case 130:
 default:

  break;
 }
}
