
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; } ;
struct hdac_device {TYPE_1__ dev; int type; struct hdac_bus* bus; } ;
struct hdac_bus {int idx; int dev; } ;
typedef int name ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct hdac_device*,struct hdac_bus*,char*,int) ;
 int FUNC_2 (struct hdac_device*) ;
 int FUNC_3 (struct hdac_device*) ;
 int FUNC_4 (char*,int,char*,int,int) ;

int FUNC_5(struct hdac_bus *VAR_2, int VAR_3,
     struct hdac_device *VAR_4)
{
 char VAR_5[15];
 int VAR_6;

 VAR_4->bus = VAR_2;

 FUNC_4(VAR_5, sizeof(VAR_5), "ehdaudio%dD%d", VAR_2->idx, VAR_3);

 VAR_6 = FUNC_1(VAR_4, VAR_2, VAR_5, VAR_3);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2->dev, "device init failed for hdac device\n");
  return VAR_6;
 }
 VAR_4->type = VAR_0;
 VAR_4->dev.release = VAR_1;

 VAR_6 = FUNC_2(VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_2->dev, "failed to register hdac device\n");
  FUNC_3(VAR_4);
  return VAR_6;
 }

 return 0;
}
