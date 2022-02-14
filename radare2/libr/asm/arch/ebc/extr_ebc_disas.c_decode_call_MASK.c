
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ut8 ;
typedef unsigned long ut64 ;
typedef int ut32 ;
struct TYPE_5__ {int c; int n; scalar_t__ sign; } ;
typedef TYPE_1__ ebc_index_t ;
struct TYPE_6__ {int instr; int operands; } ;
typedef TYPE_2__ ebc_command_t ;


 int FUNC_0 (int ,int ,char*,int,...) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int const,int) ;
 int FUNC_2 (int const*,TYPE_1__*) ;
 int * VAR_3 ;
 int FUNC_3 (int ,int ,char*,int) ;

__attribute__((used)) static int FUNC_4(const ut8 *VAR_4, ebc_command_t *VAR_5) {
 int VAR_6;
 short VAR_7 = 32;
 ut8 VAR_8 = VAR_4[1] & 0x7;
 ut32 VAR_9;
 unsigned long VAR_10;
 ebc_index_t VAR_11;
 char VAR_12;

 if (!FUNC_1 (VAR_4[0], 6)) {

  VAR_7 = 32;
  VAR_6 = 2;
  if (FUNC_1 (VAR_4[1], 3)) {

   if (FUNC_1 (VAR_4[0], 7)) {

    FUNC_2 (VAR_4 + 2, &VAR_11);
    VAR_12 = VAR_11 ? '+' : '-';

    FUNC_0 (VAR_5->operands, VAR_2,
     "@r%d(%c%u, %c%u)",
     VAR_8, VAR_12, VAR_11, VAR_12, VAR_11);
    VAR_6 = 6;
   } else {
    FUNC_3 (VAR_5->operands, VAR_2,
     "@r%d", VAR_8);
   }
  } else {

   if (FUNC_1 (VAR_4[0], 7)) {

    VAR_9 = *(ut32 *)(VAR_4 + 2);
    FUNC_0 (VAR_5->operands, VAR_2,
     "r%d(0x%x)", VAR_8, VAR_9);
    VAR_6 = 6;
   } else {

    FUNC_0 (VAR_5->operands, VAR_2,
     "r%d", VAR_8);
   }
  }
 } else {
  VAR_7 = 64;
  VAR_6 = 10;
  VAR_10 = *(ut64 *)&VAR_4[2];
  FUNC_0 (VAR_5->operands, VAR_2, "0x%lx", VAR_10);
 }
 FUNC_0 (VAR_5->instr, VAR_1, "%s%d%s%s",
  VAR_3[VAR_0], VAR_7,
  FUNC_1 (VAR_4[1], 5) ? "ex" : "",
  FUNC_1 (VAR_4[1], 4) ? "" : "a");
 return VAR_6;
}
