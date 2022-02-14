
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* dma; } ;
struct snd_pmac {TYPE_2__ capture; TYPE_2__ playback; } ;
struct TYPE_3__ {int control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(struct snd_pmac *VAR_5)
{
 FUNC_0(&VAR_5->playback.dma->control, (VAR_3|VAR_2|VAR_1|VAR_4|VAR_0) << 16);
 FUNC_1(&VAR_5->playback);
 FUNC_0(&VAR_5->capture.dma->control, (VAR_3|VAR_2|VAR_1|VAR_4|VAR_0) << 16);
 FUNC_1(&VAR_5->capture);
}
