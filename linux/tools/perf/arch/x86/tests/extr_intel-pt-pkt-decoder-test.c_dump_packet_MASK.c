
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* u8 ;
struct intel_pt_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct intel_pt_pkt*,char*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct intel_pt_pkt *VAR_4, u8 *VAR_5, int VAR_6)
{
 char VAR_7[VAR_0];
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9++)
  FUNC_1(" %02x", VAR_5[VAR_9]);
 for (; VAR_9 < VAR_1; VAR_9++)
  FUNC_1("   ");
 FUNC_1("   ");
 VAR_8 = FUNC_0(VAR_4, VAR_7, VAR_0);
 if (VAR_8 < 0) {
  FUNC_1("intel_pt_pkt_desc failed!\n");
  return VAR_2;
 }
 FUNC_1("%s\n", VAR_7);

 return VAR_3;
}
