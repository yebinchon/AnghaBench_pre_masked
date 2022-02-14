
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int groups; int release; int * bus; int parent; } ;
struct hdac_device {unsigned int addr; int vendor_id; int subsystem_id; struct device dev; int chip_name; void* power_caps; scalar_t__ mfg; scalar_t__ afg; void* revision_id; int in_pm; int widget_lock; int type; struct hdac_bus* bus; } ;
struct hdac_bus {int dev; } ;
typedef scalar_t__ hda_nid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ) ;
 int VAR_10 ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct device*,char*,char const*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct hdac_device*) ;
 int VAR_11 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct hdac_device*) ;
 int VAR_12 ;
 int FUNC_12 (struct hdac_bus*,struct hdac_device*) ;
 int FUNC_13 (struct hdac_device*,scalar_t__,int ,int ,int*) ;
 void* FUNC_14 (struct hdac_device*,scalar_t__,int ) ;
 int FUNC_15 (struct hdac_device*) ;

int FUNC_16(struct hdac_device *VAR_13, struct hdac_bus *VAR_14,
    const char *VAR_15, unsigned int VAR_16)
{
 struct device *VAR_17;
 hda_nid_t VAR_18;
 int VAR_19;

 VAR_17 = &VAR_13->dev;
 FUNC_4(VAR_17);
 VAR_17->parent = VAR_14->dev;
 VAR_17->bus = &VAR_12;
 VAR_17->release = VAR_10;
 VAR_17->groups = VAR_11;
 FUNC_2(VAR_17, "%s", VAR_15);
 FUNC_3(VAR_17);

 VAR_13->bus = VAR_14;
 VAR_13->addr = VAR_16;
 VAR_13->type = VAR_9;
 FUNC_7(&VAR_13->widget_lock);
 FUNC_9(&VAR_13->dev);
 FUNC_8(&VAR_13->dev);
 FUNC_0(&VAR_13->in_pm, 0);

 VAR_19 = FUNC_12(VAR_14, VAR_13);
 if (VAR_19 < 0)
  goto error;


 VAR_13->vendor_id = FUNC_14(VAR_13, VAR_0,
           VAR_4);
 if (VAR_13->vendor_id == -1) {



  VAR_13->vendor_id = FUNC_14(VAR_13, VAR_0,
            VAR_4);
 }

 VAR_13->subsystem_id = FUNC_14(VAR_13, VAR_0,
       VAR_3);
 VAR_13->revision_id = FUNC_14(VAR_13, VAR_0,
      VAR_2);

 FUNC_11(VAR_13);
 if (!VAR_13->afg && !VAR_13->mfg) {
  FUNC_1(VAR_17, "no AFG or MFG node found\n");
  VAR_19 = -VAR_6;
  goto error;
 }

 VAR_18 = VAR_13->afg ? VAR_13->afg : VAR_13->mfg;

 VAR_19 = FUNC_15(VAR_13);
 if (VAR_19 < 0)
  goto error;

 VAR_13->power_caps = FUNC_14(VAR_13, VAR_18, VAR_1);

 if (VAR_13->subsystem_id == -1 || VAR_13->subsystem_id == 0)
  FUNC_13(VAR_13, VAR_18, VAR_5, 0,
         &VAR_13->subsystem_id);

 VAR_19 = FUNC_5(VAR_13);
 if (VAR_19 < 0)
  goto error;

 VAR_13->chip_name = FUNC_6(VAR_8, "ID %x",
         VAR_13->vendor_id & 0xffff);
 if (!VAR_13->chip_name) {
  VAR_19 = -VAR_7;
  goto error;
 }

 return 0;

 error:
 FUNC_10(&VAR_13->dev);
 return VAR_19;
}
