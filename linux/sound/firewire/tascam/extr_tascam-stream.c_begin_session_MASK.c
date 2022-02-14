
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int channel; } ;
struct TYPE_3__ {int channel; } ;
struct snd_tscm {int unit; TYPE_2__ rx_resources; TYPE_1__ tx_resources; } ;
typedef int reg ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,scalar_t__,int *,int,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_tscm *VAR_9)
{
 __be32 VAR_10;
 int VAR_11;


 VAR_10 = FUNC_0(VAR_9->tx_resources.channel);
 VAR_11 = FUNC_1(VAR_9->unit, VAR_0,
     VAR_1 + VAR_4,
     &VAR_10, sizeof(VAR_10), 0);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_10 = FUNC_0(0x00000002);
 VAR_11 = FUNC_1(VAR_9->unit, VAR_0,
     VAR_1 + VAR_8,
     &VAR_10, sizeof(VAR_10), 0);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_10 = FUNC_0(VAR_9->rx_resources.channel);
 VAR_11 = FUNC_1(VAR_9->unit, VAR_0,
     VAR_1 + VAR_2,
     &VAR_10, sizeof(VAR_10), 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_0(0x00000001);
 VAR_11 = FUNC_1(VAR_9->unit, VAR_0,
     VAR_1 + VAR_7,
     &VAR_10, sizeof(VAR_10), 0);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_10 = FUNC_0(0x00000001);
 VAR_11 = FUNC_1(VAR_9->unit, VAR_0,
     VAR_1 + VAR_3,
     &VAR_10, sizeof(VAR_10), 0);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_10 = FUNC_0(0x00002000);
 VAR_11 = FUNC_1(VAR_9->unit, VAR_0,
     VAR_1 + VAR_6,
     &VAR_10, sizeof(VAR_10), 0);
 if (VAR_11 < 0)
  return VAR_11;


 VAR_10 = FUNC_0(0x00000001);
 return FUNC_1(VAR_9->unit,
      VAR_0,
      VAR_1 + VAR_5,
      &VAR_10, sizeof(VAR_10), 0);
}
