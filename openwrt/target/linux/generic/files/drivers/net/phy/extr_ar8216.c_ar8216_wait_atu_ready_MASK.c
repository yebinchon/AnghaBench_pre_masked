
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct ar8xxx_priv *VAR_1, u16 VAR_2, u16 VAR_3)
{
 int VAR_4 = 20;

 while (FUNC_0(VAR_1, VAR_2, VAR_3) & VAR_0 && --VAR_4) {
  FUNC_3(10);
  FUNC_1();
 }

 if (!VAR_4)
  FUNC_2("ar8216: timeout waiting for atu to become ready\n");
}
