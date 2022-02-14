
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct device_node {int dummy; } ;
struct clk {int dummy; } ;


 int FUNC_0 (unsigned long*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 unsigned long* VAR_2 ;
 unsigned long* VAR_3 ;
 unsigned long* VAR_4 ;
 unsigned long FUNC_2 (struct clk*) ;
 int FUNC_3 (struct clk*) ;
 struct clk* FUNC_4 (struct device_node*,int ) ;
 scalar_t__ FUNC_5 (struct device_node*,char*) ;
 scalar_t__ FUNC_6 (struct device_node*,char*) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,unsigned long*) ;

__attribute__((used)) static int FUNC_8(struct device_node *VAR_5, u32 *VAR_6)
{
 struct clk *VAR_7 = FUNC_4(VAR_5, 0);
 unsigned long VAR_8;
 u32 VAR_9;
 const u32 *VAR_10;
 int VAR_11, VAR_12;

 if (FUNC_1(VAR_7))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_7);
 FUNC_3(VAR_7);

 if(FUNC_7(VAR_5, "qca,mdio-max-frequency", &VAR_9)) {
  if (FUNC_6(VAR_5, "builtin-switch"))
   VAR_9 = 5000000;
  else
   VAR_9 = 2000000;
 }

 if (FUNC_5(VAR_5, "qca,ar9330-mdio") ||
  FUNC_5(VAR_5, "qca,ar9340-mdio")) {
  VAR_10 = VAR_4;
  VAR_11 = FUNC_0(VAR_4);
 } else if (FUNC_5(VAR_5, "qca,ar7240-mdio")) {
  VAR_10 = VAR_3;
  VAR_11 = FUNC_0(VAR_3);
 } else {
  VAR_10 = VAR_2;
  VAR_11 = FUNC_0(VAR_2);
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  unsigned long VAR_13;

  VAR_13 = VAR_8 / VAR_10[VAR_12];
  if (VAR_13 <= VAR_9) {
   *VAR_6 = VAR_12;
   return 0;
  }
 }

 return -VAR_1;
}
