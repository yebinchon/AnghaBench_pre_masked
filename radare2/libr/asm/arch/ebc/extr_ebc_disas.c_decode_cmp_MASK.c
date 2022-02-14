
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef int ut16 ;
struct TYPE_5__ {int c; int n; scalar_t__ sign; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_6__ {int operands; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,int,int,...) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(const ut8 *VAR_1, ebc_command_t *VAR_2) {
 int VAR_3 = 2;
 int VAR_4, VAR_5;
 char VAR_6;
 ut16 VAR_7;
 ebc_index_t VAR_8;

 VAR_4 = VAR_1[1] & 0x07;
 VAR_5 = (VAR_1[1] >> 4) & 0x07;

 if (FUNC_1 (VAR_1[0], 7)) {
  VAR_3 += 2;
  if (FUNC_1 (VAR_1[1], 7)) {
   FUNC_2 (VAR_1 + 2, &VAR_8);
   VAR_6 = VAR_8.sign ? '+' : '-';
   FUNC_0 (VAR_2->operands, VAR_0,
    "r%d, @r%d (%c%d, %c%d)",
    VAR_4, VAR_5, VAR_6, VAR_8.n, VAR_6, VAR_8.c);
  } else {
   VAR_7 = *(ut16 *)&VAR_1[2];
   FUNC_0 (VAR_2->operands, VAR_0,
    "r%d, r%d %d", VAR_4, VAR_5, VAR_7);
  }
 } else {
  FUNC_0 (VAR_2->operands, VAR_0,
   "r%d, r%d", VAR_4, VAR_5);
 }

 return VAR_3;
}
