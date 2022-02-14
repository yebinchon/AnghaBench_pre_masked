
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
struct TYPE_5__ {int n; int c; int sign; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_6__ {int operands; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,char*,char*,char*,char*) ;


 int const VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 int FUNC_3 (char*,int,char*,...) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_2, ebc_command_t *VAR_3) {
 int VAR_4 = 2;
 unsigned VAR_5, VAR_6;
 char VAR_7[32], VAR_8[32], VAR_9;
 char VAR_10[32] = {0}, VAR_11[32] = {0};

 VAR_5 = VAR_2[1] & 0x07;
 VAR_6 = (VAR_2[1] >> 4) & 0x07;

 FUNC_3(VAR_7, 32, "%sr%u", FUNC_1(VAR_2[1], 3) ? "@" : "", VAR_5);
 FUNC_3(VAR_8, 32, "%sr%u", FUNC_1(VAR_2[1], 7) ? "@" : "", VAR_6);

 switch (VAR_2[0] & VAR_0) {
 case 128:
  if (FUNC_1(VAR_2[0], 7)) {
   ebc_index_t VAR_12;
   VAR_4 += 2;
   FUNC_2(VAR_2 + 2, &VAR_12);
   VAR_9 = VAR_12.sign? '+': '-';
   FUNC_3 (VAR_10, 32, "(%c%u, %c%u)",
    VAR_9, VAR_12.n, VAR_9, VAR_12.c);
  }
  if (FUNC_1(VAR_2[0], 6)) {
   ebc_index_t VAR_13;
   FUNC_2 (VAR_2 + VAR_4, &VAR_13);
   VAR_9 = VAR_13.sign? '+': '-';
   FUNC_3 (VAR_11, 32, "(%c%u, %c%u)",
    VAR_9, VAR_13.n, VAR_9, VAR_13.c);
   VAR_4 += 2;
  }
  break;
 case 129:
  break;
 }
 FUNC_0 (VAR_3->operands, VAR_1, "%s%s, %s%s",
  VAR_7, VAR_10, VAR_8, VAR_11);
 return VAR_4;
}
