
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet6_dev {int* rndid; } ;


 int FUNC_0 (int*,int) ;

__attribute__((used)) static void FUNC_1(struct inet6_dev *VAR_0)
{
regen:
 FUNC_0(VAR_0->rndid, sizeof(VAR_0->rndid));
 VAR_0->rndid[0] &= ~0x02;
 if (VAR_0->rndid[0] == 0xfd &&
     (VAR_0->rndid[1]&VAR_0->rndid[2]&VAR_0->rndid[3]&VAR_0->rndid[4]&VAR_0->rndid[5]&VAR_0->rndid[6]) == 0xff &&
     (VAR_0->rndid[7]&0x80))
  goto regen;
 if ((VAR_0->rndid[0]|VAR_0->rndid[1]) == 0) {
  if (VAR_0->rndid[2] == 0x5e && VAR_0->rndid[3] == 0xfe)
   goto regen;
  if ((VAR_0->rndid[2]|VAR_0->rndid[3]|VAR_0->rndid[4]|VAR_0->rndid[5]|VAR_0->rndid[6]|VAR_0->rndid[7]) == 0x00)
   goto regen;
 }
}
