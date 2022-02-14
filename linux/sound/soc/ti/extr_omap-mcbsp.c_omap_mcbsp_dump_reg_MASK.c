
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_mcbsp {int dev; int id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct omap_mcbsp*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static void FUNC_2(struct omap_mcbsp *VAR_13)
{
 FUNC_1(VAR_13->dev, "**** McBSP%d regs ****\n", VAR_13->id);
 FUNC_1(VAR_13->dev, "DRR2:  0x%04x\n", FUNC_0(VAR_13, VAR_1));
 FUNC_1(VAR_13->dev, "DRR1:  0x%04x\n", FUNC_0(VAR_13, VAR_0));
 FUNC_1(VAR_13->dev, "DXR2:  0x%04x\n", FUNC_0(VAR_13, VAR_3));
 FUNC_1(VAR_13->dev, "DXR1:  0x%04x\n", FUNC_0(VAR_13, VAR_2));
 FUNC_1(VAR_13->dev, "SPCR2: 0x%04x\n", FUNC_0(VAR_13, VAR_8));
 FUNC_1(VAR_13->dev, "SPCR1: 0x%04x\n", FUNC_0(VAR_13, VAR_7));
 FUNC_1(VAR_13->dev, "RCR2:  0x%04x\n", FUNC_0(VAR_13, VAR_6));
 FUNC_1(VAR_13->dev, "RCR1:  0x%04x\n", FUNC_0(VAR_13, VAR_5));
 FUNC_1(VAR_13->dev, "XCR2:  0x%04x\n", FUNC_0(VAR_13, VAR_12));
 FUNC_1(VAR_13->dev, "XCR1:  0x%04x\n", FUNC_0(VAR_13, VAR_11));
 FUNC_1(VAR_13->dev, "SRGR2: 0x%04x\n", FUNC_0(VAR_13, VAR_10));
 FUNC_1(VAR_13->dev, "SRGR1: 0x%04x\n", FUNC_0(VAR_13, VAR_9));
 FUNC_1(VAR_13->dev, "PCR0:  0x%04x\n", FUNC_0(VAR_13, VAR_4));
 FUNC_1(VAR_13->dev, "***********************\n");
}
