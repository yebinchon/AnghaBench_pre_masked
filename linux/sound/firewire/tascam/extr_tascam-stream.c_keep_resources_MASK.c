
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_iso_resources {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_tscm {int unit; struct fw_iso_resources rx_resources; struct fw_iso_resources tx_resources; struct amdtp_stream tx_stream; } ;
struct TYPE_2__ {int max_speed; } ;


 int FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (struct amdtp_stream*,unsigned int) ;
 int FUNC_2 (struct fw_iso_resources*,int ,int ) ;
 TYPE_1__* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_tscm *VAR_0, unsigned int VAR_1,
     struct amdtp_stream *VAR_2)
{
 struct fw_iso_resources *VAR_3;
 int VAR_4;

 if (VAR_2 == &VAR_0->tx_stream)
  VAR_3 = &VAR_0->tx_resources;
 else
  VAR_3 = &VAR_0->rx_resources;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4 < 0)
  return VAR_4;

 return FUNC_2(VAR_3,
    FUNC_0(VAR_2),
    FUNC_3(VAR_0->unit)->max_speed);
}
