
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef unsigned long ut64 ;
typedef scalar_t__ ut32 ;
typedef scalar_t__ ut16 ;
struct TYPE_5__ {char sign; int n; int c; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_6__ {int operands; int instr; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,char*,char*,unsigned long) ;
 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 char** VAR_3 ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_4, ebc_command_t *VAR_5) {
 int VAR_6 = 2;
 char VAR_7 = 0, VAR_8 = 0;
 char VAR_9[32] = {0};
 char VAR_10[32];
 unsigned long VAR_11 = 0;

 switch (VAR_4[0] >> 6) {
 case 0: VAR_6 = -1; break;
 case 1: VAR_8 = 'w'; break;
 case 2: VAR_8 = 'd'; break;
 case 3: VAR_8 = 'q'; break;
 }

 if (VAR_6 < 0) {
  return VAR_6;
 }

 switch ((VAR_4[1] >> 4) & 0x3) {
 case 0: VAR_7 = 'b'; break;
 case 1: VAR_7 = 'w'; break;
 case 2: VAR_7 = 'd'; break;
 case 3: VAR_7 = 'q'; break;
 }

 FUNC_3(VAR_5->instr, VAR_0, "%s%c%c",
   VAR_3[VAR_4[0] & VAR_1], VAR_7, VAR_8);

 if (FUNC_1(VAR_4[1], 6)) {
  char VAR_12;
  ebc_index_t VAR_13;

  FUNC_2(VAR_4 + 2, &VAR_13);
  VAR_12 = VAR_13.sign ? '+' : '-';

  FUNC_3(VAR_9, 32, "(%c%u, %c%u)", VAR_12, VAR_13.n, VAR_12, VAR_13.c);

  VAR_6 += 2;
 }

 switch (VAR_8) {
 ut16 VAR_14;
 ut32 VAR_15;
 ut64 VAR_16;
 case 'w':
  VAR_14 = *(ut16*)(VAR_4 + VAR_6);
  VAR_11 = (unsigned long)VAR_14;
  VAR_6 += 2;
  break;
 case 'd':
  VAR_15 = *(ut32*)(VAR_4 + VAR_6);
  VAR_11 = (unsigned long)VAR_15;
  VAR_6 += 4;
  break;
 case 'q':
  VAR_16 = *(ut64*)(VAR_4 + VAR_6);
  VAR_11 = VAR_16;
  VAR_6 += 8;
  break;
 }

 FUNC_3 (VAR_10, 32, "%sr%u", FUNC_1 (VAR_4[1], 3) ? "@" : "", VAR_4[1] & 0x7);
 FUNC_0 (VAR_5->operands, VAR_2, "%s%s, %lu", VAR_10, VAR_9, VAR_11);
 return VAR_6;
}
