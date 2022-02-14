
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct flowi {int flowi_oif; int flowi_iif; int flowi_flags; } ;


 int VAR_0 ;
 struct net_device* FUNC_0 (struct net*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct net *VAR_1, struct flowi *VAR_2)
{
 struct net_device *VAR_3;
 int VAR_4;

 FUNC_2();

 if (VAR_2->flowi_oif) {
  VAR_3 = FUNC_0(VAR_1, VAR_2->flowi_oif);
  if (VAR_3) {
   VAR_4 = FUNC_1(VAR_3);
   if (VAR_4) {
    VAR_2->flowi_oif = VAR_4;
    VAR_2->flowi_flags |= VAR_0;
    goto out;
   }
  }
 }

 if (VAR_2->flowi_iif) {
  VAR_3 = FUNC_0(VAR_1, VAR_2->flowi_iif);
  if (VAR_3) {
   VAR_4 = FUNC_1(VAR_3);
   if (VAR_4) {
    VAR_2->flowi_iif = VAR_4;
    VAR_2->flowi_flags |= VAR_0;
   }
  }
 }

out:
 FUNC_3();
}
