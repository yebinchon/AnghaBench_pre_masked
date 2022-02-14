
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_1 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_2 (size_t,struct intel_pt_pkt*) ;
 int FUNC_3 (size_t,struct intel_pt_pkt*) ;
 int FUNC_4 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_5 (struct intel_pt_pkt*) ;
 int FUNC_6 (struct intel_pt_pkt*) ;
 int FUNC_7 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_8 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_9 (struct intel_pt_pkt*) ;
 int FUNC_10 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_11 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_12 (struct intel_pt_pkt*) ;
 int FUNC_13 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_14 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_15 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_16 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_17 (struct intel_pt_pkt*) ;
 int FUNC_18 (unsigned char const*,size_t,struct intel_pt_pkt*) ;

__attribute__((used)) static int FUNC_19(const unsigned char *VAR_2, size_t VAR_3,
       struct intel_pt_pkt *VAR_4)
{
 if (VAR_3 < 2)
  return VAR_1;

 if ((VAR_2[1] & 0x1f) == 0x12)
  return FUNC_13(VAR_2, VAR_3, VAR_4);

 switch (VAR_2[1]) {
 case 0xa3:
  return FUNC_7(VAR_2, VAR_3, VAR_4);
 case 0x43:
  return FUNC_10(VAR_2, VAR_3, VAR_4);
 case 0x83:
  return FUNC_17(VAR_4);
 case 0x03:
  return FUNC_4(VAR_2, VAR_3, VAR_4);
 case 0xc8:
  return FUNC_18(VAR_2, VAR_3, VAR_4);
 case 0xf3:
  return FUNC_9(VAR_4);
 case 0x82:
  return FUNC_11(VAR_2, VAR_3, VAR_4);
 case 0x23:
  return FUNC_12(VAR_4);
 case 0x73:
  return FUNC_16(VAR_2, VAR_3, VAR_4);
 case 0xC3:
  return FUNC_0(VAR_2, VAR_3, VAR_4);
 case 0x62:
  return FUNC_5(VAR_4);
 case 0xE2:
  return FUNC_6(VAR_4);
 case 0xC2:
  return FUNC_8(VAR_2, VAR_3, VAR_4);
 case 0x22:
  return FUNC_14(VAR_2, VAR_3, VAR_4);
 case 0xA2:
  return FUNC_15(VAR_2, VAR_3, VAR_4);
 case 0x63:
  return FUNC_1(VAR_2, VAR_3, VAR_4);
 case 0x33:
  return FUNC_2(VAR_3, VAR_4);
 case 0xb3:
  return FUNC_3(VAR_3, VAR_4);
 default:
  return VAR_0;
 }
}
