
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {int dummy; } ;
typedef enum intel_pt_pkt_ctx { ____Placeholder_intel_pt_pkt_ctx } intel_pt_pkt_ctx ;


 int FUNC_0 (unsigned char const*,size_t,struct intel_pt_pkt*,int) ;
 int FUNC_1 (struct intel_pt_pkt*,int*) ;

int FUNC_2(const unsigned char *VAR_0, size_t VAR_1,
   struct intel_pt_pkt *VAR_2, enum intel_pt_pkt_ctx *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, *VAR_3);
 if (VAR_4 > 0) {
  while (VAR_4 < 8 && VAR_1 > (size_t)VAR_4 && !VAR_0[VAR_4])
   VAR_4 += 1;
  FUNC_1(VAR_2, VAR_3);
 }
 return VAR_4;
}
