
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int mnemonic; int type; int family; } ;
typedef int Sdb ;
typedef int RCore ;
typedef TYPE_1__ RAnalOp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 char* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,char const*,int,int ) ;
 char* FUNC_5 (int ) ;
 char* FUNC_6 (char*,char*) ;

__attribute__((used)) static void FUNC_7(RCore *VAR_3, Sdb *VAR_4, ut64 VAR_5, int VAR_6) {
 RAnalOp *VAR_7 = FUNC_3 (VAR_3, VAR_5, VAR_0 | VAR_2 | VAR_1);
 if (!VAR_7) {
  return;
 }
 if (VAR_6 == 'f') {
  const char *VAR_8 = FUNC_0 (VAR_7->family);
  FUNC_4 (VAR_4, VAR_8, 1, 0);
 } else if (VAR_6 == 'o') {
  const char *VAR_9 = FUNC_2 (VAR_7->type);
  FUNC_4 (VAR_4, VAR_9, 1, 0);
 } else {
  char *VAR_10 = FUNC_5 (VAR_7->mnemonic);
  char *VAR_11 = FUNC_6 (VAR_10, " ");
  if (VAR_11) {
   *VAR_11 = 0;

  }
  FUNC_4 (VAR_4, VAR_10, 1, 0);
 }


 FUNC_1 (VAR_7);

}
