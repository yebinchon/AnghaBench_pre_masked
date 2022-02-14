
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct q6core {int get_state_supported; int resp_received; scalar_t__ avcs_state; int wait; struct apr_device* adev; } ;
struct TYPE_2__ {int opcode; int pkt_size; int hdr_field; } ;
struct apr_pkt {TYPE_1__ hdr; } ;
struct apr_device {int dummy; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct apr_device*,struct apr_pkt*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static bool FUNC_5(struct q6core *VAR_5)
{
 struct apr_device *VAR_6 = VAR_5->adev;
 struct apr_pkt VAR_7;
 int VAR_8;

 VAR_5->get_state_supported = 0;

 VAR_7.hdr.hdr_field = FUNC_0(VAR_1,
          FUNC_1(VAR_0), VAR_2);
 VAR_7.hdr.pkt_size = VAR_0;
 VAR_7.hdr.opcode = VAR_3;

 VAR_8 = FUNC_2(VAR_6, &VAR_7);
 if (VAR_8 < 0)
  return 0;

 VAR_8 = FUNC_4(VAR_5->wait, (VAR_5->resp_received),
    FUNC_3(VAR_4));
 if (VAR_8 > 0 && VAR_5->resp_received) {
  VAR_5->resp_received = 0;

  if (VAR_5->avcs_state)
   return 1;
 }


 if (!VAR_5->get_state_supported)
  return 1;

 return 0;
}
