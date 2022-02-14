
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcxhr_mgr {int board_has_analog; int board_has_mic; int dsp_reset; TYPE_1__* pci; int xlx_cfg; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned char FUNC_0 (struct pcxhr_mgr*,int ) ;
 int FUNC_1 (struct pcxhr_mgr*,int ,int) ;
 unsigned char VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct pcxhr_mgr*,int ) ;
 int FUNC_4 (struct pcxhr_mgr*,int ) ;
 int FUNC_5 (int) ;

int FUNC_6(struct pcxhr_mgr *VAR_11)
{
 unsigned char VAR_12;

 VAR_11->board_has_analog = 1;
 VAR_11->xlx_cfg = VAR_4;

 VAR_12 = FUNC_0(VAR_11, VAR_10);
 if (VAR_12 & VAR_9)
  VAR_11->board_has_mic = 1;
 FUNC_2(&VAR_11->pci->dev,
  "MIC input available = %d\n", VAR_11->board_has_mic);


 FUNC_1(VAR_11, VAR_5,
      VAR_7);
 FUNC_5(5);
 VAR_11->dsp_reset = VAR_7 |
    VAR_8 |
    VAR_6;
 FUNC_1(VAR_11, VAR_5, VAR_11->dsp_reset);

 FUNC_5(5);


 FUNC_3(VAR_11, VAR_1);
 FUNC_3(VAR_11, VAR_0);
 FUNC_3(VAR_11, VAR_3);
 FUNC_3(VAR_11, VAR_2);


 FUNC_4(VAR_11, 0);

 return 0;
}
