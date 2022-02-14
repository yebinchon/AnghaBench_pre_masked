
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int addr_len; int mc; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned char const*,int ,int ,int,int) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1, const unsigned char *VAR_2,
   bool VAR_3)
{
 int VAR_4;

 FUNC_2(VAR_1);
 VAR_4 = FUNC_1(&VAR_1->mc, VAR_2, VAR_1->addr_len,
          VAR_0, VAR_3, 0);
 if (!VAR_4)
  FUNC_0(VAR_1);
 FUNC_3(VAR_1);
 return VAR_4;
}
