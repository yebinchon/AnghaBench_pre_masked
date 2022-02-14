
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ i2s_cap_stream_cfg; scalar_t__ i2s_cfg; scalar_t__ bf_destch_ctrl; scalar_t__ bf_destch_cfg; } ;
struct cygnus_aio_port {int streams_on; TYPE_2__ regs; TYPE_1__* cygaud; } ;
struct TYPE_3__ {scalar_t__ i2s_in; scalar_t__ audio; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct cygnus_aio_port *VAR_5)
{
 u32 VAR_6;

 VAR_6 = FUNC_1(VAR_5->cygaud->audio + VAR_5->regs.bf_destch_cfg);
 VAR_6 |= FUNC_0(VAR_0);
 FUNC_2(VAR_6, VAR_5->cygaud->audio + VAR_5->regs.bf_destch_cfg);

 FUNC_2(0x1, VAR_5->cygaud->audio + VAR_5->regs.bf_destch_ctrl);

 VAR_6 = FUNC_1(VAR_5->cygaud->audio + VAR_5->regs.i2s_cfg);
 VAR_6 |= FUNC_0(VAR_3);
 VAR_6 |= FUNC_0(VAR_4);
 FUNC_2(VAR_6, VAR_5->cygaud->audio + VAR_5->regs.i2s_cfg);

 VAR_6 = FUNC_1(VAR_5->cygaud->i2s_in + VAR_5->regs.i2s_cap_stream_cfg);
 VAR_6 |= FUNC_0(VAR_2);
 FUNC_2(VAR_6, VAR_5->cygaud->i2s_in + VAR_5->regs.i2s_cap_stream_cfg);

 VAR_5->streams_on |= VAR_1;
}
