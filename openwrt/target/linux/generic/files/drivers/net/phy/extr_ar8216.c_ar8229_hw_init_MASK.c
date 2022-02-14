
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ar8xxx_priv {int initialized; scalar_t__ port4_phy; TYPE_1__* pdev; } ;
struct TYPE_2__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int FUNC_2 (struct ar8xxx_priv*,int ,int ,int ,int) ;
 int FUNC_3 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(struct ar8xxx_priv *VAR_10)
{
 int VAR_11;

 if (VAR_10->initialized)
  return 0;

 FUNC_3(VAR_10, VAR_1, VAR_0);
 FUNC_2(VAR_10, VAR_1, VAR_0, 0, 1000);

 VAR_11 = FUNC_4(VAR_10->pdev->of_node);

 if (VAR_11 == VAR_8) {
  FUNC_3(VAR_10, VAR_4,
     VAR_2);
 } else if (VAR_11 == VAR_9) {
  FUNC_3(VAR_10, VAR_4,
     VAR_3);
 } else {
  FUNC_5("ar8229: unsupported mii mode\n");
  return -VAR_7;
 }

 if (VAR_10->port4_phy) {
  FUNC_3(VAR_10, VAR_5,
        VAR_6);

  FUNC_3(VAR_10, FUNC_0(5), 0);
 }

 FUNC_1(VAR_10);

 VAR_10->initialized = 1;
 return 0;
}
