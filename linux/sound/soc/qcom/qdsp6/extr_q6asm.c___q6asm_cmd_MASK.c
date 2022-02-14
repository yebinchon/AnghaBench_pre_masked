
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct audio_client {int stream_id; int adev; } ;
struct TYPE_2__ {int opcode; } ;
struct apr_pkt {TYPE_1__ hdr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;






 int VAR_7 ;
 int FUNC_0 (int ,struct apr_pkt*) ;
 int FUNC_1 (struct audio_client*,struct apr_pkt*) ;
 int FUNC_2 (struct audio_client*,TYPE_1__*,int ,int,int) ;
 int FUNC_3 (struct audio_client*) ;

__attribute__((used)) static int FUNC_4(struct audio_client *VAR_8, int VAR_9, bool VAR_10)
{
 int VAR_11 = VAR_8->stream_id;
 struct apr_pkt VAR_12;
 int VAR_13;

 FUNC_2(VAR_8, &VAR_12.hdr, VAR_0, 1, VAR_11);

 switch (VAR_9) {
 case 129:
  VAR_12.hdr.opcode = VAR_2;
  break;
 case 128:
  VAR_12.hdr.opcode = VAR_3;
  break;
 case 131:
  VAR_12.hdr.opcode = VAR_5;
  break;
 case 130:
  VAR_12.hdr.opcode = VAR_6;
  break;
 case 132:
  VAR_12.hdr.opcode = VAR_1;
  break;
 case 133:
  VAR_12.hdr.opcode = VAR_4;
  break;
 default:
  return -VAR_7;
 }

 if (VAR_10)
  VAR_13 = FUNC_1(VAR_8, &VAR_12);
 else
  return FUNC_0(VAR_8->adev, &VAR_12);

 if (VAR_13 < 0)
  return VAR_13;

 if (VAR_9 == 131)
  FUNC_3(VAR_8);

 return 0;
}
