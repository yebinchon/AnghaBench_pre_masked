
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int channel; } ;
struct TYPE_6__ {int data_block_quadlets; } ;
struct snd_ff {int unit; TYPE_2__ rx_resources; TYPE_3__ rx_stream; } ;
typedef int reg ;
typedef int __le32 ;
struct TYPE_4__ {int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_ff*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_2__*,int ,int ) ;
 TYPE_1__* FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_7(struct snd_ff *VAR_3, unsigned int VAR_4)
{
 u32 VAR_5;
 __le32 VAR_6;
 int VAR_7;

 VAR_6 = FUNC_2(VAR_4);
 VAR_7 = FUNC_6(VAR_3->unit, VAR_2,
     VAR_1, &VAR_6, sizeof(VAR_6), 0);
 if (VAR_7 < 0)
  return VAR_7;




 FUNC_5(100);


 VAR_7 = FUNC_3(&VAR_3->rx_resources,
    FUNC_1(&VAR_3->rx_stream),
    FUNC_4(VAR_3->unit)->max_speed);
 if (VAR_7 < 0)
  return VAR_7;




 VAR_5 = VAR_3->rx_stream.data_block_quadlets << 3;
 VAR_5 = (VAR_5 << 8) | VAR_3->rx_resources.channel;
 VAR_6 = FUNC_2(VAR_5);
 VAR_7 = FUNC_6(VAR_3->unit, VAR_2,
     VAR_0, &VAR_6, sizeof(VAR_6), 0);
 if (VAR_7 < 0)
  return VAR_7;

 return FUNC_0(VAR_3);
}
