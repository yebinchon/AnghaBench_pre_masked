
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct intel_pt_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct intel_pt_pkt const*,char*,int) ;
 int FUNC_3 (unsigned char const*,int,int ,int ) ;

void FUNC_4(const struct intel_pt_pkt *VAR_2, int VAR_3,
      uint64_t VAR_4, const unsigned char *VAR_5)
{
 char VAR_6[VAR_0];

 if (FUNC_1())
  return;

 FUNC_3(VAR_5, VAR_3, VAR_4, 0);
 FUNC_2(VAR_2, VAR_6, VAR_0);
 FUNC_0(VAR_1, "%s\n", VAR_6);
}
