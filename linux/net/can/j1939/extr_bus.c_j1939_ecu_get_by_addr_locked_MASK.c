
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct j1939_priv {int lock; } ;
struct j1939_ecu {int dummy; } ;


 int FUNC_0 (int ) ;
 struct j1939_ecu* FUNC_1 (struct j1939_priv*,int ) ;
 int FUNC_2 (struct j1939_ecu*) ;
 int FUNC_3 (int *) ;

struct j1939_ecu *FUNC_4(struct j1939_priv *VAR_0, u8 VAR_1)
{
 struct j1939_ecu *VAR_2;

 FUNC_3(&VAR_0->lock);

 if (!FUNC_0(VAR_1))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_2(VAR_2);

 return VAR_2;
}
