
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct TYPE_8__ {TYPE_3__* codecs; TYPE_2__* platforms; TYPE_1__* cpus; } ;
struct TYPE_7__ {int * name; struct device_node* of_node; } ;
struct TYPE_6__ {int * name; struct device_node* of_node; } ;
struct TYPE_5__ {int * dai_name; struct device_node* of_node; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_1 () ;
 struct device_node* FUNC_2 (struct device_node*,char*,int) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_3,
      struct device_node *VAR_4)
{
 struct device_node *VAR_5, *VAR_6[2];
 int VAR_7;

 VAR_6[0] = FUNC_2(VAR_4, "stericsson,cpu-dai", 0);
 VAR_6[1] = FUNC_2(VAR_4, "stericsson,cpu-dai", 1);
 VAR_5 = FUNC_2(VAR_4, "stericsson,audio-codec", 0);

 if (!(VAR_6[0] && VAR_6[1] && VAR_5)) {
  FUNC_0(&VAR_3->dev, "Phandle missing or invalid\n");
  FUNC_1();
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  VAR_2[VAR_7].cpus->of_node = VAR_6[VAR_7];
  VAR_2[VAR_7].cpus->dai_name = ((void*)0);
  VAR_2[VAR_7].platforms->of_node = VAR_6[VAR_7];
  VAR_2[VAR_7].platforms->name = ((void*)0);
  VAR_2[VAR_7].codecs->of_node = VAR_5;
  VAR_2[VAR_7].codecs->name = ((void*)0);
 }

 FUNC_3(&VAR_1, "stericsson,card-name");

 return 0;
}
