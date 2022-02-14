
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (struct ar8xxx_priv*,int ,int,int ) ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct ar8xxx_priv *VAR_7, u32 VAR_8, u32 VAR_9)
{
 if (FUNC_0(VAR_7, VAR_0, VAR_4, 0))
  return;
 if ((VAR_8 & VAR_5) == VAR_6) {
  VAR_9 &= VAR_2;
  VAR_9 |= VAR_3;
  FUNC_1(VAR_7, VAR_1, VAR_9);
 }
 VAR_8 |= VAR_4;
 FUNC_1(VAR_7, VAR_0, VAR_8);
}
