
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int offset; } ;
struct snd_dg00x {int unit; TYPE_2__ async_handler; } ;
struct fw_device {TYPE_1__* card; } ;
typedef int data ;
typedef int __be32 ;
struct TYPE_3__ {int node_id; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 struct fw_device* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int **,int,int ) ;

int FUNC_3(struct snd_dg00x *VAR_3)
{
 struct fw_device *VAR_4 = FUNC_1(VAR_3->unit);
 __be32 VAR_5[2];


 VAR_5[0] = FUNC_0((VAR_4->card->node_id << 16) |
         (VAR_3->async_handler.offset >> 32));
 VAR_5[1] = FUNC_0(VAR_3->async_handler.offset);
 return FUNC_2(VAR_3->unit, VAR_2,
      VAR_0 + VAR_1,
      &VAR_5, sizeof(VAR_5), 0);
}
