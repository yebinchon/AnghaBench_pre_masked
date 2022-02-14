
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int tfe0; int tfe1; int rff0; int rff1; int rls; int tls; int rfs; int tfs; int tue0; int tue1; int roe0; int roe1; int tde0; int tde1; int rdr0; int rdr1; int rxt; int cmddu; int cmdau; int tfrc; int rfrc; } ;
struct fsl_ssi_dbg {TYPE_1__ stats; } ;


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
 int VAR_19 ;
 int VAR_20 ;

void FUNC_0(struct fsl_ssi_dbg *VAR_21, u32 VAR_22)
{
 if (VAR_22 & VAR_6)
  VAR_21->stats.rfrc++;

 if (VAR_22 & VAR_16)
  VAR_21->stats.tfrc++;

 if (VAR_22 & VAR_0)
  VAR_21->stats.cmdau++;

 if (VAR_22 & VAR_1)
  VAR_21->stats.cmddu++;

 if (VAR_22 & VAR_11)
  VAR_21->stats.rxt++;

 if (VAR_22 & VAR_3)
  VAR_21->stats.rdr1++;

 if (VAR_22 & VAR_2)
  VAR_21->stats.rdr0++;

 if (VAR_22 & VAR_13)
  VAR_21->stats.tde1++;

 if (VAR_22 & VAR_12)
  VAR_21->stats.tde0++;

 if (VAR_22 & VAR_10)
  VAR_21->stats.roe1++;

 if (VAR_22 & VAR_9)
  VAR_21->stats.roe0++;

 if (VAR_22 & VAR_20)
  VAR_21->stats.tue1++;

 if (VAR_22 & VAR_19)
  VAR_21->stats.tue0++;

 if (VAR_22 & VAR_17)
  VAR_21->stats.tfs++;

 if (VAR_22 & VAR_7)
  VAR_21->stats.rfs++;

 if (VAR_22 & VAR_18)
  VAR_21->stats.tls++;

 if (VAR_22 & VAR_8)
  VAR_21->stats.rls++;

 if (VAR_22 & VAR_5)
  VAR_21->stats.rff1++;

 if (VAR_22 & VAR_4)
  VAR_21->stats.rff0++;

 if (VAR_22 & VAR_15)
  VAR_21->stats.tfe1++;

 if (VAR_22 & VAR_14)
  VAR_21->stats.tfe0++;
}
