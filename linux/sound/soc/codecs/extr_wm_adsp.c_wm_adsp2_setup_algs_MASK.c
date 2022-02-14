
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int id; } ;
struct wmfw_adsp2_id_hdr {int zm; TYPE_2__ fw; int ym; int xm; int n_algs; } ;
struct TYPE_3__ {int id; int ver; } ;
struct wmfw_adsp2_alg_hdr {TYPE_1__ alg; int zm; int ym; int xm; } ;
struct wm_adsp_region {int base; } ;
struct wm_adsp_alg_region {TYPE_1__ alg; int zm; int ym; int xm; } ;
struct wm_adsp {scalar_t__ fw_ver; int regmap; } ;
typedef int adsp2_id ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wmfw_adsp2_alg_hdr*) ;
 int FUNC_1 (struct wmfw_adsp2_alg_hdr*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct wm_adsp*,char*,int) ;
 int FUNC_4 (struct wm_adsp*,char*,int,unsigned int,int,int,int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (struct wm_adsp*,char*,unsigned int) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (struct wmfw_adsp2_alg_hdr*) ;
 int FUNC_8 (int ,int ,struct wmfw_adsp2_id_hdr*,int) ;
 int FUNC_9 (struct wm_adsp*,struct wmfw_adsp2_alg_hdr*,int ,unsigned int,int *,int ,int ,int ) ;
 struct wmfw_adsp2_alg_hdr* FUNC_10 (struct wm_adsp*,int ,int ,int ) ;
 struct wm_adsp_region* FUNC_11 (struct wm_adsp*,int ) ;
 struct wmfw_adsp2_alg_hdr* FUNC_12 (struct wm_adsp*,size_t,struct wm_adsp_region const*,unsigned int,unsigned int) ;
 int FUNC_13 (struct wm_adsp*,TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_14(struct wm_adsp *VAR_5)
{
 struct wmfw_adsp2_id_hdr VAR_6;
 struct wmfw_adsp2_alg_hdr *VAR_7;
 struct wm_adsp_alg_region *VAR_8;
 const struct wm_adsp_region *VAR_9;
 unsigned int VAR_10, VAR_11;
 size_t VAR_12;
 int VAR_13, VAR_14;

 VAR_9 = FUNC_11(VAR_5, VAR_2);
 if (FUNC_2(!VAR_9))
  return -VAR_0;

 VAR_14 = FUNC_8(VAR_5->regmap, VAR_9->base, &VAR_6,
         sizeof(VAR_6));
 if (VAR_14 != 0) {
  FUNC_3(VAR_5, "Failed to read algorithm info: %d\n",
    VAR_14);
  return VAR_14;
 }

 VAR_12 = FUNC_6(VAR_6.n_algs);

 FUNC_13(VAR_5, &VAR_6.fw, VAR_12);

 VAR_8 = FUNC_10(VAR_5, VAR_2,
        VAR_6.fw.id, VAR_6.xm);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_8 = FUNC_10(VAR_5, VAR_3,
        VAR_6.fw.id, VAR_6.ym);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);

 VAR_8 = FUNC_10(VAR_5, VAR_4,
        VAR_6.fw.id, VAR_6.zm);
 if (FUNC_0(VAR_8))
  return FUNC_1(VAR_8);


 VAR_10 = sizeof(VAR_6) / sizeof(u32);
 VAR_11 = (sizeof(*VAR_7) * VAR_12) / sizeof(u32);

 VAR_7 = FUNC_12(VAR_5, VAR_12, VAR_9, VAR_10, VAR_11);
 if (FUNC_0(VAR_7))
  return FUNC_1(VAR_7);

 for (VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
  FUNC_4(VAR_5,
     "%d: ID %x v%d.%d.%d XM@%x YM@%x ZM@%x\n",
     VAR_13, FUNC_6(VAR_7[VAR_13].alg.id),
     (FUNC_6(VAR_7[VAR_13].alg.ver) & 0xff0000) >> 16,
     (FUNC_6(VAR_7[VAR_13].alg.ver) & 0xff00) >> 8,
     FUNC_6(VAR_7[VAR_13].alg.ver) & 0xff,
     FUNC_6(VAR_7[VAR_13].xm),
     FUNC_6(VAR_7[VAR_13].ym),
     FUNC_6(VAR_7[VAR_13].zm));

  VAR_8 = FUNC_10(VAR_5, VAR_2,
         VAR_7[VAR_13].alg.id,
         VAR_7[VAR_13].xm);
  if (FUNC_0(VAR_8)) {
   VAR_14 = FUNC_1(VAR_8);
   goto out;
  }
  if (VAR_5->fw_ver == 0) {
   if (VAR_13 + 1 < VAR_12) {
    VAR_11 = FUNC_6(VAR_7[VAR_13 + 1].xm);
    VAR_11 -= FUNC_6(VAR_7[VAR_13].xm);
    VAR_11 *= 4;
    FUNC_9(VAR_5, VAR_8, 0,
           VAR_11, ((void*)0), 0, 0,
           VAR_1);
   } else {
    FUNC_5(VAR_5, "Missing length info for region XM with ID %x\n",
       FUNC_6(VAR_7[VAR_13].alg.id));
   }
  }

  VAR_8 = FUNC_10(VAR_5, VAR_3,
         VAR_7[VAR_13].alg.id,
         VAR_7[VAR_13].ym);
  if (FUNC_0(VAR_8)) {
   VAR_14 = FUNC_1(VAR_8);
   goto out;
  }
  if (VAR_5->fw_ver == 0) {
   if (VAR_13 + 1 < VAR_12) {
    VAR_11 = FUNC_6(VAR_7[VAR_13 + 1].ym);
    VAR_11 -= FUNC_6(VAR_7[VAR_13].ym);
    VAR_11 *= 4;
    FUNC_9(VAR_5, VAR_8, 0,
           VAR_11, ((void*)0), 0, 0,
           VAR_1);
   } else {
    FUNC_5(VAR_5, "Missing length info for region YM with ID %x\n",
       FUNC_6(VAR_7[VAR_13].alg.id));
   }
  }

  VAR_8 = FUNC_10(VAR_5, VAR_4,
         VAR_7[VAR_13].alg.id,
         VAR_7[VAR_13].zm);
  if (FUNC_0(VAR_8)) {
   VAR_14 = FUNC_1(VAR_8);
   goto out;
  }
  if (VAR_5->fw_ver == 0) {
   if (VAR_13 + 1 < VAR_12) {
    VAR_11 = FUNC_6(VAR_7[VAR_13 + 1].zm);
    VAR_11 -= FUNC_6(VAR_7[VAR_13].zm);
    VAR_11 *= 4;
    FUNC_9(VAR_5, VAR_8, 0,
           VAR_11, ((void*)0), 0, 0,
           VAR_1);
   } else {
    FUNC_5(VAR_5, "Missing length info for region ZM with ID %x\n",
       FUNC_6(VAR_7[VAR_13].alg.id));
   }
  }
 }

out:
 FUNC_7(VAR_7);
 return VAR_14;
}
