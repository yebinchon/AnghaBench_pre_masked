
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int count; scalar_t__ payload; } ;
struct test_data {int len; int new_ctx; TYPE_1__ packet; } ;
struct intel_pt_pkt {int type; int count; scalar_t__ payload; } ;
typedef enum intel_pt_pkt_ctx { ____Placeholder_intel_pt_pkt_ctx } intel_pt_pkt_ctx ;


 int VAR_0 ;
 int FUNC_0 (struct test_data*) ;
 int FUNC_1 (char*,unsigned long long,int) ;

__attribute__((used)) static int FUNC_2(struct test_data *VAR_1, struct intel_pt_pkt *VAR_2, int VAR_3,
  enum intel_pt_pkt_ctx VAR_4)
{
 FUNC_0(VAR_1);

 if (VAR_3 != VAR_1->len)
  FUNC_1("Expected length: %d   Decoded length %d\n",
    VAR_1->len, VAR_3);

 if (VAR_2->type != VAR_1->packet.type)
  FUNC_1("Expected type: %d   Decoded type %d\n",
    VAR_1->packet.type, VAR_2->type);

 if (VAR_2->count != VAR_1->packet.count)
  FUNC_1("Expected count: %d   Decoded count %d\n",
    VAR_1->packet.count, VAR_2->count);

 if (VAR_2->payload != VAR_1->packet.payload)
  FUNC_1("Expected payload: 0x%llx   Decoded payload 0x%llx\n",
    (unsigned long long)VAR_1->packet.payload,
    (unsigned long long)VAR_2->payload);

 if (VAR_4 != VAR_1->new_ctx)
  FUNC_1("Expected packet context: %d   Decoded packet context %d\n",
    VAR_1->new_ctx, VAR_4);

 return VAR_0;
}
