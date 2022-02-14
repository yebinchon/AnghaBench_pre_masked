
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arm_spe_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 unsigned int VAR_18 ;
 unsigned int VAR_19 ;
 unsigned int VAR_20 ;
 unsigned int VAR_21 ;
 int FUNC_0 (unsigned char const*,size_t,int,struct arm_spe_pkt*) ;
 int FUNC_1 (unsigned char const*,size_t,struct arm_spe_pkt*) ;
 int FUNC_2 (unsigned char const*,size_t,struct arm_spe_pkt*) ;
 int FUNC_3 (unsigned char const*,size_t,int,struct arm_spe_pkt*) ;
 int FUNC_4 (unsigned char const*,size_t,struct arm_spe_pkt*) ;
 int FUNC_5 (struct arm_spe_pkt*) ;
 int FUNC_6 (unsigned char const*,size_t,struct arm_spe_pkt*) ;
 int FUNC_7 (unsigned char const*,size_t,struct arm_spe_pkt*) ;
 int FUNC_8 (struct arm_spe_pkt*) ;
 int FUNC_9 (unsigned char const*,size_t,struct arm_spe_pkt*) ;
 int FUNC_10 (struct arm_spe_pkt*,int ,int) ;

__attribute__((used)) static int FUNC_11(const unsigned char *VAR_22, size_t VAR_23,
     struct arm_spe_pkt *VAR_24)
{
 unsigned int VAR_25;

 FUNC_10(VAR_24, 0, sizeof(struct arm_spe_pkt));

 if (!VAR_23)
  return VAR_1;

 VAR_25 = VAR_22[0];
 if (VAR_25 == VAR_13)
  return FUNC_8(VAR_24);
 else if (VAR_25 == VAR_8)
  return FUNC_5(VAR_24);
 else if (VAR_25 & 0xc0 ) {
  if (VAR_25 & 0x80) {
   if ((VAR_25 & VAR_3) == VAR_2)
    return FUNC_0(VAR_22, VAR_23, 0, VAR_24);
   if ((VAR_25 & VAR_7) == VAR_6)
    return FUNC_3(VAR_22, VAR_23, 0, VAR_24);
  } else
   if (VAR_25 == VAR_16)
    return FUNC_9(VAR_22, VAR_23, VAR_24);
   else if ((VAR_25 & VAR_10) == VAR_9)
    return FUNC_6(VAR_22, VAR_23, VAR_24);
   else if ((VAR_25 & VAR_15) == VAR_14)
    return FUNC_4(VAR_22, VAR_23, VAR_24);
   else if ((VAR_25 & VAR_5) == VAR_4)
    return FUNC_2(VAR_22, VAR_23, VAR_24);
   else if ((VAR_25 & VAR_12) == VAR_11)
    return FUNC_7(VAR_22, VAR_23, VAR_24);
 } else if ((VAR_25 & 0xe0) == 0x20 ) {

  VAR_25 = VAR_22[1];
  if (VAR_25 == VAR_19)
   return FUNC_1(VAR_22, VAR_23, VAR_24);
  else if ((VAR_25 & VAR_18) == VAR_17)
   return FUNC_0(VAR_22, VAR_23, 1, VAR_24);
  else if ((VAR_25 & VAR_21) == VAR_20)
   return FUNC_3(VAR_22, VAR_23, 1, VAR_24);
 }

 return VAR_0;
}
