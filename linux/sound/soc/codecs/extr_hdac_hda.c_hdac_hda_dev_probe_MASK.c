
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hdac_hda_priv {int dummy; } ;
struct hdac_ext_link {int dummy; } ;
struct hdac_device {int bus; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct hdac_hda_priv*) ;
 int FUNC_4 (int *,int *,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct hdac_hda_priv* FUNC_5 (struct hdac_device*) ;
 struct hdac_ext_link* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct hdac_ext_link*) ;
 int FUNC_8 (int ,struct hdac_ext_link*) ;

__attribute__((used)) static int FUNC_9(struct hdac_device *VAR_4)
{
 struct hdac_ext_link *VAR_5;
 struct hdac_hda_priv *VAR_6;
 int VAR_7;


 VAR_5 = FUNC_6(VAR_4->bus, FUNC_2(&VAR_4->dev));
 if (!VAR_5) {
  FUNC_1(&VAR_4->dev, "hdac link not found\n");
  return -VAR_0;
 }
 FUNC_7(VAR_4->bus, VAR_5);

 VAR_6 = FUNC_5(VAR_4);
 if (!VAR_6)
  return -VAR_1;


 VAR_7 = FUNC_4(&VAR_4->dev,
      &VAR_2, VAR_3,
      FUNC_0(VAR_3));
 if (VAR_7 < 0) {
  FUNC_1(&VAR_4->dev, "failed to register HDA codec %d\n", VAR_7);
  return VAR_7;
 }

 FUNC_3(&VAR_4->dev, VAR_6);
 FUNC_8(VAR_4->bus, VAR_5);

 return VAR_7;
}
