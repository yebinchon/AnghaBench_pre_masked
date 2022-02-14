
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wmfw_region {int len; int data; int type; int offset; } ;
struct wmfw_header {int len; int core; int ver; int * magic; } ;
struct wmfw_footer {int timestamp; } ;
struct wmfw_adsp1_sizes {int dummy; } ;
struct wm_adsp_region {int dummy; } ;
struct wm_adsp_buf {int buf; } ;
struct wm_adsp {char* part; char* fwf_name; size_t fw; TYPE_1__* ops; int type; int fw_ver; int dev; struct regmap* regmap; } ;
struct regmap {int dummy; } ;
struct firmware {unsigned int size; int * data; } ;
struct TYPE_4__ {char* file; } ;
struct TYPE_3__ {unsigned int (* parse_sizes ) (struct wm_adsp*,char*,unsigned int,struct firmware const*) ;unsigned int (* region_to_reg ) (struct wm_adsp_region const*,int) ;int (* validate_version ) (struct wm_adsp*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (struct wm_adsp*,char*,char*,int,...) ;
 int FUNC_2 (struct wm_adsp*,char*,...) ;
 int FUNC_3 (struct wm_adsp*,char*,char*,...) ;
 int FUNC_4 (struct wm_adsp*,char*,char*,int,unsigned int,...) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (char*) ;
 char* FUNC_7 (int,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int *,char*,int) ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (struct regmap*) ;
 int FUNC_13 (struct regmap*,unsigned int,int ,int) ;
 int FUNC_14 (struct firmware const*) ;
 int FUNC_15 (struct firmware const**,char*,int ) ;
 int FUNC_16 (char*,int,char*,char*,char*,char*) ;
 int FUNC_17 (struct wm_adsp*,int ) ;
 unsigned int FUNC_18 (struct wm_adsp*,char*,unsigned int,struct firmware const*) ;
 unsigned int FUNC_19 (struct wm_adsp_region const*,int) ;
 struct wm_adsp_buf* FUNC_20 (int ,int,int *) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (struct wm_adsp*,char*) ;
 struct wm_adsp_region* FUNC_23 (struct wm_adsp*,int) ;
 TYPE_2__* VAR_5 ;
 char* FUNC_24 (int) ;
 int FUNC_25 (struct wm_adsp*,struct wmfw_region const*) ;

__attribute__((used)) static int FUNC_26(struct wm_adsp *VAR_6)
{
 FUNC_0(VAR_4);
 const struct firmware *VAR_7;
 struct regmap *VAR_8 = VAR_6->regmap;
 unsigned int VAR_9 = 0;
 const struct wmfw_header *VAR_10;
 const struct wmfw_adsp1_sizes *VAR_11;
 const struct wmfw_footer *VAR_12;
 const struct wmfw_region *VAR_13;
 const struct wm_adsp_region *VAR_14;
 const char *VAR_15;
 char *VAR_16, *VAR_17 = ((void*)0);
 struct wm_adsp_buf *VAR_18;
 unsigned int VAR_19;
 int VAR_20 = 0;
 int VAR_21, VAR_22, VAR_23;

 VAR_16 = FUNC_7(VAR_3, VAR_2);
 if (VAR_16 == ((void*)0))
  return -VAR_1;

 FUNC_16(VAR_16, VAR_3, "%s-%s-%s.wmfw", VAR_6->part, VAR_6->fwf_name,
   VAR_5[VAR_6->fw].file);
 VAR_16[VAR_3 - 1] = '\0';

 VAR_21 = FUNC_15(&VAR_7, VAR_16, VAR_6->dev);
 if (VAR_21 != 0) {
  FUNC_2(VAR_6, "Failed to request '%s'\n", VAR_16);
  goto out;
 }
 VAR_21 = -VAR_0;

 VAR_9 = sizeof(*VAR_10) + sizeof(*VAR_11) + sizeof(*VAR_12);
 if (VAR_9 >= VAR_7->size) {
  FUNC_2(VAR_6, "%s: file too short, %zu bytes\n",
    VAR_16, VAR_7->size);
  goto out_fw;
 }

 VAR_10 = (void *)&VAR_7->data[0];

 if (FUNC_10(&VAR_10->magic[0], "WMFW", 4) != 0) {
  FUNC_2(VAR_6, "%s: invalid magic\n", VAR_16);
  goto out_fw;
 }

 if (!VAR_6->ops->validate_version(VAR_6, VAR_10->ver)) {
  FUNC_2(VAR_6, "%s: unknown file format %d\n",
    VAR_16, VAR_10->ver);
  goto out_fw;
 }

 FUNC_3(VAR_6, "Firmware version: %d\n", VAR_10->ver);
 VAR_6->fw_ver = VAR_10->ver;

 if (VAR_10->core != VAR_6->type) {
  FUNC_2(VAR_6, "%s: invalid core %d != %d\n",
    VAR_16, VAR_10->core, VAR_6->type);
  goto out_fw;
 }

 VAR_9 = sizeof(*VAR_10);
 VAR_9 = VAR_6->ops->parse_sizes(VAR_6, VAR_16, VAR_9, VAR_7);

 VAR_12 = (void *)&VAR_7->data[VAR_9];
 VAR_9 += sizeof(*VAR_12);

 if (FUNC_8(VAR_10->len) != VAR_9) {
  FUNC_2(VAR_6, "%s: unexpected header length %d\n",
    VAR_16, FUNC_8(VAR_10->len));
  goto out_fw;
 }

 FUNC_1(VAR_6, "%s: timestamp %llu\n", VAR_16,
   FUNC_9(VAR_12->timestamp));

 while (VAR_9 < VAR_7->size &&
        sizeof(*VAR_13) < VAR_7->size - VAR_9) {
  VAR_13 = (void *)&(VAR_7->data[VAR_9]);
  VAR_15 = "Unknown";
  VAR_19 = 0;
  VAR_17 = ((void*)0);
  VAR_22 = FUNC_8(VAR_13->offset) & 0xffffff;
  VAR_23 = FUNC_5(VAR_13->type) & 0xff;

  switch (VAR_23) {
  case 128:
   VAR_15 = "Firmware name";
   VAR_17 = FUNC_7(FUNC_8(VAR_13->len) + 1,
           VAR_2);
   break;
  case 133:
   VAR_15 = "Algorithm";
   VAR_21 = FUNC_25(VAR_6, VAR_13);
   if (VAR_21 != 0)
    goto out_fw;
   break;
  case 129:
   VAR_15 = "Information";
   VAR_17 = FUNC_7(FUNC_8(VAR_13->len) + 1,
           VAR_2);
   break;
  case 139:
   VAR_15 = "Absolute";
   VAR_19 = VAR_22;
   break;
  case 137:
  case 138:
  case 135:
  case 134:
  case 136:
  case 132:
  case 131:
  case 130:
   VAR_14 = FUNC_23(VAR_6, VAR_23);
   if (!VAR_14) {
    FUNC_2(VAR_6, "No region of type: %x\n", VAR_23);
    goto out_fw;
   }

   VAR_15 = FUNC_24(VAR_23);
   VAR_19 = VAR_6->ops->region_to_reg(VAR_14, VAR_22);
   break;
  default:
   FUNC_4(VAR_6,
      "%s.%d: Unknown region type %x at %d(%x)\n",
      VAR_16, VAR_20, VAR_23, VAR_9, VAR_9);
   break;
  }

  FUNC_1(VAR_6, "%s.%d: %d bytes at %d in %s\n", VAR_16,
    VAR_20, FUNC_8(VAR_13->len), VAR_22,
    VAR_15);

  if (FUNC_8(VAR_13->len) >
      VAR_7->size - VAR_9 - sizeof(*VAR_13)) {
   FUNC_2(VAR_6,
     "%s.%d: %s region len %d bytes exceeds file length %zu\n",
     VAR_16, VAR_20, VAR_15,
     FUNC_8(VAR_13->len), VAR_7->size);
   VAR_21 = -VAR_0;
   goto out_fw;
  }

  if (VAR_17) {
   FUNC_11(VAR_17, VAR_13->data, FUNC_8(VAR_13->len));
   FUNC_3(VAR_6, "%s: %s\n", VAR_16, VAR_17);
   FUNC_6(VAR_17);
   VAR_17 = ((void*)0);
  }

  if (VAR_19) {
   VAR_18 = FUNC_20(VAR_13->data,
      FUNC_8(VAR_13->len),
      &VAR_4);
   if (!VAR_18) {
    FUNC_2(VAR_6, "Out of memory\n");
    VAR_21 = -VAR_1;
    goto out_fw;
   }

   VAR_21 = FUNC_13(VAR_8, VAR_19, VAR_18->buf,
           FUNC_8(VAR_13->len));
   if (VAR_21 != 0) {
    FUNC_2(VAR_6,
     "%s.%d: Failed to write %d bytes at %d in %s: %d\n",
     VAR_16, VAR_20,
     FUNC_8(VAR_13->len), VAR_22,
     VAR_15, VAR_21);
    goto out_fw;
   }
  }

  VAR_9 += FUNC_8(VAR_13->len) + sizeof(*VAR_13);
  VAR_20++;
 }

 VAR_21 = FUNC_12(VAR_8);
 if (VAR_21 != 0) {
  FUNC_2(VAR_6, "Failed to complete async write: %d\n", VAR_21);
  goto out_fw;
 }

 if (VAR_9 > VAR_7->size)
  FUNC_4(VAR_6, "%s.%d: %zu bytes at end of file\n",
     VAR_16, VAR_20, VAR_9 - VAR_7->size);

 FUNC_22(VAR_6, VAR_16);

out_fw:
 FUNC_12(VAR_8);
 FUNC_21(&VAR_4);
 FUNC_14(VAR_7);
 FUNC_6(VAR_17);
out:
 FUNC_6(VAR_16);

 return VAR_21;
}
