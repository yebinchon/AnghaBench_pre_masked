
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct j1939_priv {int lock; } ;
struct j1939_ecu {int addr; } ;
typedef int name_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct j1939_ecu* FUNC_0 (struct j1939_priv*,int ) ;
 scalar_t__ FUNC_1 (struct j1939_ecu*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u8 FUNC_4(struct j1939_priv *VAR_2, name_t VAR_3)
{
 struct j1939_ecu *VAR_4;
 int VAR_5 = VAR_0;

 if (!VAR_3)
  return VAR_1;

 FUNC_2(&VAR_2->lock);
 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (VAR_4 && FUNC_1(VAR_4))

  VAR_5 = VAR_4->addr;

 FUNC_3(&VAR_2->lock);

 return VAR_5;
}
