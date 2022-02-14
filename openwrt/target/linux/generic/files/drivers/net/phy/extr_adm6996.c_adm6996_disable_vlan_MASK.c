
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
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct adm6996_priv*,int ) ;
 int FUNC_4 (struct adm6996_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_5(struct adm6996_priv *VAR_14)
{
 u16 VAR_15;
 int VAR_16;

 for (VAR_16 = 0; VAR_16 < VAR_3; VAR_16++) {
  VAR_15 = VAR_12;
  FUNC_4(VAR_14, FUNC_1(VAR_16), VAR_15);
  VAR_15 = VAR_13 | FUNC_2(1);
  FUNC_4(VAR_14, FUNC_0(VAR_16), VAR_15);
 }

 VAR_15 = FUNC_3(VAR_14, VAR_5);
 VAR_15 |= VAR_4;
 FUNC_4(VAR_14, VAR_5, VAR_15);
 VAR_15 = FUNC_3(VAR_14, VAR_0);
 VAR_15 |= VAR_1;
 FUNC_4(VAR_14, VAR_0, VAR_15);
 VAR_15 = FUNC_3(VAR_14, VAR_10);
 VAR_15 &= ~(VAR_11);
 FUNC_4(VAR_14, VAR_10, VAR_15);
 VAR_15 = FUNC_3(VAR_14, VAR_7);
 VAR_15 &= ~(VAR_2);
 VAR_15 |= VAR_6;
 FUNC_4(VAR_14, VAR_7, VAR_15);
 VAR_15 = FUNC_3(VAR_14, VAR_8);
 VAR_15 &= ~(VAR_9);
 FUNC_4(VAR_14, VAR_8, VAR_15);
}
