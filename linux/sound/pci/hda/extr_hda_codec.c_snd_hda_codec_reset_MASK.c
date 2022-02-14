
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hda_codec {int core; struct hda_bus* bus; } ;
struct hda_bus {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct hda_bus*) ;
 int FUNC_1 (struct hda_bus*) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct hda_codec *VAR_1)
{
 struct hda_bus *VAR_2 = VAR_1->bus;

 if (FUNC_0(VAR_2) < 0)
  return -VAR_0;


 FUNC_2(&VAR_1->core);


 FUNC_1(VAR_2);
 return 0;
}
