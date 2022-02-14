
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adm6996_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct adm6996_priv*,int ) ;
 int FUNC_2 (struct adm6996_priv*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct adm6996_priv *VAR_4)
{
 u16 VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  FUNC_2(VAR_4, FUNC_0(VAR_6), 0);
 }

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 VAR_5 &= ~(VAR_3);
 VAR_5 &= ~(VAR_0);
 FUNC_2(VAR_4, VAR_2, VAR_5);
}
