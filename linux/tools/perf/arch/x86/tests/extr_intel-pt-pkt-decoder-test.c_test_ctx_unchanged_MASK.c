
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct test_data {int dummy; } ;
struct intel_pt_pkt {int dummy; } ;
typedef enum intel_pt_pkt_ctx { ____Placeholder_intel_pt_pkt_ctx } intel_pt_pkt_ctx ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct test_data*) ;
 int FUNC_1 (struct intel_pt_pkt*,int*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3(struct test_data *VAR_2, struct intel_pt_pkt *VAR_3,
         enum intel_pt_pkt_ctx VAR_4)
{
 enum intel_pt_pkt_ctx VAR_5 = VAR_4;

 FUNC_1(VAR_3, &VAR_4);

 if (VAR_4 != VAR_5) {
  FUNC_0(VAR_2);
  FUNC_2("Packet context changed!\n");
  return VAR_0;
 }

 return VAR_1;
}
