
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int id; } ;
struct wmfw_halo_id_hdr {int ym_base; int xm_base; TYPE_2__ fw; int n_algs; } ;
struct TYPE_3__ {int id; int ver; } ;
struct wmfw_halo_alg_hdr {int ym_base; int xm_base; TYPE_1__ alg; } ;
struct wm_adsp_region {int base; } ;
struct wm_adsp {int regmap; } ;
typedef int halo_id ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wmfw_halo_alg_hdr*) ;
 int FUNC_1 (struct wmfw_halo_alg_hdr*) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (struct wm_adsp*,char*,int) ;
 int FUNC_4 (struct wm_adsp*,char*,int,int,int,int,int,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct wmfw_halo_alg_hdr*) ;
 int FUNC_7 (int ,int ,struct wmfw_halo_id_hdr*,int) ;
 struct wm_adsp_region* FUNC_8 (struct wm_adsp*,int ) ;
 struct wmfw_halo_alg_hdr* FUNC_9 (struct wm_adsp*,size_t,struct wm_adsp_region const*,unsigned int,unsigned int) ;
 int FUNC_10 (struct wm_adsp*,int ,int ,int ) ;
 int FUNC_11 (struct wm_adsp*,TYPE_2__*,size_t) ;

__attribute__((used)) static int FUNC_12(struct wm_adsp *VAR_2)
{
 struct wmfw_halo_id_hdr VAR_3;
 struct wmfw_halo_alg_hdr *VAR_4;
 const struct wm_adsp_region *VAR_5;
 unsigned int VAR_6, VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10;

 VAR_5 = FUNC_8(VAR_2, VAR_1);
 if (FUNC_2(!VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_7(VAR_2->regmap, VAR_5->base, &VAR_3,
         sizeof(VAR_3));
 if (VAR_10 != 0) {
  FUNC_3(VAR_2, "Failed to read algorithm info: %d\n",
    VAR_10);
  return VAR_10;
 }

 VAR_8 = FUNC_5(VAR_3.n_algs);

 FUNC_11(VAR_2, &VAR_3.fw, VAR_8);

 VAR_10 = FUNC_10(VAR_2, VAR_3.fw.id,
         VAR_3.xm_base, VAR_3.ym_base);
 if (VAR_10)
  return VAR_10;


 VAR_6 = sizeof(VAR_3) / sizeof(u32);
 VAR_7 = (sizeof(*VAR_4) * VAR_8) / sizeof(u32);

 VAR_4 = FUNC_9(VAR_2, VAR_8, VAR_5, VAR_6, VAR_7);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  FUNC_4(VAR_2,
     "%d: ID %x v%d.%d.%d XM@%x YM@%x\n",
     VAR_9, FUNC_5(VAR_4[VAR_9].alg.id),
     (FUNC_5(VAR_4[VAR_9].alg.ver) & 0xff0000) >> 16,
     (FUNC_5(VAR_4[VAR_9].alg.ver) & 0xff00) >> 8,
     FUNC_5(VAR_4[VAR_9].alg.ver) & 0xff,
     FUNC_5(VAR_4[VAR_9].xm_base),
     FUNC_5(VAR_4[VAR_9].ym_base));

  VAR_10 = FUNC_10(VAR_2, VAR_4[VAR_9].alg.id,
          VAR_4[VAR_9].xm_base,
          VAR_4[VAR_9].ym_base);
  if (VAR_10)
   goto out;
 }

out:
 FUNC_6(VAR_4);
 return VAR_10;
}
