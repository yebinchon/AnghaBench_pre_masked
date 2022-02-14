
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct asoc_simple_data {int convert_channels; int convert_rate; } ;
typedef int prop ;


 int FUNC_0 (struct device_node*,char*,int *) ;
 int FUNC_1 (char*,int,char*,char*,char*) ;

void FUNC_2(struct device *VAR_0,
          struct device_node *VAR_1,
          char *VAR_2,
          struct asoc_simple_data *VAR_3)
{
 char VAR_4[128];

 if (!VAR_2)
  VAR_2 = "";


 FUNC_1(VAR_4, sizeof(VAR_4), "%s%s", VAR_2, "convert-rate");
 FUNC_0(VAR_1, VAR_4, &VAR_3->convert_rate);


 FUNC_1(VAR_4, sizeof(VAR_4), "%s%s", VAR_2, "convert-channels");
 FUNC_0(VAR_1, VAR_4, &VAR_3->convert_channels);
}
