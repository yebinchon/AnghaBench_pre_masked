
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_8__ {int channel; } ;
struct TYPE_9__ {TYPE_1__ hdr; } ;
struct TYPE_10__ {int* data; TYPE_2__ pkt; } ;
struct TYPE_11__ {char* send_buff; int send_len; int channelwr; int sock; TYPE_3__ tran; } ;
typedef TYPE_4__ libqnxr_t ;






 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int ,char*,int) ;

int FUNC_4 (libqnxr_t *VAR_0) {
 if (!VAR_0) {
  FUNC_0 ("Initialize libqnxr_t first\n");
  return -1;
 }

 int VAR_1;
 ut8 VAR_2 = 0;
 char *VAR_3;

 VAR_3 = VAR_0->send_buff;
 *VAR_3++ = 130;

 for (VAR_1 = 0; VAR_1 < VAR_0->send_len; VAR_1++) {
  ut8 VAR_4 = VAR_0->tran.data[VAR_1];
  VAR_2 += VAR_4;

  switch (VAR_4) {
  case 130:
  case 131:
   *VAR_3++ = 131;
   VAR_4 ^= 0x20;
   break;
  }
  *VAR_3++ = VAR_4;
 }

 VAR_2 ^= 0xff;
 switch (VAR_2) {
 case 130:
 case 131:
  *VAR_3++ = 131;
  VAR_2 ^= 0x20;
  break;
 }
 *VAR_3++ = VAR_2;
 *VAR_3++ = 130;

 if (VAR_0->channelwr != VAR_0->tran.pkt.hdr.channel) {
  switch (VAR_0->tran.pkt.hdr.channel) {
  case 128:
   FUNC_2 (VAR_0);
   break;
  case 129:
   FUNC_1 (VAR_0);
   break;
  }
  VAR_0->channelwr = VAR_0->tran.pkt.hdr.channel;
 }

 return FUNC_3 (VAR_0->sock, VAR_0->send_buff, VAR_3 - VAR_0->send_buff);
}
