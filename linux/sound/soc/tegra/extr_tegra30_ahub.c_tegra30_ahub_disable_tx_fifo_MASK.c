
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum tegra30_ahub_txcif { ____Placeholder_tegra30_ahub_txcif } tegra30_ahub_txcif ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int) ;

int FUNC_4(enum tegra30_ahub_txcif VAR_5)
{
 int VAR_6 = VAR_5 - VAR_3;
 int VAR_7, VAR_8;

 FUNC_0(VAR_4->dev);

 VAR_7 = VAR_0 +
       (VAR_6 * VAR_1);
 VAR_8 = FUNC_2(VAR_7);
 VAR_8 &= ~VAR_2;
 FUNC_3(VAR_7, VAR_8);

 FUNC_1(VAR_4->dev);

 return 0;
}
