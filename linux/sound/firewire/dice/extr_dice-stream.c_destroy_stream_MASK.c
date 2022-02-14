
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dice {struct fw_iso_resources* rx_resources; struct amdtp_stream* rx_stream; struct fw_iso_resources* tx_resources; struct amdtp_stream* tx_stream; } ;
struct fw_iso_resources {int dummy; } ;
struct amdtp_stream {int dummy; } ;
typedef enum amdtp_stream_direction { ____Placeholder_amdtp_stream_direction } amdtp_stream_direction ;


 int VAR_0 ;
 int FUNC_0 (struct amdtp_stream*) ;
 int FUNC_1 (struct fw_iso_resources*) ;

__attribute__((used)) static void FUNC_2(struct snd_dice *VAR_1,
      enum amdtp_stream_direction VAR_2,
      unsigned int VAR_3)
{
 struct amdtp_stream *VAR_4;
 struct fw_iso_resources *VAR_5;

 if (VAR_2 == VAR_0) {
  VAR_4 = &VAR_1->tx_stream[VAR_3];
  VAR_5 = &VAR_1->tx_resources[VAR_3];
 } else {
  VAR_4 = &VAR_1->rx_stream[VAR_3];
  VAR_5 = &VAR_1->rx_resources[VAR_3];
 }

 FUNC_0(VAR_4);
 FUNC_1(VAR_5);
}
