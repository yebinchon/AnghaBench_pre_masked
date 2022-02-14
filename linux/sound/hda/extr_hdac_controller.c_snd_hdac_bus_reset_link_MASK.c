
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_bus {scalar_t__ codec_mask; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct hdac_bus*) ;
 int FUNC_2 (struct hdac_bus*) ;
 int FUNC_3 (struct hdac_bus*,int ) ;
 scalar_t__ FUNC_4 (struct hdac_bus*,int ) ;
 int FUNC_5 (struct hdac_bus*,int ,int ) ;
 int FUNC_6 (int,int) ;

int FUNC_7(struct hdac_bus *VAR_4, bool VAR_5)
{
 if (!VAR_5)
  goto skip_reset;


 FUNC_5(VAR_4, VAR_2, VAR_3);


 FUNC_1(VAR_4);




 FUNC_6(500, 1000);


 FUNC_2(VAR_4);


 FUNC_6(1000, 1200);

 skip_reset:

 if (!FUNC_3(VAR_4, VAR_1)) {
  FUNC_0(VAR_4->dev, "controller not ready!\n");
  return -VAR_0;
 }


 if (!VAR_4->codec_mask) {
  VAR_4->codec_mask = FUNC_4(VAR_4, VAR_2);
  FUNC_0(VAR_4->dev, "codec_mask = 0x%lx\n", VAR_4->codec_mask);
 }

 return 0;
}
