
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ut64 ;
struct TYPE_3__ {int num; } ;
typedef TYPE_1__ RDebug ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static int FUNC_4 (RDebug *VAR_1, ut64 VAR_2, const char *VAR_3) {
 char *VAR_4 = FUNC_2 (VAR_3);
 if (!VAR_4) {
  return 0;
 }
 char *VAR_5 = FUNC_3 (VAR_4, "..");
 ut64 VAR_6,VAR_7;
 int VAR_8 = 0;
 if (VAR_5) {
  *VAR_5 = 0;
  VAR_5 += 2;
  VAR_6 = FUNC_1 (VAR_1->num, VAR_4);
  VAR_7 = FUNC_1 (VAR_1->num, VAR_5);
  if (VAR_6<VAR_7) {
   if (VAR_2 >= VAR_6 && VAR_2 <= VAR_7) {
    VAR_8 = 1;
   }
  } else {
   if (VAR_2 >= VAR_7 && VAR_2 <= VAR_6) {
    VAR_8 = 1;
   }
  }
 } else {
  VAR_6 = FUNC_1 (VAR_1->num, VAR_4);
  if (VAR_2 == VAR_6) {
   VAR_8 = 1;
  }
 }
 VAR_0 = VAR_8;
 FUNC_0 (VAR_4);
 return VAR_8;
}
