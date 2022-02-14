
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_iso_resources {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_dg00x {int unit; struct fw_iso_resources rx_resources; struct fw_iso_resources tx_resources; struct amdtp_stream tx_stream; } ;
struct TYPE_2__ {int max_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdtp_stream*,unsigned int,int ) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (struct fw_iso_resources*,int ,int ) ;
 TYPE_1__* FUNC_3 (int ) ;
 int * VAR_2 ;
 unsigned int* VAR_3 ;

__attribute__((used)) static int FUNC_4(struct snd_dg00x *VAR_4, struct amdtp_stream *VAR_5,
     unsigned int VAR_6)
{
 struct fw_iso_resources *VAR_7;
 int VAR_8;
 int VAR_9;


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_3[VAR_8] == VAR_6)
   break;
 }
 if (VAR_8 == VAR_1)
  return -VAR_0;

 if (VAR_5 == &VAR_4->tx_stream)
  VAR_7 = &VAR_4->tx_resources;
 else
  VAR_7 = &VAR_4->rx_resources;

 VAR_9 = FUNC_0(VAR_5, VAR_6,
           VAR_2[VAR_8]);
 if (VAR_9 < 0)
  return VAR_9;

 return FUNC_2(VAR_7,
    FUNC_1(VAR_5),
    FUNC_3(VAR_4->unit)->max_speed);
}
