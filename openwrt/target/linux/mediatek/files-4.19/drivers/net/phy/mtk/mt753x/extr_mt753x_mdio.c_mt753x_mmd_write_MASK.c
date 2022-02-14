
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gsw_mt753x {int phy_base; int mii_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gsw_mt753x*,int,int,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct gsw_mt753x *VAR_5, int VAR_6, int VAR_7, u16 VAR_8,
        u16 VAR_9)
{
 if (VAR_6 < VAR_3)
  VAR_6 = (VAR_5->phy_base + VAR_6) & VAR_4;

 FUNC_1(&VAR_5->mii_lock);
 FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_0, VAR_2);
 FUNC_0(VAR_5, VAR_6, VAR_7, VAR_9, VAR_1, VAR_2);
 FUNC_2(&VAR_5->mii_lock);
}
