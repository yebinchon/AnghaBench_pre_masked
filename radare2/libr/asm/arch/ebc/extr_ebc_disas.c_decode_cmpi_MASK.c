
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut32 ;
typedef int ut16 ;
typedef int op1c ;
typedef int indx ;
typedef int immed ;
struct TYPE_5__ {char sign; int n; int c; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_6__ {int operands; int instr; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,char*,char*,char*) ;
 int const VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 char** VAR_4 ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_5, ebc_command_t *VAR_6) {
 int VAR_7 = 2;
 unsigned VAR_8 = VAR_5[1] & 0x07;
 char VAR_9[32];
 char VAR_10[32] = {0};
 char VAR_11[32] = {0};
 char *VAR_12[] = {"eq", "lte", "gte", "ulte", "ugte"};

 FUNC_3 (VAR_9, sizeof (VAR_9)-1, "%sr%u",
  FUNC_1(VAR_5[1], 3) ? "@" : "", VAR_8);

 FUNC_3 (VAR_6->instr, VAR_1, "%s%u%c%s",
   VAR_4[VAR_5[0] & VAR_2],
   FUNC_1(VAR_5[0], 6) ? 64 : 32,
   FUNC_1(VAR_5[0], 7) ? 'd' : 'w',
   VAR_12[(VAR_5[0] & VAR_2) - VAR_0]
   );

 if (FUNC_1 (VAR_5[1], 4)) {
  char VAR_13;
  ebc_index_t VAR_14;

  FUNC_2(VAR_5 + 2, &VAR_14);

  VAR_13 = VAR_14.sign ? '+' : '-';

  FUNC_3(VAR_10, sizeof (VAR_10), " (%c%u, %c%u)", VAR_13, VAR_14.n, VAR_13, VAR_14.c);

  VAR_7 += 2;
 }

 if (FUNC_1(VAR_5[0], 7)) {
  ut32 VAR_15 = *(ut32*)(VAR_5 + VAR_7);
  FUNC_3 (VAR_11, sizeof (VAR_11), "%u", VAR_15);
  VAR_7 += 4;
 } else {
  ut16 VAR_16 = *(ut16*)(VAR_5 + VAR_7);
  FUNC_3 (VAR_11, sizeof (VAR_11), "%u", VAR_16);
  VAR_7 += 2;
 }

 FUNC_0 (VAR_6->operands, VAR_3, "%s%s, %s", VAR_9, VAR_10, VAR_11);
 return VAR_7;
}
