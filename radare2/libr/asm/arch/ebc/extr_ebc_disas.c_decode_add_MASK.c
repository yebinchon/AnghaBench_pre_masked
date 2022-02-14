
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut16 ;
typedef int index ;
struct TYPE_5__ {int n; int c; scalar_t__ sign; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_6__ {int operands; int instr; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,char*,unsigned int,char*,unsigned int,char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 char** VAR_3 ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_4, ebc_command_t *VAR_5) {
 char VAR_6;
 int VAR_7 = 2;
 unsigned VAR_8 = FUNC_1 (VAR_4[0], 6)? 64: 32;
 unsigned VAR_9, VAR_10;
 char VAR_11[32] = {0};
 ut16 VAR_12;

 FUNC_3 (VAR_5->instr, VAR_1, "%s%u", VAR_3[VAR_0],
   VAR_8);

 VAR_9 = VAR_4[1] & 0x07;
 VAR_10 = (VAR_4[1] >> 4) & 0x07;

 if (FUNC_1 (VAR_4[0], 7)) {
  VAR_7 = 4;
  if (FUNC_1 (VAR_4[1], 7)) {
   ebc_index_t VAR_13;
   FUNC_2(VAR_4 + 2, &VAR_13);
   VAR_6 = VAR_13.sign ? '+' : '-';
   FUNC_3(VAR_11, sizeof (VAR_11),
    " (%c%d, %c%d)", VAR_6, VAR_13.n, VAR_6, VAR_13.c);
  } else {
   VAR_12 = *(ut16*)&VAR_4[2];
   FUNC_3 (VAR_11, sizeof (VAR_11), "(%u)", VAR_12);
  }
 }

 FUNC_0 (VAR_5->operands, VAR_2, "%sr%d, %sr%d%s",
  FUNC_1 (VAR_4[1], 3) ? "@" : "", VAR_9,
  FUNC_1 (VAR_4[1], 7) ? "@" : "", VAR_10, VAR_11);
 return VAR_7;
}
