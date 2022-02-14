
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int layer_name ;





 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,char*,int ) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

const char *FUNC_4(void) {
  static char VAR_1[24];
  char VAR_2[17];

  switch (FUNC_0(VAR_0)) {
    case 130:
      FUNC_3(VAR_2, "Default");
      break;
    case 128:
      FUNC_3(VAR_2, "Raise");
      break;
    case 129:
      FUNC_3(VAR_2, "Lower");
      break;
    default:
      FUNC_1(VAR_2, sizeof(VAR_2), "Undef-%ld", VAR_0);
  }

  FUNC_3(VAR_1, "Layer: ");

  FUNC_2(VAR_1, VAR_2);
  FUNC_2(VAR_1, "\n");
  return VAR_1;
}
