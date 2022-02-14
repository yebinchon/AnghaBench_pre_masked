
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ bf_sourcech_cfg; scalar_t__ bf_sourcech_ctrl; scalar_t__ i2s_cfg; scalar_t__ i2s_stream_cfg; } ;
struct cygnus_aio_port {int port_type; int portnum; TYPE_2__* cygaud; TYPE_1__ regs; int streams_on; } ;
struct TYPE_4__ {int dev; scalar_t__ audio; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 scalar_t__ VAR_6 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct cygnus_aio_port *VAR_7)
{
 u32 VAR_8;
 int VAR_9 = 0;

 switch (VAR_7->port_type) {
 case 128:
  VAR_8 = FUNC_2(VAR_7->cygaud->audio + VAR_7->regs.i2s_stream_cfg);
  VAR_8 |= FUNC_0(VAR_4);
  FUNC_3(VAR_8, VAR_7->cygaud->audio + VAR_7->regs.i2s_stream_cfg);

  FUNC_3(1, VAR_7->cygaud->audio + VAR_7->regs.bf_sourcech_ctrl);

  VAR_8 = FUNC_2(VAR_7->cygaud->audio + VAR_7->regs.i2s_cfg);
  VAR_8 |= FUNC_0(VAR_2);
  VAR_8 |= FUNC_0(VAR_3);
  FUNC_3(VAR_8, VAR_7->cygaud->audio + VAR_7->regs.i2s_cfg);

  VAR_8 = FUNC_2(VAR_7->cygaud->audio + VAR_7->regs.bf_sourcech_cfg);
  VAR_8 |= FUNC_0(VAR_0);
  FUNC_3(VAR_8, VAR_7->cygaud->audio + VAR_7->regs.bf_sourcech_cfg);

  VAR_7->streams_on |= VAR_5;
  break;
 case 129:
  VAR_8 = FUNC_2(VAR_7->cygaud->audio + VAR_6);
  VAR_8 |= 0x3;
  FUNC_3(VAR_8, VAR_7->cygaud->audio + VAR_6);

  FUNC_3(1, VAR_7->cygaud->audio + VAR_7->regs.bf_sourcech_ctrl);

  VAR_8 = FUNC_2(VAR_7->cygaud->audio + VAR_7->regs.bf_sourcech_cfg);
  VAR_8 |= FUNC_0(VAR_0);
  FUNC_3(VAR_8, VAR_7->cygaud->audio + VAR_7->regs.bf_sourcech_cfg);
  break;
 default:
  FUNC_1(VAR_7->cygaud->dev,
   "Port not supported %d\n", VAR_7->portnum);
  VAR_9 = -VAR_1;
 }

 return VAR_9;
}
