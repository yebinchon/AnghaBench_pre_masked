
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_fsi_port_info {scalar_t__ tx_id; } ;
struct TYPE_3__ {int * handler; scalar_t__ dma_id; struct fsi_priv* priv; } ;
struct TYPE_4__ {struct fsi_priv* priv; int * handler; } ;
struct fsi_priv {TYPE_1__ playback; TYPE_2__ capture; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct fsi_priv *VAR_3,
        struct sh_fsi_port_info *VAR_4)
{
 VAR_3->playback.handler = &VAR_2;
 VAR_3->playback.priv = VAR_3;
 VAR_3->capture.handler = &VAR_1;
 VAR_3->capture.priv = VAR_3;

 if (VAR_4->tx_id) {
  VAR_3->playback.dma_id = VAR_4->tx_id;
  VAR_3->playback.handler = &VAR_0;
 }
}
