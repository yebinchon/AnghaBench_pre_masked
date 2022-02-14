
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct net {int dummy; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct net*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct net*) ;
 int FUNC_3 (struct net*,int *) ;

int FUNC_4(struct net *VAR_0, u8 *VAR_1, u32 VAR_2)
{
 if (FUNC_2(VAR_0)) {
  FUNC_0("Cannot configure node identity twice\n");
  return -1;
 }
 FUNC_0("Started in network mode\n");

 if (VAR_1)
  FUNC_3(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_0, VAR_2);
 return 0;
}
