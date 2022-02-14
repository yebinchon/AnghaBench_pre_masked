
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_1__ ;


struct TYPE_30__ {int data_len; char* data; int no_ack; scalar_t__ server_debug; } ;
typedef TYPE_1__ libgdbr_t ;
typedef int gdbr_server_cmd_cb ;


 int FUNC_0 (TYPE_1__*,int ,void*) ;
 int FUNC_1 (TYPE_1__*,int ,void*) ;
 int FUNC_2 (TYPE_1__*,int ,void*) ;
 int FUNC_3 (TYPE_1__*,int ,void*) ;
 int FUNC_4 (TYPE_1__*,int ,void*) ;
 int FUNC_5 (TYPE_1__*,int ,void*) ;
 int FUNC_6 (TYPE_1__*,int ,void*) ;
 int FUNC_7 (TYPE_1__*,int ,void*) ;
 int FUNC_8 (TYPE_1__*,int ,void*) ;
 int FUNC_9 (TYPE_1__*,int ,void*) ;
 int FUNC_10 (TYPE_1__*,int ,void*) ;
 int FUNC_11 (TYPE_1__*,int ,void*) ;
 int FUNC_12 (TYPE_1__*,int ,void*) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ,void*) ;
 int FUNC_16 (TYPE_1__*,int ,void*) ;
 int FUNC_17 (TYPE_1__*,int ,void*) ;
 int FUNC_18 (TYPE_1__*,int ,void*) ;
 int FUNC_19 (TYPE_1__*,int ,void*) ;
 int FUNC_20 (TYPE_1__*,int ,void*) ;
 int FUNC_21 (TYPE_1__*,int ,void*) ;
 int FUNC_22 (TYPE_1__*) ;
 int FUNC_23 (TYPE_1__*,int ,void*) ;
 int FUNC_24 (char*,...) ;
 scalar_t__ FUNC_25 (char*,char*) ;
 scalar_t__ FUNC_26 (TYPE_1__*,int) ;
 scalar_t__ FUNC_27 (TYPE_1__*) ;
 scalar_t__ FUNC_28 (TYPE_1__*,char*) ;

int FUNC_29(libgdbr_t *VAR_0, gdbr_server_cmd_cb VAR_1, void *VAR_2) {
 int VAR_3;
 if (!VAR_0) {
  return -1;
 }
 while (1) {
  if (FUNC_26 (VAR_0, 0) < 0) {
   continue;
  }
  if (VAR_0->data_len == 0) {
   continue;
  }
  if (FUNC_25 (VAR_0->data, "k")) {
   return FUNC_7 (VAR_0, VAR_1, VAR_2);
  }
  if (FUNC_25 (VAR_0->data, "vKill")) {
   return FUNC_21 (VAR_0, VAR_1, VAR_2);
  }
  if (FUNC_25 (VAR_0->data, "qSupported")) {
   if ((VAR_3 = FUNC_13 (VAR_0)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "qTStatus")) {
   if ((VAR_3 = FUNC_14 (VAR_0)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "qC") && VAR_0->data_len == 2) {
   if ((VAR_3 = FUNC_11 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "qAttached")) {
   if ((VAR_3 = FUNC_10 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "vMustReplyEmpty")) {
   if ((VAR_3 = FUNC_22 (VAR_0)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "qTfV")) {
   if ((VAR_3 = FUNC_15 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "qfThreadInfo")) {
   if ((VAR_3 = FUNC_16 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "qsThreadInfo")) {
   if ((VAR_3 = FUNC_17 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "Hg")) {
   if ((VAR_3 = FUNC_1 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "Hc")) {
   if ((VAR_3 = FUNC_0 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "?")) {
   if ((VAR_3 = FUNC_18 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "g") && VAR_0->data_len == 1) {
   if ((VAR_3 = FUNC_6 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "vCont")) {
   if ((VAR_3 = FUNC_20 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "qOffsets")) {
   if ((VAR_3 = FUNC_12 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (VAR_0->data[0] == 'z' || VAR_0->data[0] == 'Z') {
   if ((VAR_3 = FUNC_23 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (VAR_0->data[0] == 's') {
   if ((VAR_3 = FUNC_19 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (VAR_0->data[0] == 'c') {
   if ((VAR_3 = FUNC_4 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "m")) {
   if ((VAR_3 = FUNC_8 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "M")) {
   if ((VAR_3 = FUNC_2 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "P")) {
   if ((VAR_3 = FUNC_3 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "p")) {
   if ((VAR_3 = FUNC_9 (VAR_0, VAR_1, VAR_2)) < 0) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "qXfer:exec-file:read:")) {
   if ((VAR_3 = FUNC_5 (VAR_0, VAR_1, VAR_2)) < 0 ) {
    return VAR_3;
   }
   continue;
  }
  if (FUNC_25 (VAR_0->data, "QStartNoAckMode")) {
   if (FUNC_27 (VAR_0) < 0) {
    return -1;
   }
   VAR_0->no_ack = 1;
   if (VAR_0->server_debug) {
    FUNC_24 ("[noack mode enabled]\n");
   }
   if (FUNC_28 (VAR_0, "OK") < 0) {
    return -1;
   }
   continue;
  }

  if (FUNC_27 (VAR_0) < 0 || FUNC_28 (VAR_0, "") < 0) {
   VAR_0->data[VAR_0->data_len] = '\0';
   FUNC_24 ("Unknown packet: %s\n", VAR_0->data);
   return -1;
  }
 };
 return VAR_3;
}
