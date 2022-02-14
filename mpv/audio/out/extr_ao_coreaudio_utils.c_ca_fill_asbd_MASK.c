
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num; } ;
struct ao {TYPE_1__ channels; int samplerate; int format; } ;
typedef int AudioStreamBasicDescription ;


 int FUNC_0 (int *,int ,int ,int ) ;

void FUNC_1(struct ao *VAR_0, AudioStreamBasicDescription *VAR_1)
{
    FUNC_0(VAR_1, VAR_0->format, VAR_0->samplerate, VAR_0->channels.num);
}
