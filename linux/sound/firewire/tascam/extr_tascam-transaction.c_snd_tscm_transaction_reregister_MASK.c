
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct snd_tscm {int unit; TYPE_2__ async_handler; } ;
struct fw_device {TYPE_1__* card; } ;
typedef int reg ;
typedef int __be32 ;
struct TYPE_3__ {int node_id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int) ;
 struct fw_device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int *,int,int ) ;

int FUNC_3(struct snd_tscm *VAR_6)
{
 struct fw_device *VAR_7 = FUNC_1(VAR_6->unit);
 __be32 VAR_8;
 int VAR_9;


 VAR_8 = FUNC_0((VAR_7->card->node_id << 16) |
     (VAR_6->async_handler.offset >> 32));
 VAR_9 = FUNC_2(VAR_6->unit, VAR_0,
     VAR_1 + VAR_3,
     &VAR_8, sizeof(VAR_8), 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_8 = FUNC_0(VAR_6->async_handler.offset);
 VAR_9 = FUNC_2(VAR_6->unit, VAR_0,
     VAR_1 + VAR_4,
     &VAR_8, sizeof(VAR_8), 0);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_8 = FUNC_0(0x00000001);
 VAR_9 = FUNC_2(VAR_6->unit, VAR_0,
      VAR_1 + VAR_5,
      &VAR_8, sizeof(VAR_8), 0);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_8 = FUNC_0(0x0001008e);
 return FUNC_2(VAR_6->unit, VAR_0,
      VAR_1 + VAR_2,
      &VAR_8, sizeof(VAR_8), 0);
}
