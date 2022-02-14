
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef struct firmware const firmware ;
struct echoaudio {struct firmware const** fw_cache; TYPE_2__* card; TYPE_1__* pci; } ;
typedef int name ;
struct TYPE_6__ {char* data; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int dev; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct firmware const**,char*,int *) ;
 int FUNC_3 (char*,int,char*,char*) ;

__attribute__((used)) static int FUNC_4(const struct firmware **VAR_1,
   struct echoaudio *VAR_2, const short VAR_3)
{
 int VAR_4;
 char VAR_5[30];
 FUNC_0(VAR_2->card->dev,
  "firmware requested: %s\n", VAR_0[VAR_3].data);
 FUNC_3(VAR_5, sizeof(VAR_5), "ea/%s", VAR_0[VAR_3].data);
 VAR_4 = FUNC_2(VAR_1, VAR_5, &VAR_2->pci->dev);
 if (VAR_4 < 0)
  FUNC_1(VAR_2->card->dev,
   "get_firmware(): Firmware not available (%d)\n", VAR_4);




 return VAR_4;
}
