
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct switch_dev {int dummy; } ;
struct rtl_priv {struct mii_bus* bus; } ;
struct mii_bus {int (* read ) (struct mii_bus*,unsigned int,unsigned int) ;} ;


 int FUNC_0 (struct rtl_priv*,unsigned int) ;
 int FUNC_1 (struct mii_bus*,unsigned int,unsigned int) ;
 struct rtl_priv* FUNC_2 (struct switch_dev*) ;

__attribute__((used)) static inline int
FUNC_3(struct switch_dev *VAR_0, unsigned int VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{
 struct rtl_priv *VAR_4 = FUNC_2(VAR_0);
 struct mii_bus *VAR_5 = VAR_4->bus;

 FUNC_0(VAR_4, VAR_1);
 return VAR_5->read(VAR_5, VAR_2, VAR_3);
}
