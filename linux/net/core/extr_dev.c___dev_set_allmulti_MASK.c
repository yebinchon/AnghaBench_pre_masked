
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {unsigned int flags; unsigned int gflags; scalar_t__ allmulti; int name; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_1 (struct net_device*,unsigned int,unsigned int) ;
 int FUNC_2 (struct net_device*,unsigned int) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_2, int VAR_3, bool VAR_4)
{
 unsigned int VAR_5 = VAR_2->flags, VAR_6 = VAR_2->gflags;

 FUNC_0();

 VAR_2->flags |= VAR_1;
 VAR_2->allmulti += VAR_3;
 if (VAR_2->allmulti == 0) {




  if (VAR_3 < 0)
   VAR_2->flags &= ~VAR_1;
  else {
   VAR_2->allmulti -= VAR_3;
   FUNC_4("%s: allmulti touches roof, set allmulti failed. allmulti feature of device might be broken.\n",
    VAR_2->name);
   return -VAR_0;
  }
 }
 if (VAR_2->flags ^ VAR_5) {
  FUNC_2(VAR_2, VAR_1);
  FUNC_3(VAR_2);
  if (VAR_4)
   FUNC_1(VAR_2, VAR_5,
        VAR_2->gflags ^ VAR_6);
 }
 return 0;
}
