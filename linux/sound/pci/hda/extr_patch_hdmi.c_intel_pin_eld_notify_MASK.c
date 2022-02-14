
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hda_codec {TYPE_1__* bus; int core; int card; } ;
struct TYPE_2__ {int core; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hda_codec*,int,int) ;
 int FUNC_1 (struct hda_codec*,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(void *VAR_1, int VAR_2, int VAR_3)
{
 struct hda_codec *VAR_4 = VAR_1;
 int VAR_5;
 int VAR_6 = VAR_3;

 VAR_5 = FUNC_1(VAR_4, VAR_2);
 if (!VAR_5)
  return;



 if (FUNC_4(VAR_4->card) != VAR_0)
  return;

 if (FUNC_3(&VAR_4->core))
  return;

 FUNC_2(&VAR_4->bus->core);
 FUNC_0(VAR_4, VAR_5, VAR_6);
}
