
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_7__ {char sign; int n; int c; int member_0; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_8__ {char* instr; int operands; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,char*,char*,char*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 int FUNC_3 (int const*,TYPE_1__*) ;
 int FUNC_4 (int const*,TYPE_1__*) ;
 char** VAR_3 ;
 int FUNC_5 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_6(const ut8 *VAR_4, ebc_command_t *VAR_5) {
 int VAR_6 = 2;
 char VAR_7 = 0;
 char VAR_8[32] = {0};
 char VAR_9[32] = {0};
 char VAR_10[32];
 char VAR_11;
 ebc_index_t VAR_12 = {0};

 switch (VAR_4[0] >> 6) {
 case 0: VAR_6 = -1; break;
 case 1: VAR_7 = 'w'; break;
 case 2: VAR_7 = 'd'; break;
 case 3: VAR_7 = 'q'; break;
 }

 if (VAR_6 < 0) {
  return VAR_6;
 }

 FUNC_5(VAR_5->instr, VAR_0, "%s%c",
   VAR_3[VAR_4[0] & VAR_1], VAR_7);

 if (FUNC_1(VAR_4[1], 6)) {
  FUNC_2(VAR_4 + 2, &VAR_12);

  VAR_11 = VAR_12.sign ? '+' : '-';

  FUNC_5(VAR_8, 32, "(%c%u, %c%u)", VAR_11,
    VAR_12.n, VAR_11, VAR_12.c);

  VAR_6 += 2;
 }

 switch (VAR_7) {
 case 'w':
  FUNC_2(VAR_4 + VAR_6, &VAR_12);
  VAR_6 += 2;
  break;
 case 'd':
  FUNC_3(VAR_4 + VAR_6, &VAR_12);
  VAR_6 += 4;
  break;
 case 'q':
  FUNC_4(VAR_4 + VAR_6, &VAR_12);
  VAR_6 += 8;
  break;
 }

 VAR_11 = VAR_12.sign ? '+' : '-';

 FUNC_5 (VAR_9, 32, "(%c%u, %c%u)", VAR_11, VAR_12.n, VAR_11, VAR_12.c);

 FUNC_5 (VAR_10, 32, "%sr%u", FUNC_1 (VAR_4[1], 3) ? "@" : "", VAR_4[1] & 0x7);
 FUNC_0 (VAR_5->operands, VAR_2, "%s%s, %s", VAR_10, VAR_8, VAR_9);
 return VAR_6;
}
