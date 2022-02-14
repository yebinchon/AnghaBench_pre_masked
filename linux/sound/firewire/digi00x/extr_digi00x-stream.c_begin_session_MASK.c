
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int channel; } ;
struct TYPE_3__ {int channel; } ;
struct snd_dg00x {int unit; TYPE_2__ rx_resources; TYPE_1__ tx_resources; } ;
typedef int data ;
typedef int __be32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,scalar_t__,int *,int,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_dg00x *VAR_6)
{
 __be32 VAR_7;
 u32 VAR_8;
 int VAR_9;


 VAR_7 = FUNC_1((VAR_6->tx_resources.channel << 16) |
      VAR_6->rx_resources.channel);
 VAR_9 = FUNC_3(VAR_6->unit, VAR_5,
     VAR_0 + VAR_1,
     &VAR_7, sizeof(VAR_7), 0);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_3(VAR_6->unit, VAR_4,
     VAR_0 + VAR_3,
     &VAR_7, sizeof(VAR_7), 0);
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8 = FUNC_0(VAR_7);

 if (VAR_8 == 0)
  VAR_8 = 2;

 VAR_8--;
 while (VAR_8 > 0) {
  VAR_7 = FUNC_1(VAR_8);
  VAR_9 = FUNC_3(VAR_6->unit,
      VAR_5,
      VAR_0 +
      VAR_2,
      &VAR_7, sizeof(VAR_7), 0);
  if (VAR_9 < 0)
   break;

  FUNC_2(20);
  VAR_8--;
 }

 return VAR_9;
}
