
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {struct ar8327_data* chip_data; } ;
struct ar8327_data {int* eee; } ;


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
 int VAR_12 ;
 int FUNC_0 (struct ar8xxx_priv*,int ,int ) ;
 int FUNC_1 (struct ar8xxx_priv*,int ,int ,int) ;
 int FUNC_2 (struct ar8xxx_priv*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct ar8xxx_priv *VAR_13)
{
 struct ar8327_data *VAR_14 = VAR_13->chip_data;
 u32 VAR_15;
 int VAR_16;


 VAR_15 = VAR_0 |
     VAR_1;
 FUNC_2(VAR_13, VAR_8, VAR_15);


 VAR_15 = (VAR_7 << VAR_4) |
     (VAR_7 << VAR_3) |
     (VAR_7 << VAR_2);
 FUNC_2(VAR_13, VAR_9, VAR_15);


 FUNC_1(VAR_13, VAR_10,
     VAR_5, 9018 + 8 + 2);


 FUNC_0(VAR_13, VAR_11,
         VAR_6);


 for (VAR_16 = 0; VAR_16 < VAR_12; VAR_16++)
  VAR_14->eee[VAR_16] = 0;
}
