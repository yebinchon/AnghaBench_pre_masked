
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 unsigned long VAR_12 ;
 unsigned long VAR_13 ;
 unsigned long VAR_14 ;
 unsigned long VAR_15 ;
 unsigned long VAR_16 ;
 unsigned long FUNC_0 () ;
 int FUNC_1 (char*,...) ;

void FUNC_2(unsigned long VAR_17)
{
 FUNC_1("TEXASR: %16lx\t", VAR_17);

 if (VAR_17 & VAR_3)
  FUNC_1("TEXASR_FP  ");

 if (VAR_17 & VAR_1)
  FUNC_1("TEXASR_DA  ");

 if (VAR_17 & VAR_8)
  FUNC_1("TEXASR_NO  ");

 if (VAR_17 & VAR_2)
  FUNC_1("TEXASR_FO  ");

 if (VAR_17 & VAR_12)
  FUNC_1("TEXASR_SIC  ");

 if (VAR_17 & VAR_9)
  FUNC_1("TEXASR_NTC  ");

 if (VAR_17 & VAR_14)
  FUNC_1("TEXASR_TC  ");

 if (VAR_17 & VAR_16)
  FUNC_1("TEXASR_TIC  ");

 if (VAR_17 & VAR_6)
  FUNC_1("TEXASR_IC  ");

 if (VAR_17 & VAR_7)
  FUNC_1("TEXASR_IFC  ");

 if (VAR_17 & VAR_0)
  FUNC_1("TEXASR_ABT  ");

 if (VAR_17 & VAR_13)
  FUNC_1("TEXASR_SPD  ");

 if (VAR_17 & VAR_5)
  FUNC_1("TEXASR_HV  ");

 if (VAR_17 & VAR_10)
  FUNC_1("TEXASR_PR  ");

 if (VAR_17 & VAR_4)
  FUNC_1("TEXASR_FS  ");

 if (VAR_17 & VAR_15)
  FUNC_1("TEXASR_TE  ");

 if (VAR_17 & VAR_11)
  FUNC_1("TEXASR_ROT  ");

 FUNC_1("TFIAR :%lx\n", FUNC_0());
}
