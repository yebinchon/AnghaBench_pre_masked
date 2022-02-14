
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct adau1977_platform_data {unsigned int micbias; } ;
struct adau1977 {int regmap; TYPE_1__* dev; } ;
struct TYPE_3__ {struct adau1977_platform_data* platform_data; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*,unsigned int*) ;
 int FUNC_2 (int ,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_3(struct adau1977 *VAR_6)
{
 struct adau1977_platform_data *VAR_7 = VAR_6->dev->platform_data;
 unsigned int VAR_8;

 if (VAR_7)
  VAR_8 = VAR_7->micbias;
 else if (FUNC_1(VAR_6->dev, "adi,micbias",
       &VAR_8))
  VAR_8 = VAR_0;

 if (VAR_8 > VAR_1) {
  FUNC_0(VAR_6->dev, "Invalid value for 'adi,micbias'\n");
  return -VAR_5;
 }

 return FUNC_2(VAR_6->regmap, VAR_4,
  VAR_2,
  VAR_8 << VAR_3);
}
