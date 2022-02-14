
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; scalar_t__ count; scalar_t__ payload; } ;
struct test_data {int ctx; int len; int new_ctx; int bytes; TYPE_1__ packet; scalar_t__ ctx_unchanged; } ;
struct intel_pt_pkt {scalar_t__ type; scalar_t__ count; scalar_t__ payload; } ;
typedef int packet ;
typedef enum intel_pt_pkt_ctx { ____Placeholder_intel_pt_pkt_ctx } intel_pt_pkt_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct test_data*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int FUNC_2 (struct test_data*,struct intel_pt_pkt*,int,int) ;
 int FUNC_3 (int ,int,struct intel_pt_pkt*,int*) ;
 int FUNC_4 (struct intel_pt_pkt*,int,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct test_data*,struct intel_pt_pkt*,int ) ;

__attribute__((used)) static int FUNC_7(struct test_data *VAR_5)
{
 struct intel_pt_pkt VAR_6;
 enum intel_pt_pkt_ctx VAR_7 = VAR_5->ctx;
 int VAR_8;

 FUNC_4(&VAR_6, 0xff, sizeof(VAR_6));


 VAR_8 = FUNC_3(VAR_5->bytes, VAR_5->len, &VAR_6, &VAR_7);
 if (VAR_8 < 0 || VAR_8 > VAR_3) {
  FUNC_0(VAR_5);
  FUNC_5("intel_pt_get_packet returned %d\n", VAR_8);
  return VAR_4;
 }


 if (VAR_5->ctx_unchanged) {
  int VAR_9;

  VAR_9 = FUNC_6(VAR_5, &VAR_6, VAR_2);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_6(VAR_5, &VAR_6, VAR_0);
  if (VAR_9)
   return VAR_9;
  VAR_9 = FUNC_6(VAR_5, &VAR_6, VAR_1);
  if (VAR_9)
   return VAR_9;
 }


 if (VAR_8 != VAR_5->len || VAR_6.type != VAR_5->packet.type ||
     VAR_6.count != VAR_5->packet.count ||
     VAR_6.payload != VAR_5->packet.payload || VAR_7 != VAR_5->new_ctx)
  return FUNC_2(VAR_5, &VAR_6, VAR_8, VAR_7);

 FUNC_5("Decoded ok:");
 VAR_8 = FUNC_1(&VAR_5->packet, VAR_5->bytes, VAR_5->len);

 return VAR_8;
}
