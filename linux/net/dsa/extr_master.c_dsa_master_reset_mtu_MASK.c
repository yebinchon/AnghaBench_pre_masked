
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 int VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (VAR_2)
  FUNC_1(VAR_1,
      "Unable to reset MTU to exclude DSA overheads\n");
 FUNC_3();
}
