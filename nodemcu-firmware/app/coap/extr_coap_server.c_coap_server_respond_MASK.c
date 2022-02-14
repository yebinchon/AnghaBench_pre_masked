
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int scratch_raw ;
struct TYPE_11__ {int member_1; int * member_0; } ;
typedef TYPE_2__ coap_rw_buffer_t ;
struct TYPE_10__ {scalar_t__ len; int * p; } ;
struct TYPE_12__ {TYPE_1__ content; } ;
typedef TYPE_3__ coap_packet_t ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,size_t*,TYPE_3__*) ;
 int FUNC_2 (char*,size_t,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,char*,unsigned short) ;
 int FUNC_6 (int *) ;

size_t FUNC_7(char *VAR_0, unsigned short VAR_1, char *VAR_2, unsigned short VAR_3)
{
  FUNC_0("coap_server_respond is called.\n");
  size_t VAR_4 = VAR_3;
  coap_packet_t VAR_5;
  VAR_5.content.p = ((void*)0);
  VAR_5.content.len = 0;
  uint8_t VAR_6[4];
  coap_rw_buffer_t VAR_7 = {VAR_6, sizeof(VAR_6)};
  int VAR_8;







  if (0 != (VAR_8 = FUNC_5(&VAR_5, VAR_0, VAR_1))){
    FUNC_0("Bad packet rc=%d\n", VAR_8);
    return 0;
  }
  else
  {
    coap_packet_t VAR_9;
    VAR_9.content.p = ((void*)0);
    VAR_9.content.len = 0;



    FUNC_4(&VAR_7, &VAR_5, &VAR_9);
    if (0 != (VAR_8 = FUNC_1(VAR_2, &VAR_4, &VAR_9))){
      FUNC_0("coap_build failed rc=%d\n", VAR_8);

      VAR_4 = 0;
    }
    else
    {
    }
    if(VAR_9.content.p){
      FUNC_6(VAR_9.content.p);
      VAR_9.content.p = ((void*)0);
      VAR_9.content.len = 0;
    }
    return VAR_4;
  }
}
