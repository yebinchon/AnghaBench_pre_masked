
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_tplg_vendor_value_elem {int token; int value; } ;
struct snd_soc_tplg_vendor_array {struct snd_soc_tplg_vendor_value_elem* value; } ;
struct device {int dummy; } ;


 int VAR_0 ;



 int FUNC_0 (struct device*,char*,int) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_1,
  struct snd_soc_tplg_vendor_array *VAR_2)
{
 struct snd_soc_tplg_vendor_value_elem *VAR_3;

 VAR_3 = VAR_2->value;

 switch (VAR_3->token) {
 case 128:
 case 129:
 case 130:
  return VAR_3->value;

 default:
  FUNC_0(VAR_1, "Invalid descriptor token %d\n", VAR_3->token);
  break;
 }

 return -VAR_0;
}
