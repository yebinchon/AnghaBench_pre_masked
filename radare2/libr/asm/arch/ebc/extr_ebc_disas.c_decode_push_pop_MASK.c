
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut16 ;
typedef int op1c ;
struct TYPE_5__ {char sign; int c; int n; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_6__ {char* instr; int operands; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,char*,...) ;
 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 char** VAR_3 ;
 int FUNC_3 (char*,int,char*,char*,unsigned int) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_4, ebc_command_t *VAR_5) {
 int VAR_6 = 2;
 unsigned VAR_7 = VAR_4[1] & 0x07;
 char VAR_8[32];

 FUNC_3 (VAR_5->instr, VAR_0, "%s%u",
   VAR_3[VAR_4[0] & VAR_1],
   FUNC_1(VAR_4[0], 6) ? 64 : 32);

 FUNC_3 (VAR_8, sizeof (VAR_8), "%sr%d",
  FUNC_1(VAR_4[1], 3) ? "@" : "", VAR_7);

 if (FUNC_1 (VAR_4[0], 7)) {
  VAR_6 += 2;
  if (FUNC_1 (VAR_4[1], 3)) {
   ebc_index_t VAR_9;
   char VAR_10;
   FUNC_2(VAR_4 + 2, &VAR_9);

   VAR_10 = VAR_9.sign ? '+' : '-';

   FUNC_0 (VAR_5->operands, VAR_2, "%s (%c%d, %c%d)",
    VAR_8, VAR_10, VAR_9.n, VAR_10, VAR_9.c);
  } else {
   ut16 VAR_11 = *(ut16 *)(VAR_4 + 2);

   FUNC_0 (VAR_5->operands, VAR_2, "%s %u",
    VAR_8, VAR_11);
  }
    } else {
        FUNC_0 (VAR_5->operands, VAR_2, "%s", VAR_8);
    }

 return VAR_6;
}
