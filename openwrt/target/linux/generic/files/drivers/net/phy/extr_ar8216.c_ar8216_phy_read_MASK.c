
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
 int VAR_7 ;
 int FUNC_0 (struct ar8xxx_priv*,int ) ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int,int ,int) ;
 int FUNC_2 (struct ar8xxx_priv*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ar8xxx_priv *VAR_8, int VAR_9, int VAR_10)
{
 u32 VAR_11, VAR_12 = 0xffff;
 int VAR_13;

 if (VAR_9 >= VAR_6)
  return 0xffff;
 VAR_11 = (VAR_10 << VAR_5) |
     (VAR_9 << VAR_4) |
     VAR_3 |
     VAR_0 |
     VAR_1;

 FUNC_2(VAR_8, VAR_7, VAR_11);
 VAR_13 = FUNC_1(VAR_8, VAR_7,
         VAR_0, 0, 5);
 if (!VAR_13)
  VAR_12 = FUNC_0(VAR_8, VAR_7);

 return VAR_12 & VAR_2;
}
