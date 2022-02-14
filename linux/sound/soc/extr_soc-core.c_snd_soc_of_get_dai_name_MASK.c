
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_phandle_args {int np; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*,char*,char*,int ,struct of_phandle_args*) ;
 int FUNC_2 (struct of_phandle_args*,char const**) ;

int FUNC_3(struct device_node *VAR_0,
       const char **VAR_1)
{
 struct of_phandle_args VAR_2;
 int VAR_3;

 VAR_3 = FUNC_1(VAR_0, "sound-dai",
      "#sound-dai-cells", 0, &VAR_2);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_2(&VAR_2, VAR_1);

 FUNC_0(VAR_2.np);

 return VAR_3;
}
