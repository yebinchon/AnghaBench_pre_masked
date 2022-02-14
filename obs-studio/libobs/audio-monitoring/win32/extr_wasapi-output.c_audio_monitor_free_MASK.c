
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct audio_monitor {int buf; int delay_buffer; int resampler; TYPE_2__* render; TYPE_2__* client; TYPE_2__* device; scalar_t__ source; scalar_t__ ignore; } ;
struct TYPE_5__ {TYPE_1__* lpVtbl; } ;
struct TYPE_4__ {int (* Stop ) (TYPE_2__*) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,struct audio_monitor*) ;
 int VAR_0 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_6(struct audio_monitor *VAR_1)
{
 if (VAR_1->ignore)
  return;

 if (VAR_1->source) {
  FUNC_3(
   VAR_1->source, VAR_0, VAR_1);
 }

 if (VAR_1->client)
  VAR_1->client->lpVtbl->Stop(VAR_1->client);

 FUNC_4(VAR_1->device);
 FUNC_4(VAR_1->client);
 FUNC_4(VAR_1->render);
 FUNC_0(VAR_1->resampler);
 FUNC_1(&VAR_1->delay_buffer);
 FUNC_2(VAR_1->buf);
}
