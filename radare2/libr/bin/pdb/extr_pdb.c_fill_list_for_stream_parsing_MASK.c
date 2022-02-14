
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int sn_token_rid_map; int sn_pdata; int sn_xdata; int sn_new_fpo; int sn_fpo; int sn_omap_from_src; int sn_omap_to_src; int sn_section_hdr_orig; int sn_section_hdr; } ;
struct TYPE_5__ {int symrecStream; } ;
struct TYPE_7__ {TYPE_2__ dbg_header; TYPE_1__ dbi_header; } ;
typedef int SPEStream ;
typedef int SOmapStream ;
typedef int SGDATAStream ;
typedef int SFPOStream ;
typedef int SFPONewStream ;
typedef TYPE_3__ SDbiStream ;
typedef int RList ;


 int FUNC_0 (int *,int ,int,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static void FUNC_1(RList *VAR_19, SDbiStream *VAR_20) {
 FUNC_0 (VAR_19, VAR_20->dbi_header.symrecStream, sizeof (SGDATAStream),
  VAR_2, VAR_11, VAR_16);
 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_section_hdr, sizeof (SPEStream),
  VAR_6, VAR_13, VAR_18);
 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_section_hdr_orig, sizeof(SPEStream),
  VAR_7, VAR_13, VAR_18);
 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_omap_to_src, sizeof(SOmapStream),
  VAR_4, VAR_12, VAR_17);
 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_omap_from_src, sizeof(SOmapStream),
  VAR_3, VAR_12, VAR_17);
 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_fpo, sizeof(SFPOStream),
  VAR_0, VAR_10, VAR_15);
 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_new_fpo, sizeof(SFPONewStream),
  VAR_1, VAR_10, VAR_14);


 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_xdata, 0, VAR_9, 0, 0);
 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_pdata, 0, VAR_5, 0, 0);
 FUNC_0 (VAR_19, VAR_20->dbg_header.sn_token_rid_map, 0, VAR_8, 0, 0);
}
