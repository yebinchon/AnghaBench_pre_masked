
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;
struct aic3x_priv {int ocmv; TYPE_1__* supplies; } ;
struct TYPE_3__ {int consumer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*,char*,int,int) ;
 struct aic3x_priv* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct device_node*,char*,int*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->dev.of_node;
 struct aic3x_priv *VAR_6 = FUNC_1(VAR_4);
 u32 VAR_7;
 int VAR_8, VAR_9;

 if (VAR_5 && !FUNC_2(VAR_5, "ai3x-ocmv", &VAR_7)) {

  if (VAR_7 <= 3) {
   VAR_6->ocmv = VAR_7;
   return;
  }
 }

 VAR_8 = FUNC_3(VAR_6->supplies[1].consumer);
 VAR_9 = FUNC_3(VAR_6->supplies[2].consumer);

 if (VAR_9 > 3600000 || VAR_8 > 1950000) {
  FUNC_0(&VAR_4->dev,
    "Too high supply voltage(s) AVDD: %d, DVDD: %d\n",
    VAR_9, VAR_8);
 } else if (VAR_9 == 3600000 && VAR_8 == 1950000) {
  VAR_6->ocmv = VAR_3;
 } else if (VAR_9 > 3300000 && VAR_8 > 1800000) {
  VAR_6->ocmv = VAR_2;
 } else if (VAR_9 > 3000000 && VAR_8 > 1650000) {
  VAR_6->ocmv = VAR_1;
 } else if (VAR_9 >= 2700000 && VAR_8 >= 1525000) {
  VAR_6->ocmv = VAR_0;
 } else {
  FUNC_0(&VAR_4->dev,
    "Invalid supply voltage(s) AVDD: %d, DVDD: %d\n",
    VAR_9, VAR_8);
 }
}
