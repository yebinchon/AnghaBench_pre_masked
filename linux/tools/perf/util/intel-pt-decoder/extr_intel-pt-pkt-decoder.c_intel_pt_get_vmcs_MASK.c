
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {unsigned int count; int payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned char const*,unsigned int) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_3, size_t VAR_4,
        struct intel_pt_pkt *VAR_5)
{
 unsigned int VAR_6 = (52 - 5) >> 3;

 if (VAR_6 < 1 || VAR_6 > 7)
  return VAR_0;

 if (VAR_4 < VAR_6 + 2)
  return VAR_1;

 VAR_5->type = VAR_2;
 VAR_5->count = VAR_6;
 FUNC_0(&VAR_5->payload, VAR_3 + 2, VAR_6);

 return VAR_6 + 2;
}
