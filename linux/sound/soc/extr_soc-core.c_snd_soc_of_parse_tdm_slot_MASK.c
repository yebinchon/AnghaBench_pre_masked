
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct device_node*,char*) ;
 int FUNC_1 (struct device_node*,char*,unsigned int*) ;
 int FUNC_2 (struct device_node*,char*,unsigned int*) ;

int FUNC_3(struct device_node *VAR_0,
         unsigned int *VAR_1,
         unsigned int *VAR_2,
         unsigned int *VAR_3,
         unsigned int *VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (VAR_1)
  FUNC_2(VAR_0, "dai-tdm-slot-tx-mask", VAR_1);
 if (VAR_2)
  FUNC_2(VAR_0, "dai-tdm-slot-rx-mask", VAR_2);

 if (FUNC_0(VAR_0, "dai-tdm-slot-num")) {
  VAR_6 = FUNC_1(VAR_0, "dai-tdm-slot-num", &VAR_5);
  if (VAR_6)
   return VAR_6;

  if (VAR_3)
   *VAR_3 = VAR_5;
 }

 if (FUNC_0(VAR_0, "dai-tdm-slot-width")) {
  VAR_6 = FUNC_1(VAR_0, "dai-tdm-slot-width", &VAR_5);
  if (VAR_6)
   return VAR_6;

  if (VAR_4)
   *VAR_4 = VAR_5;
 }

 return 0;
}
