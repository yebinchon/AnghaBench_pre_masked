
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct q6core {int resp_received; int fwk_version_supported; int wait; struct apr_device* adev; } ;
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
 int VAR_5 ;
 int FUNC_2 (struct apr_device*,struct apr_pkt*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,int ) ;

__attribute__((used)) static int FUNC_5(struct q6core *VAR_6)
{
 struct apr_device *VAR_7 = VAR_6->adev;
 struct apr_pkt VAR_8;
 int VAR_9;

 VAR_8.hdr.hdr_field = FUNC_0(VAR_1,
          FUNC_1(VAR_0), VAR_2);
 VAR_8.hdr.pkt_size = VAR_0;
 VAR_8.hdr.opcode = VAR_3;

 VAR_9 = FUNC_2(VAR_7, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_4(VAR_6->wait, (VAR_6->resp_received),
    FUNC_3(VAR_5));
 if (VAR_9 > 0 && VAR_6->resp_received) {
  VAR_6->resp_received = 0;

  if (!VAR_6->fwk_version_supported)
   return -VAR_4;
  else
   return 0;
 }


 return VAR_9;
}
