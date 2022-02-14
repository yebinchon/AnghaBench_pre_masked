
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {unsigned char payload; unsigned char count; int type; } ;


 unsigned char const FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_2, size_t VAR_3,
       struct intel_pt_pkt *VAR_4)
{
 if (VAR_3 < 7)
  return VAR_0;

 VAR_4->type = VAR_1;
 VAR_4->payload = VAR_2[2] | (VAR_2[3] << 8);
 VAR_4->count = VAR_2[5] | ((VAR_2[6] & FUNC_0(0)) << 8);
 return 7;
}
