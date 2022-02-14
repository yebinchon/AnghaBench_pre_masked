
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct special_params {int clk_src; int dig_in_fmt; int dig_out_fmt; int clk_lock; scalar_t__ ctl_id_sync; } ;
struct snd_bebob {int card; int unit; int tx_stream; int rx_stream; struct special_params* maudio_special_quirk; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int*,int,int*,int,int) ;
 int FUNC_3 (int*) ;
 int* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_6(struct snd_bebob *VAR_7, unsigned int VAR_8,
      unsigned int VAR_9, unsigned int VAR_10,
      unsigned int VAR_11)
{
 struct special_params *VAR_12 = VAR_7->maudio_special_quirk;
 int VAR_13;
 u8 *VAR_14;

 if (FUNC_1(&VAR_7->rx_stream) ||
     FUNC_1(&VAR_7->tx_stream))
  return -VAR_0;

 VAR_14 = FUNC_4(12, VAR_5);
 if (VAR_14 == ((void*)0))
  return -VAR_3;

 VAR_14[0] = 0x00;
 VAR_14[1] = 0xff;
 VAR_14[2] = 0x00;
 VAR_14[3] = 0x04;
 VAR_14[4] = 0x00;
 VAR_14[5] = 0x04;
 VAR_14[6] = 0xff & VAR_8;
 VAR_14[7] = 0xff & VAR_9;
 VAR_14[8] = 0xff & VAR_10;
 VAR_14[9] = 0xff & VAR_11;
 VAR_14[10] = 0x00;
 VAR_14[11] = 0x00;

 VAR_13 = FUNC_2(VAR_7->unit, VAR_14, 12, VAR_14, 12,
      FUNC_0(1) | FUNC_0(2) | FUNC_0(3) | FUNC_0(4) |
      FUNC_0(5) | FUNC_0(6) | FUNC_0(7) | FUNC_0(8) |
      FUNC_0(9));
 if ((VAR_13 > 0) && (VAR_13 < 10))
  VAR_13 = -VAR_2;
 else if (VAR_14[0] == 0x08)
  VAR_13 = -VAR_4;
 else if (VAR_14[0] == 0x0a)
  VAR_13 = -VAR_1;
 if (VAR_13 < 0)
  goto end;

 VAR_12->clk_src = VAR_14[6];
 VAR_12->dig_in_fmt = VAR_14[7];
 VAR_12->dig_out_fmt = VAR_14[8];
 VAR_12->clk_lock = VAR_14[9];

 if (VAR_12->ctl_id_sync)
  FUNC_5(VAR_7->card, VAR_6,
          VAR_12->ctl_id_sync);

 VAR_13 = 0;
end:
 FUNC_3(VAR_14);
 return VAR_13;
}
