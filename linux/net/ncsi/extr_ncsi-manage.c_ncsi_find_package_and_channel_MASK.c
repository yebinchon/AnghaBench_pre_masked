
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ncsi_package {int dummy; } ;
struct ncsi_dev_priv {int dummy; } ;
struct ncsi_channel {int dummy; } ;


 int FUNC_0 (unsigned char) ;
 int FUNC_1 (unsigned char) ;
 struct ncsi_channel* FUNC_2 (struct ncsi_package*,int ) ;
 struct ncsi_package* FUNC_3 (struct ncsi_dev_priv*,int ) ;

void FUNC_4(struct ncsi_dev_priv *VAR_0,
       unsigned char VAR_1,
       struct ncsi_package **VAR_2,
       struct ncsi_channel **VAR_3)
{
 struct ncsi_package *VAR_4;
 struct ncsi_channel *VAR_5;

 VAR_4 = FUNC_3(VAR_0, FUNC_1(VAR_1));
 VAR_5 = VAR_4 ? FUNC_2(VAR_4, FUNC_0(VAR_1)) : ((void*)0);

 if (VAR_2)
  *VAR_2 = VAR_4;
 if (VAR_3)
  *VAR_3 = VAR_5;
}
