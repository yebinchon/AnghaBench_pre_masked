
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct intel_pt_pkt {int payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_2, size_t VAR_3,
       struct intel_pt_pkt *VAR_4)
{
 if (VAR_3 < 4)
  return VAR_1;
 VAR_4->type = VAR_0;
 VAR_4->payload = FUNC_0(*(uint16_t *)(VAR_2 + 2));
 return 4;
}
