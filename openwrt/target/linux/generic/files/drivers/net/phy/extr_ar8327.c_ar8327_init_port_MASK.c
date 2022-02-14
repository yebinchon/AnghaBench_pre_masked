
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ar8xxx_priv {struct ar8327_data* chip_data; } ;
struct ar8327_data {int port0_status; int port6_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct ar8xxx_priv*,int ,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct ar8xxx_priv *VAR_8, int VAR_9)
{
 struct ar8327_data *VAR_10 = VAR_8->chip_data;
 u32 VAR_11;

 if (VAR_9 == VAR_0)
  VAR_11 = VAR_10->port0_status;
 else if (VAR_9 == 6)
  VAR_11 = VAR_10->port6_status;
 else
  VAR_11 = VAR_3;

 if (VAR_9 != VAR_0 && VAR_9 != 6) {


  FUNC_5(VAR_8, FUNC_2(VAR_9), 0);
  FUNC_6(100);
  VAR_11 |= VAR_2;
  FUNC_5(VAR_8, FUNC_2(VAR_9), VAR_11);
 } else {
  FUNC_5(VAR_8, FUNC_2(VAR_9), VAR_11);
 }

 FUNC_5(VAR_8, FUNC_0(VAR_9), 0);

 FUNC_5(VAR_8, FUNC_3(VAR_9), 0);

 VAR_11 = VAR_7 << VAR_6;
 FUNC_5(VAR_8, FUNC_4(VAR_9), VAR_11);

 VAR_11 = VAR_4;
 VAR_11 |= VAR_1 << VAR_5;
 FUNC_5(VAR_8, FUNC_1(VAR_9), VAR_11);
}
