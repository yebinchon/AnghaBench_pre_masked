
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int offset; } ;
struct snd_ff {TYPE_2__* spec; int unit; TYPE_1__ async_handler; } ;
struct fw_card {int node_id; } ;
typedef int reg ;
typedef int __le32 ;
struct TYPE_6__ {struct fw_card* card; } ;
struct TYPE_5__ {int midi_high_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ,int *,int,int ) ;

int FUNC_3(struct snd_ff *VAR_1)
{
 struct fw_card *VAR_2 = FUNC_1(VAR_1->unit)->card;
 u32 VAR_3;
 __le32 VAR_4;





 VAR_3 = (VAR_2->node_id << 16) | (VAR_1->async_handler.offset >> 32);
 VAR_4 = FUNC_0(VAR_3);
 return FUNC_2(VAR_1->unit, VAR_0,
      VAR_1->spec->midi_high_addr,
      &VAR_4, sizeof(VAR_4), 0);
}
