
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct aa_ns {int rawdata_list; int revision; int lock; } ;
struct aa_loaddata {int list; int ns; int size; struct dentry** dents; int name; } ;
struct TYPE_2__ {int i_size; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (struct aa_ns*) ;
 struct dentry* FUNC_4 (int ,int ) ;
 struct dentry* FUNC_5 (char*,int,struct dentry*,struct aa_loaddata*,int *) ;
 TYPE_1__* FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ,char*,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct aa_ns*) ;
 int VAR_9 ;
 int FUNC_11 (struct aa_loaddata*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

int FUNC_12(struct aa_ns *VAR_13, struct aa_loaddata *VAR_14)
{
 struct dentry *VAR_15, *VAR_16;

 FUNC_0(!VAR_13);
 FUNC_0(!VAR_14);
 FUNC_0(!FUNC_9(&VAR_13->lock));
 FUNC_0(!FUNC_10(VAR_13));






 VAR_14->name = FUNC_7(VAR_6, "%ld", VAR_13->revision);
 if (!VAR_14->name)
  return -VAR_5;

 VAR_16 = FUNC_4(VAR_14->name, FUNC_10(VAR_13));
 if (FUNC_1(VAR_16))

  return FUNC_2(VAR_16);
 VAR_14->dents[VAR_2] = VAR_16;

 VAR_15 = FUNC_5("abi", VAR_7 | 0444, VAR_16, VAR_14,
          &VAR_10);
 if (FUNC_1(VAR_15))
  goto fail;
 VAR_14->dents[VAR_0] = VAR_15;

 VAR_15 = FUNC_5("revision", VAR_7 | 0444, VAR_16, VAR_14,
          &VAR_12);
 if (FUNC_1(VAR_15))
  goto fail;
 VAR_14->dents[VAR_4] = VAR_15;

 if (VAR_8) {
  VAR_15 = FUNC_5("sha1", VAR_7 | 0444, VAR_16,
           VAR_14, &VAR_11);
  if (FUNC_1(VAR_15))
   goto fail;
  VAR_14->dents[VAR_3] = VAR_15;
 }

 VAR_15 = FUNC_5("raw_data", VAR_7 | 0444,
          VAR_16, VAR_14, &VAR_9);
 if (FUNC_1(VAR_15))
  goto fail;
 VAR_14->dents[VAR_1] = VAR_15;
 FUNC_6(VAR_15)->i_size = VAR_14->size;

 VAR_14->ns = FUNC_3(VAR_13);
 FUNC_8(&VAR_14->list, &VAR_13->rawdata_list);


 return 0;

fail:
 FUNC_11(VAR_14);

 return FUNC_2(VAR_15);
}
