
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct emu10k1x_voice {struct emu10k1x_pcm* epcm; } ;
struct emu10k1x_pcm {TYPE_3__* substream; } ;
struct emu10k1x {TYPE_1__* card; } ;
struct TYPE_9__ {TYPE_2__* ops; } ;
struct TYPE_8__ {int (* pointer ) (TYPE_3__*) ;} ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct emu10k1x *VAR_0, struct emu10k1x_voice *VAR_1)
{
 struct emu10k1x_pcm *VAR_2;

 if ((VAR_2 = VAR_1->epcm) == ((void*)0))
  return;
 if (VAR_2->substream == ((void*)0))
  return;







 FUNC_3(VAR_2->substream);
}
