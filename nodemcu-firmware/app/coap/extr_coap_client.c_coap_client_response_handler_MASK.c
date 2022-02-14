
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
typedef int coap_tid_t ;
struct TYPE_11__ {scalar_t__ p; } ;
struct TYPE_10__ {scalar_t__ t; int code; } ;
struct TYPE_9__ {scalar_t__ len; int * p; } ;
struct TYPE_12__ {TYPE_3__ payload; TYPE_2__ hdr; TYPE_1__ content; } ;
typedef TYPE_4__ coap_packet_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (TYPE_4__*,char*,unsigned short) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int const,int const,TYPE_4__*,int *) ;
 int VAR_4 ;

void FUNC_10(char *VAR_5, unsigned short VAR_6, unsigned short VAR_7, const uint32_t VAR_8, const uint32_t VAR_9)
{
  FUNC_1("coap_client_response_handler is called.\n");
  coap_packet_t VAR_10;
  VAR_10.content.p = ((void*)0);
  VAR_10.content.len = 0;
  int VAR_11;

  if (0 != (VAR_11 = FUNC_4(&VAR_10, VAR_5, VAR_6))){
    FUNC_1("Bad packet rc=%d\n", VAR_11);
  }
  else
  {




    if (!FUNC_2(&VAR_10)) {

      if (VAR_10.hdr.t == VAR_1 || VAR_10.hdr.t == VAR_2){


      }
      goto end;
    }

    if (VAR_10.hdr.t == VAR_3) {
      FUNC_1("got RST\n");
      goto end;
    }

    coap_tid_t VAR_12 = VAR_0;
    FUNC_9(VAR_8, VAR_9, &VAR_10, &VAR_12);


    FUNC_7();

    FUNC_5(&VAR_4, VAR_12);

    FUNC_8(&VAR_4);
    FUNC_6(&VAR_4);

    if (FUNC_0(VAR_10.hdr.code) == 2)
    {

      FUNC_1("%d.%02d\t", (VAR_10.hdr.code >> 5), VAR_10.hdr.code & 0x1F);
      FUNC_1((char *)(VAR_10.payload.p));
    }
    else if (FUNC_0(VAR_10.hdr.code) >= 4)
    {
      FUNC_1("%d.%02d\t", (VAR_10.hdr.code >> 5), VAR_10.hdr.code & 0x1F);
      FUNC_1((char *)(VAR_10.payload.p));
    }
  }

end:
  if(!VAR_4){

  }
}
