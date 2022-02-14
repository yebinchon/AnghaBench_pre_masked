
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char uint8_t ;
struct mg_str {unsigned char len; char* p; } ;
struct TYPE_2__ {size_t len; scalar_t__ p; } ;
struct mg_mqtt_message {TYPE_1__ payload; } ;



int FUNC_0(struct mg_mqtt_message *VAR_0,
                                 struct mg_str *VAR_1, uint8_t *VAR_2, int VAR_3) {
  unsigned char *VAR_4 = (unsigned char *) VAR_0->payload.p + VAR_3;
  int VAR_5;

  if ((size_t) VAR_3 >= VAR_0->payload.len) return -1;

  VAR_1->len = VAR_4[0] << 8 | VAR_4[1];
  VAR_1->p = (char *) VAR_4 + 2;
  VAR_5 = VAR_3 + 2 + VAR_1->len + 1;
  if ((size_t) VAR_5 > VAR_0->payload.len) return -1;
  *VAR_2 = VAR_4[2 + VAR_1->len];
  return VAR_5;
}
