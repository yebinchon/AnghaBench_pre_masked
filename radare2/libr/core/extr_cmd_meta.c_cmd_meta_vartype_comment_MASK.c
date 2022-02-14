
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ut64 ;
struct TYPE_4__ {int offset; int anal; int num; } ;
typedef TYPE_1__ RCore ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ,int ,int) ;
 char* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ,char*) ;
 int FUNC_8 (int ,char const*) ;
 char* FUNC_9 (char const*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*,char*) ;
 char* FUNC_14 (char const*) ;
 scalar_t__ FUNC_15 (char const*) ;

__attribute__((used)) static int FUNC_16(RCore *VAR_2, const char *VAR_3) {
 ut64 VAR_4 = VAR_2->offset;
 switch (VAR_3[1]) {
 case '?':
  FUNC_3 (VAR_2, VAR_1);
  break;
 case 0:
  FUNC_6 (VAR_2->anal, VAR_0, 0);
  break;
 case ' ':
  {
  const char* VAR_5 = FUNC_9 (VAR_3 + 2);
  char *VAR_6, *VAR_7 = FUNC_5 (VAR_2->anal, VAR_0, VAR_4);
  char *VAR_8 = FUNC_14 (VAR_5);
  FUNC_10 (VAR_8);
  if (VAR_7) {
   VAR_6 = FUNC_1 (FUNC_15 (VAR_7)+ FUNC_15 (VAR_5)+2);
   if (VAR_6) {
    FUNC_13 (VAR_6, VAR_7);
    FUNC_12 (VAR_6, " ");
    FUNC_12 (VAR_6, VAR_8);
    FUNC_7 (VAR_2->anal, VAR_0, VAR_4, VAR_6);
    FUNC_0 (VAR_7);
    FUNC_0 (VAR_6);
   } else {
    FUNC_11 ("malloc");
   }
  } else {
   FUNC_7 (VAR_2->anal, VAR_0, VAR_4, VAR_8);
  }
  FUNC_0 (VAR_8);
  }
  break;
 case '.':
  {
  ut64 VAR_9 = VAR_3[2]? FUNC_8 (VAR_2->num, VAR_3 + 2): VAR_4;
  char *VAR_10 = FUNC_5 (
    VAR_2->anal, VAR_0, VAR_9);
  if (VAR_10) {
   FUNC_2 (VAR_10);
   FUNC_0 (VAR_10);
  }
  }
  break;
 case '-':
  FUNC_4 (VAR_2->anal, VAR_0, VAR_2->offset, 1);
  break;
 default:
  FUNC_3 (VAR_2, VAR_1);
  break;
 }

 return 1;
}
