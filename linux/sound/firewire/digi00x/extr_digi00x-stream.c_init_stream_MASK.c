
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_iso_resources {int dummy; } ;
struct amdtp_stream {int dummy; } ;
struct snd_dg00x {int unit; struct fw_iso_resources rx_resources; struct fw_iso_resources tx_resources; struct amdtp_stream tx_stream; } ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdtp_stream*,int ,int) ;
 int FUNC_1 (struct fw_iso_resources*) ;
 int FUNC_2 (struct fw_iso_resources*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_dg00x *VAR_2, struct amdtp_stream *VAR_3)
{
 struct fw_iso_resources *VAR_4;
 enum amdtp_stream_direction VAR_5;
 int VAR_6;

 if (VAR_3 == &VAR_2->tx_stream) {
  VAR_4 = &VAR_2->tx_resources;
  VAR_5 = VAR_0;
 } else {
  VAR_4 = &VAR_2->rx_resources;
  VAR_5 = VAR_1;
 }

 VAR_6 = FUNC_2(VAR_4, VAR_2->unit);
 if (VAR_6 < 0)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_3, VAR_2->unit, VAR_5);
 if (VAR_6 < 0)
  FUNC_1(VAR_4);

 return VAR_6;
}
