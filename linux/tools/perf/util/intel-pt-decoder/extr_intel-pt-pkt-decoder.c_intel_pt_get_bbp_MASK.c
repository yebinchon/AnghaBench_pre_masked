
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {unsigned char count; unsigned char payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const unsigned char *VAR_2, size_t VAR_3,
       struct intel_pt_pkt *VAR_4)
{
 if (VAR_3 < 3)
  return VAR_1;
 VAR_4->type = VAR_0;
 VAR_4->count = VAR_2[2] >> 7;
 VAR_4->payload = VAR_2[2] & 0x1f;
 return 3;
}
