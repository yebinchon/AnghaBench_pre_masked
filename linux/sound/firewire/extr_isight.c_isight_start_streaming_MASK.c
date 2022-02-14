
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int channel; } ;
struct TYPE_7__ {TYPE_2__* packets; int iso_buffer; } ;
struct isight {scalar_t__ packet_index; int first_packet; TYPE_4__ resources; int * context; TYPE_3__ buffer; TYPE_1__* device; } ;
struct TYPE_6__ {int offset; } ;
struct TYPE_5__ {int max_speed; int card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int ,int ,int ,int ,int,int ,struct isight*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int *,int ) ;
 int FUNC_6 (int *,int,int ,int ) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (struct isight*) ;
 int VAR_8 ;
 int FUNC_9 (struct isight*) ;
 int FUNC_10 (struct isight*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct isight *VAR_9)
{
 unsigned int VAR_10;
 int VAR_11;

 if (VAR_9->context) {
  if (VAR_9->packet_index < 0)
   FUNC_9(VAR_9);
  else
   return 0;
 }

 VAR_11 = FUNC_10(VAR_9, VAR_6, FUNC_2(VAR_4));
 if (VAR_11 < 0)
  goto error;

 VAR_11 = FUNC_8(VAR_9);
 if (VAR_11 < 0)
  goto error;

 VAR_11 = FUNC_10(VAR_9, VAR_5, FUNC_2(VAR_0));
 if (VAR_11 < 0)
  goto err_resources;

 VAR_9->context = FUNC_3(VAR_9->device->card,
      VAR_2,
      VAR_9->resources.channel,
      VAR_9->device->max_speed,
      4, VAR_8, VAR_9);
 if (FUNC_0(VAR_9->context)) {
  VAR_11 = FUNC_1(VAR_9->context);
  VAR_9->context = ((void*)0);
  goto err_resources;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10) {
  VAR_11 = FUNC_5(VAR_9->context, &VAR_7,
        &VAR_9->buffer.iso_buffer,
        VAR_9->buffer.packets[VAR_10].offset);
  if (VAR_11 < 0)
   goto err_context;
 }

 VAR_9->first_packet = 1;
 VAR_9->packet_index = 0;

 VAR_11 = FUNC_6(VAR_9->context, -1, 0,
       VAR_1 );
 if (VAR_11 < 0)
  goto err_context;

 return 0;

err_context:
 FUNC_4(VAR_9->context);
 VAR_9->context = ((void*)0);
err_resources:
 FUNC_7(&VAR_9->resources);
 FUNC_10(VAR_9, VAR_5, 0);
error:
 return VAR_11;
}
