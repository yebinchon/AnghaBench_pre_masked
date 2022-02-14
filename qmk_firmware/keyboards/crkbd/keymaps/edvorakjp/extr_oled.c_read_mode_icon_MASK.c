
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int member_0; int member_1; int member_2; } ;
struct TYPE_3__ {int member_0; int member_1; int member_2; } ;


 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (char*,char const*) ;

const char *FUNC_2(bool VAR_0) {
  static const char VAR_1[][2][3] = {{{0x95, 0x96, 0}, {0xb5, 0xb6, 0}}, {{0x97, 0x98, 0}, {0xb7, 0xb8, 0}}};
  static char VAR_2[10];

  int VAR_3 = VAR_0 ? 1 : 0;
  FUNC_1(VAR_2, VAR_1[VAR_3][0]);

  FUNC_0(VAR_2, "\n");
  FUNC_0(VAR_2, VAR_1[VAR_3][1]);

  return VAR_2;
}
