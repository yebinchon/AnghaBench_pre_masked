
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int ports; } ;
struct ar8xxx_priv {TYPE_1__ dev; } ;


 int FUNC_0 (struct ar8xxx_priv*,int,int,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u32
FUNC_2(struct ar8xxx_priv *VAR_0, int VAR_1)
{
 int VAR_2;
 u16 VAR_3;

 if (VAR_1 >= VAR_0->dev.ports)
  return 0;

 if (VAR_1 == 0 || VAR_1 == 6)
  return 0;

 VAR_2 = VAR_1 - 1;


 VAR_3 = FUNC_0(VAR_0, VAR_2, 0x7, 0x8000);

 return FUNC_1(VAR_3);
}
