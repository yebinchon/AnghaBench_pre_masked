
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_spe_pkt {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (unsigned char const*,size_t,struct arm_spe_pkt*) ;

int FUNC_1(const unsigned char *VAR_1, size_t VAR_2,
         struct arm_spe_pkt *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);



 if (VAR_4 > 0 && VAR_3->type == VAR_0) {
  while (VAR_4 < 16 && VAR_2 > (size_t)VAR_4 && !VAR_1[VAR_4])
   VAR_4 += 1;
 }
 return VAR_4;
}
