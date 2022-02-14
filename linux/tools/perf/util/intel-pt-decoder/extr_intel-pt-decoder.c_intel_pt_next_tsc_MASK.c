
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_pkt {scalar_t__ type; int payload; } ;
typedef enum intel_pt_pkt_ctx { ____Placeholder_intel_pt_pkt_ctx } intel_pt_pkt_ctx ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (unsigned char*,size_t,struct intel_pt_pkt*,int*) ;

__attribute__((used)) static bool FUNC_1(unsigned char *VAR_3, size_t VAR_4, uint64_t *VAR_5,
         size_t *VAR_6)
{
 enum intel_pt_pkt_ctx VAR_7 = VAR_0;
 struct intel_pt_pkt VAR_8;
 int VAR_9;

 while (VAR_4) {
  VAR_9 = FUNC_0(VAR_3, VAR_4, &VAR_8, &VAR_7);
  if (VAR_9 <= 0)
   return 0;
  if (VAR_8.type == VAR_2) {
   *VAR_5 = VAR_8.payload;
   *VAR_6 = VAR_4;
   return 1;
  }
  if (VAR_8.type == VAR_1)
   return 0;
  VAR_3 += VAR_9;
  VAR_4 -= VAR_9;
 }
 return 0;
}
