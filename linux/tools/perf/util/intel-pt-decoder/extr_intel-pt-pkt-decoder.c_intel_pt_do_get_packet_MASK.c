
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_pt_pkt {int dummy; } ;
typedef enum intel_pt_pkt_ctx { ____Placeholder_intel_pt_pkt_ctx } intel_pt_pkt_ctx ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_2 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_3 (unsigned int,unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_4 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_5 (int ,unsigned int,unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_6 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_7 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_8 (struct intel_pt_pkt*) ;
 int FUNC_9 (unsigned int,struct intel_pt_pkt*) ;
 int FUNC_10 (unsigned char const*,size_t,struct intel_pt_pkt*) ;
 int FUNC_11 (struct intel_pt_pkt*,int ,int) ;

__attribute__((used)) static int FUNC_12(const unsigned char *VAR_6, size_t VAR_7,
      struct intel_pt_pkt *VAR_8,
      enum intel_pt_pkt_ctx VAR_9)
{
 unsigned int VAR_10;

 FUNC_11(VAR_8, 0, sizeof(struct intel_pt_pkt));

 if (!VAR_7)
  return VAR_2;

 VAR_10 = VAR_6[0];

 switch (VAR_9) {
 case 128:
  break;
 case 130:
  if ((VAR_10 & 0x7) == 4)
   return FUNC_1(VAR_6, VAR_7, VAR_8);
  break;
 case 129:
  if ((VAR_10 & 0x7) == 4)
   return FUNC_2(VAR_6, VAR_7, VAR_8);
  break;
 default:
  break;
 };

 if (!(VAR_10 & FUNC_0(0))) {
  if (VAR_10 == 0)
   return FUNC_8(VAR_8);
  if (VAR_10 == 2)
   return FUNC_4(VAR_6, VAR_7, VAR_8);
  return FUNC_9(VAR_10, VAR_8);
 }

 if ((VAR_10 & 2))
  return FUNC_3(VAR_10, VAR_6, VAR_7, VAR_8);

 switch (VAR_10 & 0x1f) {
 case 0x0D:
  return FUNC_5(VAR_3, VAR_10, VAR_6, VAR_7, VAR_8);
 case 0x11:
  return FUNC_5(VAR_5, VAR_10, VAR_6, VAR_7,
           VAR_8);
 case 0x01:
  return FUNC_5(VAR_4, VAR_10, VAR_6, VAR_7,
           VAR_8);
 case 0x1D:
  return FUNC_5(VAR_1, VAR_10, VAR_6, VAR_7, VAR_8);
 case 0x19:
  switch (VAR_10) {
  case 0x99:
   return FUNC_6(VAR_6, VAR_7, VAR_8);
  case 0x19:
   return FUNC_10(VAR_6, VAR_7, VAR_8);
  case 0x59:
   return FUNC_7(VAR_6, VAR_7, VAR_8);
  default:
   return VAR_0;
  }
 default:
  return VAR_0;
 }
}
