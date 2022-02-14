
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ i2s_mclk_cfg; scalar_t__ i2s_cfg; } ;
struct cygnus_aio_port {unsigned int bit_per_frame; unsigned int lrclk; unsigned int mclk; int port_type; TYPE_2__* cygaud; TYPE_1__ regs; } ;
struct TYPE_4__ {int dev; scalar_t__ audio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cygnus_aio_port *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5 = 0xf;
 u32 VAR_6;
 u32 VAR_7;
 unsigned int VAR_8;
 unsigned int VAR_9;

 VAR_8 = VAR_3->bit_per_frame * VAR_3->lrclk;






 if ((VAR_3->mclk % VAR_8) != 0)
  return -VAR_0;

 VAR_9 = VAR_3->mclk / VAR_8;
 switch (VAR_9) {
 case 2:
 case 4:
 case 6:
 case 8:
 case 10:
 case 12:
 case 14:
  VAR_7 = VAR_9 / 2;
  break;

 default:
  FUNC_1(VAR_3->cygaud->dev,
   "Invalid combination of MCLK and BCLK\n");
  FUNC_1(VAR_3->cygaud->dev, "lrclk = %u, bits/frame = %u, mclk = %u\n",
   VAR_3->lrclk, VAR_3->bit_per_frame, VAR_3->mclk);
  return -VAR_0;
 }


 switch (VAR_3->port_type) {
 case 128:
  VAR_6 = VAR_3->bit_per_frame;
  if (VAR_6 == 512)
   VAR_6 = 0;


  VAR_6 /= 32;


  VAR_4 = FUNC_2(VAR_3->cygaud->audio + VAR_3->regs.i2s_cfg);
  VAR_4 &= ~(VAR_5 << VAR_1);
  VAR_4 |= VAR_6 << VAR_1;
  FUNC_3(VAR_4, VAR_3->cygaud->audio + VAR_3->regs.i2s_cfg);
  FUNC_0(VAR_3->cygaud->dev,
   "SCLKS_PER_1FS_DIV32 = 0x%x\n", VAR_4);
  break;
 case 129:
  break;
 default:
  FUNC_1(VAR_3->cygaud->dev, "Unknown port type\n");
  return -VAR_0;
 }


 VAR_4 = FUNC_2(VAR_3->cygaud->audio + VAR_3->regs.i2s_mclk_cfg);
 VAR_4 &= ~(0xf << VAR_2);
 VAR_4 |= (VAR_7 << VAR_2);
 FUNC_3(VAR_4, VAR_3->cygaud->audio + VAR_3->regs.i2s_mclk_cfg);

 FUNC_0(VAR_3->cygaud->dev, "mclk cfg reg = 0x%x\n", VAR_4);
 FUNC_0(VAR_3->cygaud->dev, "bits per frame = %u, mclk = %u Hz, lrclk = %u Hz\n",
   VAR_3->bit_per_frame, VAR_3->mclk, VAR_3->lrclk);
 return 0;
}
