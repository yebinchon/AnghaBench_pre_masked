
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct rtl_priv {unsigned int page; scalar_t__ fixup; struct mii_bus* bus; } ;
struct mii_bus {int (* read ) (struct mii_bus*,int ,int ) ;int (* write ) (struct mii_bus*,int ,int ,int) ;} ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct mii_bus*,int ,int ) ;
 int FUNC_2 (struct mii_bus*,int ,int ,int) ;

__attribute__((used)) static inline void
FUNC_3(struct rtl_priv *VAR_4, unsigned int VAR_5)
{
 struct mii_bus *VAR_6 = VAR_4->bus;
 u16 VAR_7;

 if (VAR_4->fixup)
  return;

 if (VAR_4->page == VAR_5)
  return;

 FUNC_0(VAR_5 > VAR_0);
 VAR_7 = VAR_6->read(VAR_6, 0, VAR_1);
 VAR_7 &= ~(VAR_3 | VAR_2);
 if (VAR_5 & (1 << 0))
  VAR_7 |= VAR_3;
 if (!(VAR_5 & (1 << 1)))
  VAR_7 |= VAR_2;
 VAR_6->write(VAR_6, 0, VAR_1, VAR_7);
}
