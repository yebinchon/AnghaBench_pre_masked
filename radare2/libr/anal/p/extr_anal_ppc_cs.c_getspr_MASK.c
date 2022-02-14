
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ut32 ;
struct Getarg {int dummy; } ;
typedef int cspr ;
 int FUNC_0 (struct Getarg*,int ) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static const char* FUNC_2(struct Getarg *VAR_0, int VAR_1) {
 static char VAR_2[16];
 ut32 VAR_3 = 0;
 if (VAR_1 < 0 || VAR_1 >= 8) {
  return ((void*)0);
 }
 VAR_3 = FUNC_0 (VAR_0, 0);
 switch (VAR_3) {
 case 133:
  return "hid0";
 case 132:
  return "hid1";
 case 131:
  return "hid2";
 case 130:
  return "hid4";
 case 129:
  return "hid5";
 case 128:
  return "hid6";
 default:
  FUNC_1 (VAR_2, sizeof (VAR_2), "spr_%u", VAR_3);
  break;
 }
 return VAR_2;
}
