
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sn_section_hdr_orig; int sn_new_fpo; int sn_pdata; int sn_xdata; int sn_token_rid_map; int sn_section_hdr; int sn_omap_from_src; int sn_omap_to_src; int sn_fixup; int sn_exception; int sn_fpo; } ;
typedef TYPE_1__ SDbiDbgHeader ;
typedef int R_STREAM_FILE ;


 int FUNC_0 (int *,int,char*) ;

__attribute__((used)) static void FUNC_1(SDbiDbgHeader *VAR_0, R_STREAM_FILE *VAR_1) {
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_fpo);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_exception);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_fixup);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_omap_to_src);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_omap_from_src);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_section_hdr);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_token_rid_map);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_xdata);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_pdata);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_new_fpo);
 FUNC_0 (VAR_1, sizeof (short), (char *)&VAR_0->sn_section_hdr_orig);
}
