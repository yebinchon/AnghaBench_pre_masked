
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {scalar_t__ vlan; } ;


 int VAR_0 ;
 void FUNC_0 (struct ar8xxx_priv*,int,int ,int) ;
 scalar_t__ FUNC_1 (struct ar8xxx_priv*) ;

__attribute__((used)) static void
FUNC_2(struct ar8xxx_priv *VAR_1, int VAR_2, u32 VAR_3)
{
 return FUNC_0(VAR_1, VAR_2, VAR_3,
       FUNC_1(VAR_1) && VAR_1->vlan &&
       VAR_2 == VAR_0);
}
