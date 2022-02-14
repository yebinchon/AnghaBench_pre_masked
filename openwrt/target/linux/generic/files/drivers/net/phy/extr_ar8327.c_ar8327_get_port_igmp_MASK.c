
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ar8xxx_priv*,int ) ;

__attribute__((used)) static int
FUNC_4(struct ar8xxx_priv *VAR_5, int VAR_6)
{
 u32 VAR_7, VAR_8;

 VAR_7 = (FUNC_2(VAR_6) << VAR_3);
 VAR_8 = ((VAR_2 |
        VAR_0 |
        VAR_1) <<
       FUNC_0(VAR_6));

 return (FUNC_3(VAR_5, VAR_4) &
   VAR_7) == VAR_7 &&
  (FUNC_3(VAR_5, FUNC_1(VAR_6)) &
   VAR_8) == VAR_8;
}
