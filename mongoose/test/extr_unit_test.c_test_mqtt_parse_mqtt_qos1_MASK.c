
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int p; int len; } ;
struct TYPE_3__ {int p; int len; } ;
struct mg_mqtt_message {TYPE_2__ payload; TYPE_1__ topic; int message_id; int qos; int cmd; } ;
struct mbuf {int dummy; } ;
typedef int msg_qos1 ;
typedef int mm ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (struct mbuf*,char*,int) ;
 int FUNC_3 (struct mbuf*) ;
 int FUNC_4 (struct mbuf*,int ) ;
 int FUNC_5 (struct mg_mqtt_message*,int ,int) ;
 int FUNC_6 (struct mbuf*,struct mg_mqtt_message*) ;

__attribute__((used)) static const char *FUNC_7(void) {

  struct mg_mqtt_message VAR_1;
  char VAR_2[] = {
      ((VAR_0 << 4) | (1 << 1)),
      2 + 6 + 2 + 7,
      0, 6, '/', 't', 'o', 'p', 'i', 'c',
      0x12, 0x34,
      'p', 'a', 'y', 'l', 'o', 'a', 'd',
  };

  struct mbuf VAR_3;
  FUNC_5(&VAR_1, 0, sizeof(VAR_1));
  FUNC_4(&VAR_3, 0);
  FUNC_2(&VAR_3, VAR_2, sizeof(VAR_2));
  FUNC_0(FUNC_6(&VAR_3, &VAR_1), (int) sizeof(VAR_2));
  FUNC_0(VAR_1.cmd, VAR_0);
  FUNC_0(VAR_1.qos, 1);
  FUNC_0(VAR_1.message_id, 0x1234);
  FUNC_0(VAR_1.topic.len, 6);
  FUNC_1(VAR_1.topic.p, "/topic");
  FUNC_0(VAR_1.payload.len, 7);
  FUNC_1(VAR_1.payload.p, "payload");
  FUNC_3(&VAR_3);
  return ((void*)0);
}
