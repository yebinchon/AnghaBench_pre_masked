
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int id; } ;
struct TYPE_4__ {int dev_info; TYPE_1__ layer; } ;
struct cfctrl {TYPE_2__ serv; } ;
struct caif_payload_info {int * dev_info; int channel_id; scalar_t__ hdr_len; } ;



__attribute__((used)) static void FUNC_0(struct caif_payload_info *VAR_0, struct cfctrl *VAR_1)
{
 VAR_0->hdr_len = 0;
 VAR_0->channel_id = VAR_1->serv.layer.id;
 VAR_0->dev_info = &VAR_1->serv.dev_info;
}
