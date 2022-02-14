
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_6__ {int n; int c; scalar_t__ sign; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_7__ {int operands; int instr; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,char*,char*,char*,char*) ;
 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 int FUNC_3 (int const*,TYPE_1__*) ;
 char** VAR_4 ;
 int FUNC_4 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_5(const ut8 *VAR_5, ebc_command_t *VAR_6) {
 int VAR_7 = 2;
 unsigned VAR_8 = VAR_5[1] & 0x07;
 unsigned VAR_9 = (VAR_5[1] >> 4) & 0x07;
 char VAR_10[32], VAR_11[32];
 char VAR_12[32] = {0};
 char VAR_13[32] = {0};
 char VAR_14;
 ebc_index_t VAR_15;

 FUNC_4(VAR_6->instr, VAR_0, "%s",
   VAR_4[VAR_5[0] & VAR_2]);

 FUNC_4(VAR_10, 32, "%sr%u", FUNC_1(VAR_5[1], 3) ? "@" : "", VAR_8);
 FUNC_4(VAR_11, 32, "%sr%u", FUNC_1(VAR_5[1], 7) ? "@" : "", VAR_9);

 if ((VAR_5[0] & VAR_2) == VAR_1) {
  if (FUNC_1(VAR_5[0], 7)) {
   FUNC_2(VAR_5 + VAR_7, &VAR_15);
   VAR_14 = VAR_15.sign ? '+' : '-';
   FUNC_4(VAR_12, 32, "(%c%u, %c%u)", VAR_14, VAR_15.n, VAR_14, VAR_15.c);
   VAR_7 += 2;
  }
  if (FUNC_1(VAR_5[0], 6)) {
   FUNC_2(VAR_5 + VAR_7, &VAR_15);
   VAR_14 = VAR_15.sign ? '+' : '-';
   FUNC_4(VAR_13, 32, "(%c%u, %c%u)", VAR_14, VAR_15.n, VAR_14, VAR_15.c);
   VAR_7 += 2;
  }
 } else {
  if (FUNC_1(VAR_5[0], 7)) {
   FUNC_3(VAR_5 + VAR_7, &VAR_15);
   VAR_14 = VAR_15.sign ? '+' : '-';
   FUNC_4(VAR_12, 32, "(%c%u, %c%u)", VAR_14, VAR_15.n, VAR_14, VAR_15.c);
   VAR_7 += 4;
  }
  if (FUNC_1(VAR_5[0], 6)) {
   FUNC_3(VAR_5 + VAR_7, &VAR_15);
   VAR_14 = VAR_15.sign ? '+' : '-';
   FUNC_4(VAR_13, 32, "(%c%u, %c%u)", VAR_14, VAR_15.n, VAR_14, VAR_15.c);
   VAR_7 += 4;
  }
 }

 FUNC_0 (VAR_6->operands, VAR_3, "%s%s, %s%s", VAR_10, VAR_12, VAR_11, VAR_13);
 return VAR_7;
}
