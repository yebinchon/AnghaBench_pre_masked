
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef long long ut64 ;
typedef int ut32 ;
struct TYPE_3__ {long long offset; int anal; int num; } ;
typedef TYPE_1__ RCore ;
typedef int RAnalFunction ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ,char const*) ;
 int * FUNC_3 (int ,long long,int ) ;
 int FUNC_4 (char*,int ) ;
 long long FUNC_5 (int ,char const*) ;

__attribute__((used)) static void FUNC_6(RCore *VAR_1, const char *VAR_2) {
 ut64 VAR_3;
 RAnalFunction *VAR_4;
 if (*VAR_2 == ' ') {
  VAR_3 = FUNC_5 (VAR_1->num, VAR_2);
 } else {
  VAR_3 = VAR_1->offset;
 }
 if (VAR_3 == 0LL) {
  VAR_4 = FUNC_2 (VAR_1->anal, VAR_2 + 3);
 } else {
  VAR_4 = FUNC_3 (VAR_1->anal, VAR_3, VAR_0);
 }
 if (VAR_4) {
  ut32 VAR_5 = FUNC_1 (VAR_1->anal, VAR_4);


  FUNC_4 ("%d\n", VAR_5);
 } else {
  FUNC_0 ("afCc: Cannot find function\n");
 }
}
