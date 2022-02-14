
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar8xxx_priv*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int
FUNC_3(struct ar8xxx_priv *VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
  unsigned VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++) {
  u32 VAR_7;

  VAR_7 = FUNC_0(VAR_1, VAR_2);
  if ((VAR_7 & VAR_3) == VAR_4)
   return 0;

  FUNC_2(1000, 2000);
  FUNC_1();
 }

 return -VAR_0;
}
