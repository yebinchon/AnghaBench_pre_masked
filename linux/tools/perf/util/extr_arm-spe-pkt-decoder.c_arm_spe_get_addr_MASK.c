
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_spe_pkt {unsigned char index; int payload; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_1(const unsigned char *VAR_2, size_t VAR_3,
       const unsigned char VAR_4, struct arm_spe_pkt *VAR_5)
{
 if (VAR_3 < 8)
  return VAR_1;

 VAR_5->type = VAR_0;
 if (VAR_4)
  VAR_5->index = ((VAR_2[0] & 0x3) << 3) | (VAR_2[1] & 0x7);
 else
  VAR_5->index = VAR_2[0] & 0x7;

 FUNC_0(&VAR_5->payload, VAR_2 + 1, 8);

 return 1 + VAR_4 + 8;
}
