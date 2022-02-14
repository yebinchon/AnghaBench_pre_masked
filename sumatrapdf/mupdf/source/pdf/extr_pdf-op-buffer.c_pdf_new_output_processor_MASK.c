
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int pdf_processor ;
struct TYPE_4__ {int op_gs_UseBlackPtComp; int op_gs_OPM; int op_gs_op; int op_gs_OP; int op_EX; int op_BX; int op_EMC; int op_BDC; int op_BMC; int op_DP; int op_MP; int op_Do_form; int op_Do_image; int op_sh; int op_BI; int op_k; int op_K; int op_rg; int op_RG; int op_g; int op_G; int op_sc_shade; int op_SC_shade; int op_sc_pattern; int op_SC_pattern; int op_sc_color; int op_SC_color; int op_cs; int op_CS; int op_d1; int op_d0; int op_dquote; int op_squote; int op_Tj; int op_TJ; int op_Tstar; int op_Tm; int op_TD; int op_Td; int op_Ts; int op_Tr; int op_Tf; int op_TL; int op_Tz; int op_Tw; int op_Tc; int op_ET; int op_BT; int op_Wstar; int op_W; int op_n; int op_bstar; int op_b; int op_Bstar; int op_B; int op_fstar; int op_f; int op_F; int op_s; int op_S; int op_re; int op_h; int op_y; int op_v; int op_c; int op_l; int op_m; int op_cm; int op_Q; int op_q; int * op_gs_SMask; int * op_gs_ca; int * op_gs_CA; int * op_gs_BM; int op_gs_end; int op_gs_begin; int op_i; int op_ri; int op_d; int op_M; int op_J; int op_j; int op_w; int drop_processor; int close_processor; } ;
struct TYPE_5__ {int ahxencode; int * out; TYPE_1__ super; } ;
typedef TYPE_2__ pdf_output_processor ;
typedef int fz_output ;
typedef int fz_context ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int *,int) ;
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
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;

pdf_processor *
FUNC_1(fz_context *VAR_81, fz_output *VAR_82, int VAR_83)
{
 pdf_output_processor *VAR_84 = FUNC_0(VAR_81, sizeof *VAR_84);
 {
  VAR_84->super.close_processor = VAR_0;
  VAR_84->super.drop_processor = VAR_1;


  VAR_84->super.op_w = VAR_79;
  VAR_84->super.op_j = VAR_63;
  VAR_84->super.op_J = VAR_18;
  VAR_84->super.op_M = VAR_20;
  VAR_84->super.op_d = VAR_48;
  VAR_84->super.op_ri = VAR_71;
  VAR_84->super.op_i = VAR_62;
  VAR_84->super.op_gs_begin = VAR_58;
  VAR_84->super.op_gs_end = VAR_59;


  VAR_84->super.op_gs_BM = ((void*)0);
  VAR_84->super.op_gs_CA = ((void*)0);
  VAR_84->super.op_gs_ca = ((void*)0);
  VAR_84->super.op_gs_SMask = ((void*)0);


  VAR_84->super.op_q = VAR_68;
  VAR_84->super.op_Q = VAR_22;
  VAR_84->super.op_cm = VAR_46;


  VAR_84->super.op_m = VAR_66;
  VAR_84->super.op_l = VAR_65;
  VAR_84->super.op_c = VAR_45;
  VAR_84->super.op_v = VAR_78;
  VAR_84->super.op_y = VAR_80;
  VAR_84->super.op_h = VAR_61;
  VAR_84->super.op_re = VAR_69;


  VAR_84->super.op_S = VAR_24;
  VAR_84->super.op_s = VAR_72;
  VAR_84->super.op_F = VAR_16;
  VAR_84->super.op_f = VAR_52;
  VAR_84->super.op_fstar = VAR_53;
  VAR_84->super.op_B = VAR_2;
  VAR_84->super.op_Bstar = VAR_8;
  VAR_84->super.op_b = VAR_43;
  VAR_84->super.op_bstar = VAR_44;
  VAR_84->super.op_n = VAR_67;


  VAR_84->super.op_W = VAR_41;
  VAR_84->super.op_Wstar = VAR_42;


  VAR_84->super.op_BT = VAR_6;
  VAR_84->super.op_ET = VAR_14;


  VAR_84->super.op_Tc = VAR_31;
  VAR_84->super.op_Tw = VAR_39;
  VAR_84->super.op_Tz = VAR_40;
  VAR_84->super.op_TL = VAR_30;
  VAR_84->super.op_Tf = VAR_33;
  VAR_84->super.op_Tr = VAR_36;
  VAR_84->super.op_Ts = VAR_37;


  VAR_84->super.op_Td = VAR_32;
  VAR_84->super.op_TD = VAR_28;
  VAR_84->super.op_Tm = VAR_35;
  VAR_84->super.op_Tstar = VAR_38;


  VAR_84->super.op_TJ = VAR_29;
  VAR_84->super.op_Tj = VAR_34;
  VAR_84->super.op_squote = VAR_77;
  VAR_84->super.op_dquote = VAR_51;


  VAR_84->super.op_d0 = VAR_49;
  VAR_84->super.op_d1 = VAR_50;


  VAR_84->super.op_CS = VAR_9;
  VAR_84->super.op_cs = VAR_47;
  VAR_84->super.op_SC_color = VAR_25;
  VAR_84->super.op_sc_color = VAR_73;
  VAR_84->super.op_SC_pattern = VAR_26;
  VAR_84->super.op_sc_pattern = VAR_74;
  VAR_84->super.op_SC_shade = VAR_27;
  VAR_84->super.op_sc_shade = VAR_75;

  VAR_84->super.op_G = VAR_17;
  VAR_84->super.op_g = VAR_54;
  VAR_84->super.op_RG = VAR_23;
  VAR_84->super.op_rg = VAR_70;
  VAR_84->super.op_K = VAR_19;
  VAR_84->super.op_k = VAR_64;


  VAR_84->super.op_BI = VAR_4;
  VAR_84->super.op_sh = VAR_76;
  VAR_84->super.op_Do_image = VAR_12;
  VAR_84->super.op_Do_form = VAR_11;


  VAR_84->super.op_MP = VAR_21;
  VAR_84->super.op_DP = VAR_10;
  VAR_84->super.op_BMC = VAR_5;
  VAR_84->super.op_BDC = VAR_3;
  VAR_84->super.op_EMC = VAR_13;


  VAR_84->super.op_BX = VAR_7;
  VAR_84->super.op_EX = VAR_15;


  VAR_84->super.op_gs_OP = VAR_55;
  VAR_84->super.op_gs_op = VAR_60;
  VAR_84->super.op_gs_OPM = VAR_56;
  VAR_84->super.op_gs_UseBlackPtComp = VAR_57;
 }

 VAR_84->out = VAR_82;
 VAR_84->ahxencode = VAR_83;

 return (pdf_processor*)VAR_84;
}
