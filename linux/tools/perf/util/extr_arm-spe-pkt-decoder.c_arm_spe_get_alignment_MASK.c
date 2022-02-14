
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_spe_pkt {int type; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(const unsigned char *VAR_2, size_t VAR_3,
     struct arm_spe_pkt *VAR_4)
{
 unsigned int VAR_5 = 1 << ((VAR_2[0] & 0xf) + 1);

 if (VAR_3 < VAR_5)
  return VAR_0;

 VAR_4->type = VAR_1;
 return VAR_5 - (((uintptr_t)VAR_2) & (VAR_5 - 1));
}
