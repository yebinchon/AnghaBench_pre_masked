
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;
typedef int mrb_state ;
typedef int mrb_irep ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *,int,int**,size_t*) ;
 scalar_t__ FUNC_3 (int *,char*,...) ;
 scalar_t__ FUNC_4 (char*,int *) ;
 int FUNC_5 (int *,int*) ;

int
FUNC_6(mrb_state *VAR_6, mrb_irep *VAR_7, uint8_t VAR_8, FILE *VAR_9, const char *VAR_10)
{
  uint8_t *VAR_11 = ((void*)0);
  size_t VAR_12 = 0, VAR_13 = 0;
  int VAR_14;

  if (VAR_9 == ((void*)0) || VAR_10 == ((void*)0) || VAR_10[0] == '\0') {
    return VAR_3;
  }
  VAR_8 = FUNC_1(VAR_8, VAR_1);
  VAR_14 = FUNC_2(VAR_6, VAR_7, VAR_8, &VAR_11, &VAR_12);
  if (VAR_14 == VAR_4) {
    if (!FUNC_0(VAR_8)) {
      if (FUNC_3(VAR_9, "/* dumped in little endian order.\n"
                  "   use `mrbc -E` option for big endian CPU. */\n") < 0) {
        FUNC_5(VAR_6, VAR_11);
        return VAR_5;
      }
    }
    else {
      if (FUNC_3(VAR_9, "/* dumped in big endian order.\n"
                  "   use `mrbc -e` option for better performance on little endian CPU. */\n") < 0) {
        FUNC_5(VAR_6, VAR_11);
        return VAR_5;
      }
    }
    if (FUNC_3(VAR_9, "#include <stdint.h>\n") < 0) {
      FUNC_5(VAR_6, VAR_11);
      return VAR_5;
    }
    if (FUNC_3(VAR_9,
          "#ifdef __cplusplus\n"
          "extern const uint8_t %s[];\n"
          "#endif\n"
          "const uint8_t\n"
          "#if defined __GNUC__\n"
          "__attribute__((aligned(%u)))\n"
          "#elif defined _MSC_VER\n"
          "__declspec(align(%u))\n"
          "#endif\n"
          "%s[] = {",
          VAR_10,
          (uint16_t)VAR_2, (uint16_t)VAR_2, VAR_10) < 0) {
      FUNC_5(VAR_6, VAR_11);
      return VAR_5;
    }
    while (VAR_13 < VAR_12) {
      if (VAR_13 % 16 == 0) {
        if (FUNC_4("\n", VAR_9) == VAR_0) {
          FUNC_5(VAR_6, VAR_11);
          return VAR_5;
        }
      }
      if (FUNC_3(VAR_9, "0x%02x,", VAR_11[VAR_13++]) < 0) {
        FUNC_5(VAR_6, VAR_11);
        return VAR_5;
      }
    }
    if (FUNC_4("\n};\n", VAR_9) == VAR_0) {
      FUNC_5(VAR_6, VAR_11);
      return VAR_5;
    }
  }

  FUNC_5(VAR_6, VAR_11);
  return VAR_14;
}
