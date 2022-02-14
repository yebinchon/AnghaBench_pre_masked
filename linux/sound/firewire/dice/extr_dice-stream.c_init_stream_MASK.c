
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {int unit; struct fw_iso_resources* rx_resources; struct amdtp_stream* rx_stream; struct fw_iso_resources* tx_resources; struct amdtp_stream* tx_stream; } ;
struct fw_iso_resources {int channels_mask; } ;
struct amdtp_stream {int dummy; } ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdtp_stream*,int ,int,int ) ;
 int FUNC_1 (struct amdtp_stream*) ;
 int FUNC_2 (struct fw_iso_resources*) ;
 int FUNC_3 (struct fw_iso_resources*,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_dice *VAR_2, enum amdtp_stream_direction VAR_3,
         unsigned int VAR_4)
{
 struct amdtp_stream *VAR_5;
 struct fw_iso_resources *VAR_6;
 int VAR_7;

 if (VAR_3 == VAR_0) {
  VAR_5 = &VAR_2->tx_stream[VAR_4];
  VAR_6 = &VAR_2->tx_resources[VAR_4];
 } else {
  VAR_5 = &VAR_2->rx_stream[VAR_4];
  VAR_6 = &VAR_2->rx_resources[VAR_4];
 }

 VAR_7 = FUNC_3(VAR_6, VAR_2->unit);
 if (VAR_7 < 0)
  goto end;
 VAR_6->channels_mask = 0x00000000ffffffffuLL;

 VAR_7 = FUNC_0(VAR_5, VAR_2->unit, VAR_3, VAR_1);
 if (VAR_7 < 0) {
  FUNC_1(VAR_5);
  FUNC_2(VAR_6);
 }
end:
 return VAR_7;
}
