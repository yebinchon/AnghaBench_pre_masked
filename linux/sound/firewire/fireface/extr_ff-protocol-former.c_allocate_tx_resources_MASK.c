
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {unsigned int channel; } ;
struct TYPE_4__ {int data_block_quadlets; } ;
struct snd_ff {TYPE_1__ tx_resources; int unit; TYPE_2__ tx_stream; } ;
typedef int reg ;
typedef int __le32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_ff *VAR_5)
{
 __le32 VAR_6;
 unsigned int VAR_7;
 unsigned int VAR_8;
 int VAR_9;

 VAR_6 = FUNC_0(VAR_5->tx_stream.data_block_quadlets);
 VAR_9 = FUNC_3(VAR_5->unit, VAR_4,
     VAR_1, &VAR_6, sizeof(VAR_6), 0);
 if (VAR_9 < 0)
  return VAR_9;


 VAR_7 = 0;
 while (VAR_7++ < 10) {
  u32 VAR_10;
  VAR_9 = FUNC_3(VAR_5->unit, VAR_3,
    VAR_2, &VAR_6, sizeof(VAR_6), 0);
  if (VAR_9 < 0)
   return VAR_9;

  VAR_10 = FUNC_1(VAR_6);
  if (VAR_10 != 0xffffffff) {
   VAR_8 = VAR_10;
   break;
  }

  FUNC_2(50);
 }
 if (VAR_7 >= 10)
  return -VAR_0;




 VAR_5->tx_resources.channel = VAR_8;

 return 0;
}
