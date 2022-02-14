
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int id; } ;
struct wmfw_adsp1_id_hdr {int dm; TYPE_2__ fw; int zm; int n_algs; } ;
struct TYPE_3__ {int id; int ver; } ;
struct wmfw_adsp1_alg_hdr {TYPE_1__ alg; int zm; int dm; } ;
struct wm_adsp_region {int base; } ;
struct wm_adsp_alg_region {TYPE_1__ alg; int zm; int dm; } ;
struct wm_adsp {scalar_t__ fw_ver; int regmap; } ;
typedef int adsp1_id ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wmfw_adsp1_alg_hdr*) ;
 int FUNC_1 (struct wmfw_adsp1_alg_hdr*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct wm_adsp*,char*,int) ;
 int FUNC_4 (struct wm_adsp*,char*,int,unsigned int,int,int,int,unsigned int,unsigned int) ;
 int FUNC_5 (struct wm_adsp*,char*,unsigned int) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct wmfw_adsp1_alg_hdr*) ;
 int FUNC_8 (int ,int ,struct wmfw_adsp1_id_hdr*,int) ;
 int FUNC_9 (struct wm_adsp*,struct wmfw_adsp1_alg_hdr*,int ,unsigned int,int *,int ,int ,int ) ;
 struct wmfw_adsp1_alg_hdr* FUNC_10 (struct wm_adsp*,int ,int ,int ) ;
 struct wm_adsp_region* FUNC_11 (struct wm_adsp*,int ) ;
 struct wmfw_adsp1_alg_hdr* FUNC_12 (struct wm_adsp*,size_t,struct wm_adsp_region const*,unsigned int,unsigned int) ;
 int FUNC_13 (struct wm_adsp*,TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_14(struct wm_adsp *VAR_4)
{
 struct wmfw_adsp1_id_hdr VAR_5;
 struct wmfw_adsp1_alg_hdr *VAR_6;
 struct wm_adsp_alg_region *VAR_7;
 const struct wm_adsp_region *VAR_8;
 unsigned int VAR_9, VAR_10;
 size_t VAR_11;
 int VAR_12, VAR_13;

 VAR_8 = FUNC_11(VAR_4, VAR_2);
 if (FUNC_2(!VAR_8))
  return -VAR_0;

 VAR_13 = FUNC_8(VAR_4->regmap, VAR_8->base, &VAR_5,
         sizeof(VAR_5));
 if (VAR_13 != 0) {
  FUNC_3(VAR_4, "Failed to read algorithm info: %d\n",
    VAR_13);
  return VAR_13;
 }

 VAR_11 = FUNC_6(VAR_5.n_algs);

 FUNC_13(VAR_4, &VAR_5.fw, VAR_11);

 VAR_7 = FUNC_10(VAR_4, VAR_3,
        VAR_5.fw.id, VAR_5.zm);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 VAR_7 = FUNC_10(VAR_4, VAR_2,
        VAR_5.fw.id, VAR_5.dm);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);


 VAR_9 = sizeof(VAR_5) / sizeof(u32);
 VAR_10 = (sizeof(*VAR_6) * VAR_11) / sizeof(u32);

 VAR_6 = FUNC_12(VAR_4, VAR_11, VAR_8, VAR_9, VAR_10);
 if (FUNC_0(VAR_6))
  return FUNC_1(VAR_6);

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  FUNC_4(VAR_4, "%d: ID %x v%d.%d.%d DM@%x ZM@%x\n",
     VAR_12, FUNC_6(VAR_6[VAR_12].alg.id),
     (FUNC_6(VAR_6[VAR_12].alg.ver) & 0xff0000) >> 16,
     (FUNC_6(VAR_6[VAR_12].alg.ver) & 0xff00) >> 8,
     FUNC_6(VAR_6[VAR_12].alg.ver) & 0xff,
     FUNC_6(VAR_6[VAR_12].dm),
     FUNC_6(VAR_6[VAR_12].zm));

  VAR_7 = FUNC_10(VAR_4, VAR_2,
         VAR_6[VAR_12].alg.id,
         VAR_6[VAR_12].dm);
  if (FUNC_0(VAR_7)) {
   VAR_13 = FUNC_1(VAR_7);
   goto out;
  }
  if (VAR_4->fw_ver == 0) {
   if (VAR_12 + 1 < VAR_11) {
    VAR_10 = FUNC_6(VAR_6[VAR_12 + 1].dm);
    VAR_10 -= FUNC_6(VAR_6[VAR_12].dm);
    VAR_10 *= 4;
    FUNC_9(VAR_4, VAR_7, 0,
           VAR_10, ((void*)0), 0, 0,
           VAR_1);
   } else {
    FUNC_5(VAR_4, "Missing length info for region DM with ID %x\n",
       FUNC_6(VAR_6[VAR_12].alg.id));
   }
  }

  VAR_7 = FUNC_10(VAR_4, VAR_3,
         VAR_6[VAR_12].alg.id,
         VAR_6[VAR_12].zm);
  if (FUNC_0(VAR_7)) {
   VAR_13 = FUNC_1(VAR_7);
   goto out;
  }
  if (VAR_4->fw_ver == 0) {
   if (VAR_12 + 1 < VAR_11) {
    VAR_10 = FUNC_6(VAR_6[VAR_12 + 1].zm);
    VAR_10 -= FUNC_6(VAR_6[VAR_12].zm);
    VAR_10 *= 4;
    FUNC_9(VAR_4, VAR_7, 0,
           VAR_10, ((void*)0), 0, 0,
           VAR_1);
   } else {
    FUNC_5(VAR_4, "Missing length info for region ZM with ID %x\n",
       FUNC_6(VAR_6[VAR_12].alg.id));
   }
  }
 }

out:
 FUNC_7(VAR_6);
 return VAR_13;
}
